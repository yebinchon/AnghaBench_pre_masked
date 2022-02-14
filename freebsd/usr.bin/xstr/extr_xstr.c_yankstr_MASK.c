
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int dbuf ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,int) ;
 char* VAR_1 ;
 int FUNC_5 (char) ;
 int VAR_2 ;

__attribute__((used)) static off_t
FUNC_6(char **VAR_3)
{
 char *VAR_4 = *VAR_3;
 int VAR_5, VAR_6;
 char VAR_7[VAR_0];
 char *VAR_8 = VAR_7;
 char *VAR_9;
 static char VAR_10[] = "b\bt\tr\rn\nf\f\\\\\"\"";

 while ((VAR_5 = *VAR_4++)) {
  if (VAR_8 == VAR_7 + sizeof(VAR_7) - 3)
   FUNC_1(1, "message too long");
  switch (VAR_5) {

  case '"':
   VAR_4++;
   goto out;

  case '\\':
   VAR_5 = *VAR_4++;
   if (VAR_5 == 0)
    break;
   if (VAR_5 == '\n') {
    if (FUNC_3(VAR_1, sizeof VAR_1, VAR_2)
        == ((void*)0)) {
     if (FUNC_2(VAR_2))
      FUNC_0(3, "x.c");
     return(-1);
    }
    VAR_4 = VAR_1;
    continue;
   }
   for (VAR_9 = VAR_10; (VAR_6 = *VAR_9++); VAR_9++)
    if (VAR_5 == VAR_6) {
     VAR_5 = *VAR_9;
     goto gotc;
    }
   if (!FUNC_5(VAR_5)) {
    *VAR_8++ = '\\';
    break;
   }
   VAR_5 -= '0';
   if (!FUNC_5(*VAR_4))
    break;
   VAR_5 <<= 3, VAR_5 += *VAR_4++ - '0';
   if (!FUNC_5(*VAR_4))
    break;
   VAR_5 <<= 3, VAR_5 += *VAR_4++ - '0';
   break;
  }
gotc:
  *VAR_8++ = VAR_5;
 }
out:
 *VAR_3 = --VAR_4;
 *VAR_8 = 0;
 return (FUNC_4(VAR_7, 1));
}
