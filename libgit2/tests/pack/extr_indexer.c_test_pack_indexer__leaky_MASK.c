
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ git_indexer_progress ;
typedef int git_indexer ;
struct TYPE_6__ {int klass; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 () ;
 int FUNC_5 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,char*,int ,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_9(void)
{
 git_indexer *VAR_3 = 0;
 git_indexer_progress VAR_4 = { 0 };

 FUNC_3(FUNC_8(&VAR_3, ".", 0, ((void*)0), ((void*)0)));
 FUNC_3(FUNC_5(
  VAR_3, VAR_1, VAR_2, &VAR_4));
 FUNC_2(FUNC_6(VAR_3, &VAR_4));

 FUNC_0(FUNC_4() != ((void*)0));
 FUNC_1(FUNC_4()->klass, VAR_0);

 FUNC_7(VAR_3);
}
