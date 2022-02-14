
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu3050 {int dev; int map; int regs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct mpu3050 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_4(FUNC_0(VAR_2->regs), VAR_2->regs);
 if (VAR_3) {
  FUNC_1(VAR_2->dev, "cannot enable regulators\n");
  return VAR_3;
 }




 FUNC_2(200);


 VAR_3 = FUNC_3(VAR_2->map, VAR_0,
     VAR_1, 0);
 if (VAR_3) {
  FUNC_1(VAR_2->dev, "error setting power mode\n");
  return VAR_3;
 }
 FUNC_5(10000, 20000);

 return 0;
}
