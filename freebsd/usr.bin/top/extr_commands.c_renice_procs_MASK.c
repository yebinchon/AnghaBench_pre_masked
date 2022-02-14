
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char const* VAR_4 ;
 char const* FUNC_1 () ;
 int VAR_5 ;
 char* FUNC_2 (char*) ;
 char const* VAR_6 ;
 int FUNC_3 (char*,int*) ;
 int FUNC_4 (int ,int,int) ;

const char *
FUNC_5(char *VAR_7)
{
    char VAR_8;
    int VAR_9;
    int VAR_10;

    VAR_0;


    if ((VAR_8 = (*VAR_7 == '-')) != 0)
    {

 VAR_7++;
    }


    VAR_10 = FUNC_3(VAR_7, &VAR_9);


    if (VAR_8)
    {
 VAR_9 = -VAR_9;
    }


    if (VAR_10 == -1 || VAR_9 < VAR_2 || VAR_9 > VAR_1)
    {
 return(VAR_4);
    }


    if ((VAR_7 = FUNC_2(VAR_7)) == ((void*)0))
    {
 return(VAR_6);
    }


    do
    {
 if (FUNC_3(VAR_7, &VAR_10) == -1)
 {
     FUNC_0(VAR_7, 0);
 }

 if (FUNC_4(VAR_3, VAR_10, VAR_9) == -1)
 {
     FUNC_0(VAR_7, VAR_5);
 }
    } while ((VAR_7 = FUNC_2(VAR_7)) != ((void*)0));


    return(FUNC_1());
}
