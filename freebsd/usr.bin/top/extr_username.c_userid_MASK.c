
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; } ;


 int FUNC_0 (int,char*,int) ;
 struct passwd* FUNC_1 (char*) ;

int
FUNC_2(char VAR_0[])
{
    struct passwd *VAR_1;





    if ((VAR_1 = FUNC_1(VAR_0)) == ((void*)0))
    {
 return(-1);
    }


    FUNC_0(VAR_1->pw_uid, VAR_0, 1);


    return(VAR_1->pw_uid);
}
