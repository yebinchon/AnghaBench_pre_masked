
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mce {scalar_t__ inject_flags; int misc; int addr; int status; int synd; int mcgstatus; int bank; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(void *VAR_3)
{
 struct mce VAR_4 = *(struct mce *)VAR_3;
 u8 VAR_5 = VAR_4.bank;

 FUNC_10(VAR_1, VAR_4.mcgstatus);

 if (FUNC_9(VAR_2)) {
  if (VAR_4.inject_flags == VAR_0) {
   FUNC_10(FUNC_2(VAR_5), VAR_4.status);
   FUNC_10(FUNC_1(VAR_5), VAR_4.addr);
  } else {
   FUNC_10(FUNC_4(VAR_5), VAR_4.status);
   FUNC_10(FUNC_0(VAR_5), VAR_4.addr);
  }

  FUNC_10(FUNC_3(VAR_5), VAR_4.misc);
  FUNC_10(FUNC_5(VAR_5), VAR_4.synd);
 } else {
  FUNC_10(FUNC_8(VAR_5), VAR_4.status);
  FUNC_10(FUNC_6(VAR_5), VAR_4.addr);
  FUNC_10(FUNC_7(VAR_5), VAR_4.misc);
 }
}
