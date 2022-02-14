
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_oid ;
typedef int git_odb ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ git_indexer_progress ;
typedef int git_indexer ;
struct TYPE_6__ {int klass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_5 () ;
 int FUNC_6 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,char*,int ,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int ,int ,int ) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,char*,int) ;
 int FUNC_15 (int **,int *) ;

void FUNC_16(void)
{
 git_indexer *VAR_6 = ((void*)0);
 git_indexer_progress VAR_7 = { 0 };
 git_repository *VAR_8;
 git_odb *VAR_9;
 git_oid VAR_10, VAR_11;

 FUNC_4(FUNC_14(&VAR_8, "thin.git", 1));
 FUNC_4(FUNC_15(&VAR_9, VAR_8));


 FUNC_4(FUNC_11(&VAR_10, VAR_9, VAR_2, VAR_3, VAR_1));
 FUNC_12(&VAR_11, "e68fe8129b546b101aee9510c5328e7f21ca1d18");
 FUNC_2(&VAR_11, &VAR_10);

 FUNC_4(FUNC_9(&VAR_6, ".", 0, VAR_9, ((void*)0)));
 FUNC_4(FUNC_6(
  VAR_6, VAR_4, VAR_5, &VAR_7));
 FUNC_3(FUNC_7(VAR_6, &VAR_7));

 FUNC_0(FUNC_5() != ((void*)0));
 FUNC_1(FUNC_5()->klass, VAR_0);

 FUNC_8(VAR_6);
 FUNC_10(VAR_9);
 FUNC_13(VAR_8);
}
