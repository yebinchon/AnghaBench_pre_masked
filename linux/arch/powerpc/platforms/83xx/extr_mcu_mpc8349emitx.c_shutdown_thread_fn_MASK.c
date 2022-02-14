
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcu {int reg_ctrl; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 struct mcu* VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(void *VAR_5)
{
 int VAR_6;
 struct mcu *VAR_7 = VAR_4;

 while (!FUNC_3()) {
  VAR_6 = FUNC_1(VAR_7->client, VAR_2);
  if (VAR_6 < 0)
   FUNC_4("MCU status reg read failed.\n");
  VAR_7->reg_ctrl = VAR_6;


  if (VAR_7->reg_ctrl & VAR_1) {
   FUNC_2(VAR_7->client, VAR_2,
        VAR_7->reg_ctrl & ~VAR_1);

   FUNC_0();
  }

  FUNC_6(VAR_3);
  FUNC_5(VAR_0);
 }

 return 0;
}
