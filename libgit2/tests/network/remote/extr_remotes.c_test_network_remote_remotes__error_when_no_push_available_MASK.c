
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {char** member_0; int member_1; } ;
typedef TYPE_2__ git_strarray ;
struct TYPE_14__ {int transport; } ;
typedef TYPE_3__ git_remote_callbacks ;
struct TYPE_15__ {TYPE_1__* transport; } ;
typedef TYPE_4__ git_remote ;
struct TYPE_12__ {int * push; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ,TYPE_3__*,int *,int *) ;
 int FUNC_4 (TYPE_4__**,int ,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*,int *) ;
 int VAR_3 ;

void FUNC_7(void)
{
 git_remote *VAR_4;
 git_remote_callbacks VAR_5 = VAR_1;
 char *VAR_6 = {
  "refs/heads/master",
 };
 git_strarray VAR_7 = {
  &VAR_6,
  1,
 };


 FUNC_2(FUNC_4(&VAR_4, VAR_2, FUNC_0("testrepo.git")));

 VAR_5.transport = VAR_3;
 FUNC_2(FUNC_3(VAR_4, VAR_0, &VAR_5, ((void*)0), ((void*)0)));


 VAR_4->transport->push = ((void*)0);

 FUNC_1(-1, FUNC_6(VAR_4, &VAR_7, ((void*)0)));

 FUNC_5(VAR_4);
}
