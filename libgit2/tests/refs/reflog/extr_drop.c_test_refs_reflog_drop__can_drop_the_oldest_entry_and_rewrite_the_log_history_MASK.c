
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int oid_old; } ;
typedef TYPE_1__ git_reflog_entry ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int,int) ;
 TYPE_1__* FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;

void FUNC_7(void)
{
 const git_reflog_entry *VAR_3;

 FUNC_0(VAR_1 > 2);

 FUNC_2(FUNC_4(VAR_2, VAR_1 - 1, 1));
 FUNC_1(VAR_1 - 1, FUNC_6(VAR_2));

 VAR_3 = FUNC_5(VAR_2, VAR_1 - 2);
 FUNC_0(FUNC_3(&VAR_3->oid_old, VAR_0) == 0);
}
