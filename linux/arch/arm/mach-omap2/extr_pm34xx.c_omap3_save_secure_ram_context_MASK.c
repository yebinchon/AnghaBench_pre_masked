
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 u32 VAR_5;
 int VAR_6 = FUNC_3(VAR_3);

 if (FUNC_1() != VAR_0) {





  FUNC_4(VAR_3, VAR_2);
  VAR_5 = FUNC_0(VAR_4,
         VAR_1);
  FUNC_4(VAR_3, VAR_6);

  if (VAR_5) {
   FUNC_2("save_secure_sram() returns %08x\n", VAR_5);
   while (1)
    ;
  }
 }
}
