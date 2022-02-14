
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char VAR_0 ;
 char VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char) ;
 char VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char) ;
 scalar_t__ FUNC_6 (int ,char*,int) ;
 int VAR_4 ;

int
FUNC_7(char *VAR_5, int VAR_6, int VAR_7)
{
    char *VAR_8 = VAR_5;
    char VAR_9;
    char VAR_10 = 0;
    char VAR_11 = 0;


    VAR_6 -= 1;


    while ((FUNC_1(VAR_4), FUNC_6(0, VAR_8, 1) > 0))
    {

 if ((VAR_9 = *VAR_8) == '\n' || VAR_9 == '\r')
 {
     break;
 }


 if (VAR_9 == VAR_1)
 {

     if (VAR_3)
     {
  VAR_2 += VAR_11;
     }


     *VAR_5 = '\0';
     FUNC_5('\r');
     return(-1);
 }
 else if (VAR_9 == VAR_0)
 {

     if (VAR_10 <= 0)
     {

  FUNC_5('\7');
     }
     else
     {
  FUNC_2("\b \b", VAR_4);
  VAR_8--;
  VAR_10--;
     }
 }

 else if (VAR_10 == VAR_6 || (VAR_7 && !FUNC_3(VAR_9)) ||
  !FUNC_4(VAR_9))
 {

     FUNC_5('\7');
 }
 else
 {

     FUNC_5(VAR_9);
     VAR_8++;
     VAR_10++;
     if (VAR_10 > VAR_11)
     {
  VAR_11 = VAR_10;
     }
 }
    }


    *VAR_8 = '\0';



    VAR_2 += VAR_3 ? VAR_11 : VAR_10;


    FUNC_5('\r');
    return(VAR_10 == 0 ? -1 : VAR_7 ? FUNC_0(VAR_5) : VAR_10);
}
