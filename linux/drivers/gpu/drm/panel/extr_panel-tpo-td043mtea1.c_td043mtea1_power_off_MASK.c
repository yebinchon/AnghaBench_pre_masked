
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct td043mtea1_panel {int powered_on; int vcc_reg; int reset_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct td043mtea1_panel*,int,int) ;

__attribute__((used)) static void FUNC_4(struct td043mtea1_panel *VAR_2)
{
 if (!VAR_2->powered_on)
  return;

 FUNC_3(VAR_2, 3, VAR_1 | VAR_0);

 FUNC_0(VAR_2->reset_gpio, 1);


 FUNC_1(50);

 FUNC_3(VAR_2, 3, VAR_1);

 FUNC_2(VAR_2->vcc_reg);

 VAR_2->powered_on = 0;
}
