
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;
 int VAR_5 ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;

int
FUNC_10 (int VAR_6, const char *VAR_7[])
{



  FUNC_9("sh-i18n--envsubst");

  switch (VAR_6)
 {
 case 1:
   FUNC_0 ("we won't substitute all variables on stdin for you");
   break;




 case 2:

   VAR_3 = 0;
   FUNC_5 (VAR_7[1]);
      FUNC_8 ();
   break;
 case 3:

   if (FUNC_7(VAR_7[1], "--variables"))
  FUNC_0 ("first argument must be --variables when two are given");

      FUNC_6 (VAR_7[2]);
   break;
 default:
   FUNC_0 ("too many arguments");
   break;
 }




  VAR_4 = 0;
  if (FUNC_3 (VAR_5) || FUNC_4 (VAR_5))
    {
      FUNC_2 (VAR_5);
      FUNC_1 (VAR_1);
    }
  if (FUNC_2 (VAR_5) && VAR_4 != VAR_0)
    FUNC_1 (VAR_1);

  FUNC_1 (VAR_2);
}
