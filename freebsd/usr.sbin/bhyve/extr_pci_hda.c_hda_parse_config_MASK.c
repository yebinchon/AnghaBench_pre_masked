
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int buf ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*,char const*) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static uint8_t
FUNC_5(const char *VAR_0, const char *VAR_1, char *VAR_2)
{
 char VAR_3[64];
 char *VAR_4 = VAR_3;
 char *VAR_5 = ((void*)0);
 size_t VAR_6;
 int VAR_7;

 if (!VAR_0)
  return (0);

 VAR_6 = FUNC_3(VAR_0);
 if (VAR_6 >= sizeof(VAR_3)) {
  FUNC_0("Opts too big\n");
  return (0);
 }

 FUNC_0("opts: %s\n", VAR_0);

 FUNC_2(VAR_3, VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  if (VAR_3[VAR_7] == ',') {
   VAR_3[VAR_7] = 0;
   VAR_5 = VAR_3 + VAR_7 + 1;
   break;
  }

 if (!FUNC_1(VAR_4, VAR_1, FUNC_3(VAR_1))) {
  FUNC_4(VAR_2, VAR_4 + FUNC_3(VAR_1), 64);
  return (1);
 }

 if (!VAR_5)
  return (0);

 VAR_4 = VAR_5;
 if (!FUNC_1(VAR_4, VAR_1, FUNC_3(VAR_1))) {
  FUNC_4(VAR_2, VAR_4 + FUNC_3(VAR_1), 64);
  return (1);
 }

 return (0);
}
