
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct da9052_tsi {int dev; int da9052; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct da9052_tsi*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct da9052_tsi*) ;
 struct da9052_tsi* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct da9052_tsi *VAR_4 = FUNC_4(VAR_3);

 FUNC_1(VAR_4->da9052, VAR_2, 0x19);

 FUNC_0(VAR_4->da9052, VAR_1, VAR_4);
 FUNC_0(VAR_4->da9052, VAR_0, VAR_4);

 FUNC_2(VAR_4->dev);
 FUNC_3(VAR_4);

 return 0;
}
