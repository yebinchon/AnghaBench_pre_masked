
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int FUNC_2 () ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (char*,int) ;
 scalar_t__ VAR_15 ;
 int FUNC_8 (int) ;
 TYPE_1__ VAR_16 ;

int
FUNC_9(void)
{
 int VAR_17;

 while ((VAR_17 = FUNC_6()) != VAR_0) {


  if (VAR_14) {
   if (VAR_12) {
    VAR_12 = 0;


    if (VAR_17 == '\n')
     continue;

    if (FUNC_7("xXd01234567", VAR_17)) {
     FUNC_8(VAR_17);
     FUNC_8(VAR_11);
     return (FUNC_5());
    }
    VAR_16.wc = FUNC_3(VAR_17);
    return (VAR_1);
   }
   if (VAR_17 == VAR_11) {
    VAR_12 = 1;
    continue;
   }
   switch (VAR_17) {
   case '<':
    return (FUNC_4());
   case '>':

    return (VAR_3);
   case '"':
    VAR_14 = 0;
    return (VAR_7);
   default:
    VAR_16.wc = VAR_17;
    return (VAR_1);
   }
  }


  if (VAR_12) {
   VAR_12 = 0;
   if (VAR_17 == '\n') {

    continue;
   }
   VAR_13 = 1;
   if (VAR_15) {

    return (VAR_6);
   }


   if (FUNC_7("xXd01234567", VAR_17)) {
    FUNC_8(VAR_17);
    FUNC_8(VAR_11);
    return (FUNC_5());
   }

   FUNC_0(FUNC_3(VAR_17));
   continue;
  }


  if (VAR_17 == VAR_11) {
   VAR_12 = 1;
   continue;
  }


  if (VAR_17 == VAR_10) {
   while (VAR_17 != '\n') {
    if ((VAR_17 = FUNC_6()) == VAR_0) {

     return (VAR_0);
    }
   }
   FUNC_1(VAR_17 == '\n');
   if (!VAR_13) {




    continue;
   }
   VAR_13 = 0;
   return (VAR_5);
  }

  if (FUNC_7(" \t\n;()<>,\"", VAR_17) && (VAR_15 != 0)) {





   FUNC_8(VAR_17);
   return (FUNC_2());
  }

  switch (VAR_17) {
  case '\n':
   if (!VAR_13) {




    continue;
   }

   VAR_13 = 0;
   return (VAR_5);
  case ',':
   VAR_13 = 1;
   return (VAR_2);
  case ';':
   VAR_13 = 1;
   return (VAR_9);
  case '(':
   VAR_13 = 1;
   return (VAR_4);
  case ')':
   VAR_13 = 1;
   return (VAR_8);
  case '>':
   VAR_13 = 1;
   return (VAR_3);
  case '<':

   VAR_13 = 1;
   return (FUNC_4());
  case ' ':
  case '\t':

   continue;
  case '"':
   VAR_13 = 1;
   VAR_14 = 1;
   return (VAR_7);
  default:
   VAR_13 = 1;
   FUNC_0(VAR_17);
   continue;
  }
 }
 return (VAR_0);
}
