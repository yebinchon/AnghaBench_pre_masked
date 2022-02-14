
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 char const* FUNC_1 () ;
 int VAR_4 ;
 char const* VAR_5 ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (int,int) ;
 char* FUNC_5 (char*) ;
 char const* VAR_6 ;
 int FUNC_6 (char*,int*) ;
 int FUNC_7 (char*) ;

const char *
FUNC_8(char *VAR_7)
{
    char *VAR_8;
    int VAR_9 = VAR_2;
    int VAR_10;


    VAR_0;


    while (FUNC_3(*VAR_7)) VAR_7++;

    if (VAR_7[0] == '-')
    {

 if ((VAR_8 = FUNC_5(VAR_7)) == ((void*)0))
 {
     return(VAR_6);
 }

 if (FUNC_2(VAR_7[1]))
 {
     FUNC_6(VAR_7 + 1, &VAR_9);
     if (VAR_9 <= 0 || VAR_9 >= VAR_1)
     {
  return(VAR_5);
     }
 }
 else
 {
  VAR_9 = FUNC_7(VAR_7 + 1);


     if (VAR_9 == -1 )
     {
   return(VAR_3);
     }
 }

 VAR_7 = VAR_8;
    }


    do
    {
 if (FUNC_6(VAR_7, &VAR_10) == -1)
 {
     FUNC_0(VAR_7, 0);
 }
 else
 {

     if (FUNC_4(VAR_10, VAR_9) == -1)
     {

  FUNC_0(VAR_7, VAR_4);
     }
 }
    } while ((VAR_7 = FUNC_5(VAR_7)) != ((void*)0));


    return(FUNC_1());
}
