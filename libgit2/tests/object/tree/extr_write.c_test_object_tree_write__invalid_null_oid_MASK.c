
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_treebuilder ;
struct TYPE_5__ {int member_0; } ;
struct TYPE_6__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ git_oid ;
struct TYPE_7__ {int message; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 TYPE_4__* FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,char*,TYPE_2__*,int ) ;
 int FUNC_6 (int **,int ,int *) ;
 int * FUNC_7 (int ,char*) ;

void FUNC_8(void)
{
 git_treebuilder *VAR_2;
 git_oid VAR_3 = {{0}};

 FUNC_2(FUNC_6(&VAR_2, VAR_1, ((void*)0)));
 FUNC_1(FUNC_5(((void*)0), VAR_2, "null_oid_file", &VAR_3, VAR_0));
 FUNC_0(FUNC_3() && FUNC_7(FUNC_3()->message, "null OID") != ((void*)0));

 FUNC_4(VAR_2);
}
