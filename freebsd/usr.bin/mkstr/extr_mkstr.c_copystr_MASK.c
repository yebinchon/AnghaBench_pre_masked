
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;

void
FUNC_5(void)
{
 int VAR_1, VAR_2;
 char VAR_3[512];
 char *VAR_4 = VAR_3;

 for (;;) {
  if (VAR_4 == VAR_3 + sizeof(VAR_3) - 2)
   FUNC_0(1, "message too long");
  VAR_1 = FUNC_1();
  if (VAR_1 == VAR_0)
   break;
  switch (VAR_1) {

  case '"':
   *VAR_4++ = 0;
   goto out;
  case '\\':
   VAR_1 = FUNC_1();
   switch (VAR_1) {

   case 'b':
    VAR_1 = '\b';
    break;
   case 't':
    VAR_1 = '\t';
    break;
   case 'r':
    VAR_1 = '\r';
    break;
   case 'n':
    VAR_1 = '\n';
    break;
   case '\n':
    continue;
   case 'f':
    VAR_1 = '\f';
    break;
   case '0':
    VAR_1 = 0;
    break;
   case '\\':
    break;
   default:
    if (!FUNC_3(VAR_1))
     break;
    VAR_1 -= '0';
    VAR_2 = FUNC_1();
    if (!FUNC_3(VAR_2))
     break;
    VAR_1 <<= 7, VAR_1 += VAR_2 - '0';
    VAR_2 = FUNC_1();
    if (!FUNC_3(VAR_2))
     break;
    VAR_1 <<= 3, VAR_1+= VAR_2 - '0', VAR_2 = -1;
    break;
   }
  }
  *VAR_4++ = VAR_1;
 }
out:
 *VAR_4 = 0;
 FUNC_4("%d", FUNC_2(VAR_3, 1, 0));
}
