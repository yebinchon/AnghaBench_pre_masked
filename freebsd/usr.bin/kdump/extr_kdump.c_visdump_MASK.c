
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char,int ,char) ;

void
FUNC_4(char *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 char *VAR_5;
 int VAR_6;
 char VAR_7[5];

 FUNC_0("       \"");
 VAR_4 = 8;
 for (;VAR_2 > 0; VAR_2--, VAR_1++) {
   FUNC_3(VAR_7, *VAR_1, VAR_0, *(VAR_1+1));
  VAR_5 = VAR_7;




  if (VAR_4 == 0) {
   FUNC_1('\t');
   VAR_4 = 8;
  }
  switch(*VAR_5) {
  case '\n':
   VAR_4 = 0;
   FUNC_1('\n');
   continue;
  case '\t':
   VAR_6 = 8 - (VAR_4&07);
   break;
  default:
   VAR_6 = FUNC_2(VAR_5);
  }
  if (VAR_4 + VAR_6 > (VAR_3-2)) {
   FUNC_0("\\\n\t");
   VAR_4 = 8;
  }
  VAR_4 += VAR_6;
  do {
   FUNC_1(*VAR_5++);
  } while (*VAR_5);
 }
 if (VAR_4 == 0)
  FUNC_0("       ");
 FUNC_0("\"\n");
}
