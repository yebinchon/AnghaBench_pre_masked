
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int attr_session_key; } ;
typedef TYPE_1__ git_repository ;
struct TYPE_8__ {int key; } ;
typedef TYPE_2__ git_attr_session ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

int FUNC_3(git_attr_session *VAR_0, git_repository *VAR_1)
{
 FUNC_0(VAR_1);

 FUNC_2(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->key = FUNC_1(&VAR_1->attr_session_key);

 return 0;
}
