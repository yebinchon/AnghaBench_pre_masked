
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;

void FUNC_4(void)
{
 git_buf VAR_2 = VAR_0;

 FUNC_1(FUNC_3(&VAR_2, VAR_1, "refs/remotes/test/master"));
 FUNC_0(VAR_2.ptr, "refs/heads/master");
 FUNC_2(&VAR_2);
}
