
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

void FUNC_3(void)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3 + VAR_0);

 if (VAR_4 & VAR_2) {
  FUNC_0("trying to assert IDDQ while UTMIPLL is locked\n");
  return;
 }

 VAR_4 |= VAR_1;
 FUNC_2(VAR_4, VAR_3 + VAR_0);
}
