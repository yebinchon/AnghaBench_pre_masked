
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_9 ;
 int FUNC_5 (struct platform_device*,struct rfkill*) ;
 struct rfkill* FUNC_6 (int ,int *,int ,int *,int *) ;
 int FUNC_7 (struct rfkill*) ;
 int FUNC_8 (struct rfkill*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_10)
{
 struct rfkill *VAR_11;
 int VAR_12 = 0;

 VAR_12 = FUNC_4(FUNC_0(1), FUNC_2(&VAR_10->dev));
 if (VAR_12) {
  FUNC_1(&VAR_10->dev, "could not get GPH1\n");
  return VAR_12;
 }

 VAR_12 = FUNC_4(VAR_2, FUNC_2(&VAR_10->dev));
 if (VAR_12) {
  FUNC_3(FUNC_0(1));
  FUNC_1(&VAR_10->dev, "could not get BT_POWER\n");
  return VAR_12;
 }


 FUNC_9(FUNC_0(0), VAR_4);
 FUNC_10(FUNC_0(0), VAR_8);
 FUNC_9(FUNC_0(1), VAR_7);
 FUNC_10(FUNC_0(1), VAR_8);
 FUNC_9(FUNC_0(2), VAR_5);
 FUNC_10(FUNC_0(2), VAR_8);
 FUNC_9(FUNC_0(3), VAR_6);
 FUNC_10(FUNC_0(3), VAR_8);

 VAR_11 = FUNC_6(VAR_0, &VAR_10->dev, VAR_3,
   &VAR_9, ((void*)0));
 if (!VAR_11) {
  VAR_12 = -VAR_1;
  goto err_rfk_alloc;
 }

 VAR_12 = FUNC_8(VAR_11);
 if (VAR_12)
  goto err_rfkill;

 FUNC_5(VAR_10, VAR_11);

 return 0;

err_rfkill:
 FUNC_7(VAR_11);
err_rfk_alloc:
 return VAR_12;
}
