
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_context {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct gsc_context *VAR_12)
{
 u32 VAR_13;
 int VAR_14 = VAR_9;


 VAR_13 = (VAR_11);
 FUNC_4(VAR_13, VAR_10);


 while (VAR_14--) {
  VAR_13 = FUNC_3(VAR_10);
  if (!VAR_13)
   break;
  FUNC_5(1000, 2000);
 }

 if (VAR_13) {
  FUNC_0(VAR_12->dev, "failed to reset gsc h/w.\n");
  return -VAR_0;
 }


 VAR_13 = FUNC_3(VAR_4);
 VAR_13 |= (VAR_3 |
  FUNC_1(0));
 FUNC_4(VAR_13, VAR_4);
 FUNC_4(VAR_13, VAR_1);
 FUNC_4(VAR_13, VAR_2);

 VAR_13 = FUNC_3(VAR_8);
 VAR_13 |= (VAR_7 |
  FUNC_2(0));
 FUNC_4(VAR_13, VAR_8);
 FUNC_4(VAR_13, VAR_5);
 FUNC_4(VAR_13, VAR_6);

 return 0;
}
