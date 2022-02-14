
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
 int FUNC_3 (int *) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(void)
{
 git_oid VAR_1, VAR_2;
 git_oidarray VAR_3 = {((void*)0), 0};

 git_oid *VAR_4 = FUNC_4(sizeof(git_oid) * 2);

 FUNC_2(FUNC_6(&VAR_4[0], "a4a7dce85cf63874e984719f4fdd239f5145052f"));
 FUNC_2(FUNC_6(&VAR_4[1], "be3563ae3f795b2b4353bcce3a527ad0a4f7f644"));
 FUNC_2(FUNC_6(&VAR_1, "c47800c7266a2be04c571c04d5a6614691ea99bd"));
 FUNC_2(FUNC_6(&VAR_2, "9fd738e8f7967c078dceed8190330fc8648ee56a"));

 FUNC_2(FUNC_5(&VAR_3, VAR_0, 2, VAR_4));
 FUNC_0(2, VAR_3.count);
 FUNC_1(&VAR_1, &VAR_3.ids[0]);
 FUNC_1(&VAR_2, &VAR_3.ids[1]);

 FUNC_7(&VAR_3);
 FUNC_3(VAR_4);
}
