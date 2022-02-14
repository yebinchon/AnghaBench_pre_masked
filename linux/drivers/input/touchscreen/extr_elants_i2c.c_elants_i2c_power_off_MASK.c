
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elants_data {int vcc33; int vccio; int reset_gpio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct elants_data *VAR_1 = VAR_0;

 if (!FUNC_0(VAR_1->reset_gpio)) {




  FUNC_1(VAR_1->reset_gpio, 1);
  FUNC_2(VAR_1->vccio);
  FUNC_2(VAR_1->vcc33);
 }
}
