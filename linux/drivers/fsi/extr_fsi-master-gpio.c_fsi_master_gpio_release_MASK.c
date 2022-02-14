
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master_gpio {int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct fsi_master_gpio*) ;
 int FUNC_3 (int ) ;
 struct fsi_master_gpio* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct fsi_master_gpio *VAR_1 = FUNC_4(FUNC_1(VAR_0));

 FUNC_3(FUNC_0(VAR_1->dev));

 FUNC_2(VAR_1);
}
