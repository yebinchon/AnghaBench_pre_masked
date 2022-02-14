
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm97xx {int pen_probably_down; int dev; TYPE_1__* mach_ops; } ;
struct TYPE_2__ {int (* post_sample ) (int) ;int (* pre_sample ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (struct wm97xx*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct wm97xx*,int ) ;
 int FUNC_8 (struct wm97xx*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct wm97xx *VAR_10, int VAR_11, int *VAR_12)
{
 int VAR_13 = 5 * VAR_9;
 bool VAR_14 = VAR_11 & VAR_7;

 if (VAR_14 && !VAR_10->pen_probably_down) {
  u16 VAR_15 = FUNC_7(VAR_10, VAR_2);
  if (!(VAR_15 & VAR_7))
   return VAR_4;
  VAR_10->pen_probably_down = 1;
 }


 if (VAR_10->mach_ops && VAR_10->mach_ops->pre_sample)
  VAR_10->mach_ops->pre_sample(VAR_11);
 FUNC_8(VAR_10, VAR_1, (VAR_11 & VAR_6)
    | VAR_8 | FUNC_0(VAR_9));


 FUNC_3(VAR_9);


 while ((FUNC_7(VAR_10, VAR_1) & VAR_8)
        && VAR_13) {
  FUNC_6(VAR_0);
  VAR_13--;
 }

 if (VAR_13 <= 0) {

  if (FUNC_2(VAR_10))
   VAR_10->pen_probably_down = 0;
  else
   FUNC_1(VAR_10->dev, "adc sample timeout\n");
  return VAR_4;
 }

 *VAR_12 = FUNC_7(VAR_10, VAR_2);
 if (VAR_10->mach_ops && VAR_10->mach_ops->post_sample)
  VAR_10->mach_ops->post_sample(VAR_11);


 if ((*VAR_12 ^ VAR_11) & VAR_6) {
  FUNC_1(VAR_10->dev, "adc wrong sample, wanted %x got %x\n",
   VAR_11 & VAR_6,
   *VAR_12 & VAR_6);
  return VAR_3;
 }

 if (VAR_14 && !(*VAR_12 & VAR_7)) {

  *VAR_12 = FUNC_7(VAR_10, VAR_2);
  if (!(*VAR_12 & VAR_7)) {
   VAR_10->pen_probably_down = 0;
   return VAR_4;
  }
 }

 return VAR_5;
}
