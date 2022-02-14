
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_0)
{
 size_t VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_1(VAR_0); VAR_1++) {
  if (FUNC_0(VAR_0[VAR_1])) {
   FUNC_2("string contains a control character");
   return(1);
  }
  if (VAR_0[VAR_1] == ':') {
   FUNC_2("string contains a colon");
   return(1);
  }

  if (VAR_0[VAR_1] == '\n') {
   VAR_0[VAR_1] = '\0';
   return(0);
  }
 }
 return(0);
}
