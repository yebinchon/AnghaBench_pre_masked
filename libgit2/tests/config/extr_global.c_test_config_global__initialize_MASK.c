
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int *) ;

void FUNC_5(void)
{
 git_buf VAR_5 = VAR_0;

 FUNC_0(FUNC_2("home", 0777));
 FUNC_0(FUNC_4(&VAR_5, "home", ((void*)0)));
 FUNC_0(FUNC_3(
  VAR_4, VAR_1, VAR_5.ptr));

 FUNC_0(FUNC_2("xdg/git", 0777));
 FUNC_0(FUNC_4(&VAR_5, "xdg/git", ((void*)0)));
 FUNC_0(FUNC_3(
  VAR_4, VAR_3, VAR_5.ptr));

 FUNC_0(FUNC_2("etc", 0777));
 FUNC_0(FUNC_4(&VAR_5, "etc", ((void*)0)));
 FUNC_0(FUNC_3(
  VAR_4, VAR_2, VAR_5.ptr));

 FUNC_1(&VAR_5);
}
