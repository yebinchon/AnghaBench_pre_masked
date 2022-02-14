
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_3, uint64_t VAR_4)
{
 int VAR_5;

 FUNC_1("%s:\t", VAR_3);
 if (VAR_4 & VAR_2) {
  VAR_5 = VAR_4 & VAR_1;
  switch (VAR_5) {
  case 130:
   FUNC_1("extint");
   break;
  case 129:
   FUNC_1("nmi");
   break;
  case 128:
   FUNC_1("swint");
   break;
  default:
   FUNC_1("exception");
   break;
  }
  FUNC_1(" vector %d", (int)FUNC_0(VAR_4));
  if (VAR_4 & VAR_0)
   FUNC_1(" errcode %#x", (u_int)(VAR_4 >> 32));
 } else {
  FUNC_1("n/a");
 }
 FUNC_1("\n");
}
