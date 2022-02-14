
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_config ;
struct TYPE_4__ {int ptr; int member_0; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,int ,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *,char*) ;
 int FUNC_7 (int **) ;
 int FUNC_8 (int **,int *,int ) ;

void FUNC_9(void)
{
 git_config *VAR_2;
 git_config *VAR_3;
 git_buf VAR_4 = {0};

 FUNC_2(FUNC_7(&VAR_2));
 FUNC_2(FUNC_4(VAR_2, FUNC_1("config/config18"),
  VAR_0, ((void*)0), 0));
 FUNC_2(FUNC_4(VAR_2, FUNC_1("config/config19"),
  VAR_1, ((void*)0), 0));

 FUNC_2(FUNC_8(&VAR_3, VAR_2, VAR_1));

 FUNC_5(VAR_2);

 FUNC_2(FUNC_6(&VAR_4, VAR_3, "core.stringglobal"));
 FUNC_0("don't find me!", VAR_4.ptr);

 FUNC_3(&VAR_4);
 FUNC_5(VAR_3);
}
