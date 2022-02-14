
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int*) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(void)
{
 u_int VAR_4[4];
 int VAR_5;
 int VAR_6;
 int VAR_7;


 FUNC_0(0x0b, 0, VAR_4);
 if (VAR_4[1] == 0) {
  FUNC_2();
  return;
 }


 for (VAR_7 = 0; ; VAR_7++) {
  FUNC_0(0x0b, VAR_7, VAR_4);

  VAR_5 = VAR_4[0] & 0x1f;
  VAR_6 = (VAR_4[2] >> 8) & 0xff;

  if (VAR_6 == 0)
   break;


  if (VAR_6 == VAR_1)
   VAR_2 = VAR_5;
  else if (VAR_6 == VAR_0)
   VAR_3 = VAR_5;
  else
   FUNC_1("unknown CPU level type %d\n", VAR_6);
 }

 if (VAR_3 < VAR_2) {
  FUNC_1("WARNING: core covers more APIC IDs than a package\n");
  VAR_2 = VAR_3;
 }
}
