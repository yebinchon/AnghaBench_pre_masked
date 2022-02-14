
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* FUNC_1 (size_t,int) ;
 int FUNC_2 (char const*,void**,size_t*) ;
 int FUNC_3 (char const) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_0, void **VAR_1, size_t *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 bool VAR_6 = 1;
 char *VAR_7;
 size_t VAR_8, VAR_9;

 if (FUNC_8(VAR_0, "0b", FUNC_7("0b")) == 0)
  return (FUNC_2(VAR_0 + 2, VAR_1, VAR_2));

 if (FUNC_8(VAR_0, "0x", FUNC_7("0x")) != 0) {
  FUNC_6("malformed variable, should start with \"0x\""
      " or \"0b\"");
  return (-1);
 }

 VAR_0 += FUNC_7("0x");
 VAR_4 = FUNC_7(VAR_0);
 if (VAR_4 < 1) {
  FUNC_6("malformed variable; doesn't contain anything "
      "but \"0x\"");
  return (-1);
 }

 VAR_9 = VAR_4 / 2 + VAR_4 % 2;
 VAR_7 = FUNC_1(VAR_9, 1);
 if (VAR_7 == ((void*)0))
  FUNC_5(1, "calloc");

 VAR_8 = VAR_9 - 1;
 for (VAR_3 = VAR_4 - 1; VAR_3 >= 0; VAR_3--) {
  VAR_5 = FUNC_3(VAR_0[VAR_3]);
  if (VAR_5 < 0) {
   FUNC_6("malformed variable, invalid char \"%c\"",
       VAR_0[VAR_3]);
   FUNC_4(VAR_7);
   return (-1);
  }

  FUNC_0(VAR_8 < VAR_9);
  if (VAR_6) {
   VAR_7[VAR_8] = VAR_5;
   VAR_6 = 0;
  } else {
   VAR_7[VAR_8] |= VAR_5 << 4;
   VAR_8--;
   VAR_6 = 1;
  }
 }

 *VAR_1 = VAR_7;
 *VAR_2 = VAR_9;
 return (0);
}
