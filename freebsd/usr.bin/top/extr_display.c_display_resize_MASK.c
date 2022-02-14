
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;

int
FUNC_2(void)
{
    int VAR_6;


    if (VAR_4 != ((void*)0))
    {
 FUNC_1(VAR_4);
    }



    VAR_6 = VAR_5 ? VAR_2 - VAR_0 : 1;

    if (VAR_6 < 0)
 VAR_6 = 0;


    VAR_4 = FUNC_0(VAR_6, VAR_3);
    if (VAR_4 == ((void*)0))
    {

 return(-1);
    }



    return(VAR_5 ? VAR_6 : VAR_1);
}
