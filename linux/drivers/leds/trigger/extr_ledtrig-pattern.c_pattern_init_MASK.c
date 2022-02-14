
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct led_classdev {int dev; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct led_classdev*,unsigned int*) ;
 int FUNC_3 (struct led_classdev*,int *,int *,unsigned int,int) ;

__attribute__((used)) static void FUNC_4(struct led_classdev *VAR_0)
{
 unsigned int VAR_1 = 0;
 u32 *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_0, &VAR_1);
 if (!VAR_2)
  return;

 if (VAR_1 % 2) {
  FUNC_0(VAR_0->dev, "Expected pattern of tuples\n");
  goto out;
 }

 VAR_3 = FUNC_3(VAR_0, ((void*)0), VAR_2, VAR_1, 0);
 if (VAR_3 < 0)
  FUNC_0(VAR_0->dev,
    "Pattern initialization failed with error %d\n", VAR_3);

out:
 FUNC_1(VAR_2);
}
