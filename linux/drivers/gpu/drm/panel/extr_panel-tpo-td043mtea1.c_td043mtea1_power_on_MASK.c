
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct td043mtea1_panel {int powered_on; int mode; int reset_gpio; int vcc_reg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct td043mtea1_panel*,int,int) ;
 int FUNC_5 (struct td043mtea1_panel*) ;
 int FUNC_6 (struct td043mtea1_panel*) ;

__attribute__((used)) static int FUNC_7(struct td043mtea1_panel *VAR_2)
{
 int VAR_3;

 if (VAR_2->powered_on)
  return 0;

 VAR_3 = FUNC_3(VAR_2->vcc_reg);
 if (VAR_3 < 0)
  return VAR_3;


 FUNC_2(160);

 FUNC_1(VAR_2->reset_gpio, 0);

 FUNC_4(VAR_2, 2, FUNC_0(VAR_2->mode) | VAR_0);
 FUNC_4(VAR_2, 3, VAR_1);
 FUNC_4(VAR_2, 0x20, 0xf0);
 FUNC_4(VAR_2, 0x21, 0xf0);
 FUNC_6(VAR_2);
 FUNC_5(VAR_2);

 VAR_2->powered_on = 1;

 return 0;
}
