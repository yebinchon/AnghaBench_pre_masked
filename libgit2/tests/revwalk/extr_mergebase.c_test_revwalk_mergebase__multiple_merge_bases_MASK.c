
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ids; int count; int member_1; int * member_0; } ;
typedef TYPE_1__ git_oidarray ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int *,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(void)
{
 git_oid VAR_1, VAR_2, VAR_3, VAR_4;
 git_oidarray VAR_5 = {((void*)0), 0};

 FUNC_2(FUNC_4(&VAR_1, "a4a7dce85cf63874e984719f4fdd239f5145052f"));
 FUNC_2(FUNC_4(&VAR_2, "be3563ae3f795b2b4353bcce3a527ad0a4f7f644"));
 FUNC_2(FUNC_4(&VAR_3, "c47800c7266a2be04c571c04d5a6614691ea99bd"));
 FUNC_2(FUNC_4(&VAR_4, "9fd738e8f7967c078dceed8190330fc8648ee56a"));

 FUNC_2(FUNC_3(&VAR_5, VAR_0, &VAR_1, &VAR_2));
 FUNC_0(2, VAR_5.count);
 FUNC_1(&VAR_3, &VAR_5.ids[0]);
 FUNC_1(&VAR_4, &VAR_5.ids[1]);

 FUNC_5(&VAR_5);
}
