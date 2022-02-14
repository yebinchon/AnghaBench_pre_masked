
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_reconfig_data {int dn; } ;
struct notifier_block {int dummy; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_0,
    unsigned long VAR_1, void *VAR_2)
{
 struct of_reconfig_data *VAR_3 = VAR_2;
 int VAR_4 = 0;

 switch (VAR_1) {
 case 129:
  VAR_4 = FUNC_1(VAR_3->dn);
  break;
 case 128:
  FUNC_2(VAR_3->dn);
  break;
 }
 return FUNC_0(VAR_4);
}
