
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcu {int reg_ctrl; int lock; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mcu* VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct mcu *VAR_3 = VAR_2;

 FUNC_3("Sending power-off request to the MCU...\n");
 FUNC_1(&VAR_3->lock);
 FUNC_0(VAR_3->client, VAR_1,
      VAR_3->reg_ctrl | VAR_0);
 FUNC_2(&VAR_3->lock);
}
