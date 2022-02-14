
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_lr ;
typedef int u8 ;
struct opal_lr_act {int* lr; int num_lrs; scalar_t__ sum; } ;
struct opal_dev {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,struct opal_dev*,int*,int) ;
 int FUNC_1 (int*,struct opal_dev*,int) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (struct opal_dev*,int ,int ) ;
 int FUNC_4 (struct opal_dev*,int ) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct opal_dev *VAR_10, void *VAR_11)
{
 struct opal_lr_act *VAR_12 = VAR_11;
 u8 VAR_13[VAR_6];
 u8 VAR_14 = 0x83;
 int VAR_15, VAR_16;

 VAR_15 = FUNC_3(VAR_10, VAR_8[VAR_3],
   VAR_7[VAR_0]);

 if (VAR_12->sum) {
  VAR_15 = FUNC_2(VAR_13, sizeof(VAR_13),
       VAR_12->lr[0]);
  if (VAR_15)
   return VAR_15;

  FUNC_1(&VAR_15, VAR_10, VAR_5);
  FUNC_1(&VAR_15, VAR_10, VAR_14);
  FUNC_1(&VAR_15, VAR_10, 6);
  FUNC_1(&VAR_15, VAR_10, 0);
  FUNC_1(&VAR_15, VAR_10, 0);

  FUNC_1(&VAR_15, VAR_10, VAR_4);
  FUNC_0(&VAR_15, VAR_10, VAR_13, VAR_6);
  for (VAR_16 = 1; VAR_16 < VAR_12->num_lrs; VAR_16++) {
   VAR_13[7] = VAR_12->lr[VAR_16];
   FUNC_0(&VAR_15, VAR_10, VAR_13, VAR_6);
  }
  FUNC_1(&VAR_15, VAR_10, VAR_1);
  FUNC_1(&VAR_15, VAR_10, VAR_2);
 }

 if (VAR_15) {
  FUNC_5("Error building Activate LockingSP command.\n");
  return VAR_15;
 }

 return FUNC_4(VAR_10, VAR_9);
}
