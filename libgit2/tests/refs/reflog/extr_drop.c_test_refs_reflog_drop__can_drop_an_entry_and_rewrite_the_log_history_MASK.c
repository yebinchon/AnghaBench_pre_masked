
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int oid_cur; int oid_old; } ;
typedef TYPE_1__ git_reflog_entry ;
typedef int git_oid ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int,int) ;
 TYPE_1__* FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;

void FUNC_9(void)
{
 const git_reflog_entry *VAR_2;
 const git_reflog_entry *VAR_3;
 git_oid VAR_4, VAR_5;

 FUNC_0(VAR_0 > 4);

 VAR_2 = FUNC_7(VAR_1, 1);

 FUNC_5(&VAR_4, &VAR_2->oid_old);
 FUNC_5(&VAR_5, &VAR_2->oid_cur);

 FUNC_3(FUNC_6(VAR_1, 1, 1));

 FUNC_2(VAR_0 - 1, FUNC_8(VAR_1));

 VAR_3 = FUNC_7(VAR_1, 0);

 FUNC_1(0, FUNC_4(&VAR_4, &VAR_3->oid_old));
 FUNC_0(0 != FUNC_4(&VAR_5, &VAR_3->oid_cur));
}
