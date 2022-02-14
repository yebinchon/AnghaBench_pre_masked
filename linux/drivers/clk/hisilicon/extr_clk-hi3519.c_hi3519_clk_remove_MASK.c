
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct hi3519_crg_data {int rstc; } ;


 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ) ;
 struct hi3519_crg_data* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct hi3519_crg_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->rstc);
 FUNC_0(VAR_0);
 return 0;
}
