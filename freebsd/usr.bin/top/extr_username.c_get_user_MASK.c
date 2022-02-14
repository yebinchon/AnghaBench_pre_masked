
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; int pw_name; } ;


 int FUNC_0 (int,int ,int) ;
 struct passwd* FUNC_1 (int) ;
 int FUNC_2 (int) ;

int
FUNC_3(int VAR_0)
{
    struct passwd *VAR_1;


    if ((VAR_1 = FUNC_1(VAR_0)) != ((void*)0))
    {
  return(FUNC_0(VAR_1->pw_uid, VAR_1->pw_name, 1));
    }


    return(FUNC_0(VAR_0, FUNC_2(VAR_0), 1));
}
