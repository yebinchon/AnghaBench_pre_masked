
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct men_z127_gpio {int mem; int reg_base; int gc; } ;
struct mcb_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct men_z127_gpio* FUNC_2 (struct mcb_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mcb_device *VAR_0)
{
 struct men_z127_gpio *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->gc);
 FUNC_1(VAR_1->reg_base);
 FUNC_3(VAR_1->mem);
}
