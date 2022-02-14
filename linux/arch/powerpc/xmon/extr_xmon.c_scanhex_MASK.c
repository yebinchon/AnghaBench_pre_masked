
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 unsigned long FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (char*,...) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_5 ;
 char* VAR_6 ;
 int * VAR_7 ;

int
FUNC_10(unsigned long *VAR_8)
{
 int VAR_9, VAR_10;
 unsigned long VAR_11;

 VAR_9 = FUNC_8();
 if (VAR_9 == '%') {

  char VAR_12[8];
  int VAR_13;

  for (VAR_13 = 0; VAR_13 < sizeof(VAR_12) - 1; ++VAR_13) {
   VAR_9 = FUNC_1();
   if (!FUNC_2(VAR_9)) {
    VAR_5 = VAR_9;
    break;
   }
   VAR_12[VAR_13] = VAR_9;
  }
  VAR_12[VAR_13] = 0;
  VAR_13 = FUNC_5(VAR_4, VAR_1, VAR_12);
  if (VAR_13 < 0) {
   FUNC_6("invalid register name '%%%s'\n", VAR_12);
   return 0;
  }
  if (VAR_7 == ((void*)0)) {
   FUNC_6("regs not available\n");
   return 0;
  }
  *VAR_8 = ((unsigned long *)VAR_7)[VAR_13];
  return 1;
 }



 if (VAR_9 == '0') {
  VAR_9 = FUNC_1();
  if (VAR_9 == 'x') {
   VAR_9 = FUNC_1();
  } else {
   VAR_10 = FUNC_0(VAR_9);
   if (VAR_10 == VAR_0) {
    VAR_5 = VAR_9;
    *VAR_8 = 0;
    return 1;
   }
  }
 } else if (VAR_9 == '$') {
  int VAR_14;
  for (VAR_14=0; VAR_14<63; VAR_14++) {
   VAR_9 = FUNC_1();
   if (FUNC_3(VAR_9) || VAR_9 == '\0') {
    VAR_5 = VAR_9;
    break;
   }
   VAR_6[VAR_14] = VAR_9;
  }
  VAR_6[VAR_14++] = 0;
  *VAR_8 = 0;
  if (FUNC_7(VAR_2) == 0) {
   VAR_3 = 1;
   FUNC_9();
   *VAR_8 = FUNC_4(VAR_6);
   FUNC_9();
  }
  VAR_3 = 0;
  if (!(*VAR_8)) {
   FUNC_6("unknown symbol '%s'\n", VAR_6);
   return 0;
  }
  return 1;
 }

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10 == VAR_0) {
  VAR_5 = VAR_9;
  return 0;
 }
 VAR_11 = 0;
 do {
  VAR_11 = (VAR_11 << 4) + VAR_10;
  VAR_9 = FUNC_1();
  VAR_10 = FUNC_0(VAR_9);
 } while (VAR_10 != VAR_0);
 VAR_5 = VAR_9;
 *VAR_8 = VAR_11;
 return 1;
}
