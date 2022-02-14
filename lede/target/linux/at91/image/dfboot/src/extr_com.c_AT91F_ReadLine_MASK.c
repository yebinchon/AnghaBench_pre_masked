
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 char FUNC_0 () ;
 int FUNC_1 (char const* const) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const* const) ;

int FUNC_5 (const char *const VAR_2, char *VAR_3)
{
 char *VAR_4 = VAR_3;
 int VAR_5 = 0;
 int VAR_6 = FUNC_4 (VAR_2);
 int VAR_7;
 char VAR_8;


 if (VAR_2)
  FUNC_1(VAR_2);
 VAR_7 = VAR_6;

 for (;;) {
  VAR_8 = FUNC_0();

  switch (VAR_8) {
   case '\r':
   case '\n':
    *VAR_4 = '\0';
    FUNC_3 ("\n");
    return (VAR_4 - VAR_3);

   case 0x03:
    VAR_3[0] = '\0';
    return (-1);

   case 0x08:
   case 0x7F:
    if (VAR_5) {
     --VAR_4;
     FUNC_1(VAR_1);
     VAR_7--;
     VAR_5--;
     }
    continue;

   default:



   if (VAR_5 < (VAR_0 -2))
   {
    ++VAR_7;
    FUNC_2(VAR_8);
    *VAR_4++ = VAR_8;
    ++VAR_5;
   }
   else
   {
    FUNC_2('\a');
   }
  }
 }
}
