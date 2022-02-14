
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int indexed_objects; int received_objects; int total_objects; int member_0; } ;
typedef TYPE_1__ git_indexer_progress ;
typedef int git_indexer ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,char*,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_6(void)
{
 git_indexer *VAR_2 = 0;
 git_indexer_progress VAR_3 = { 0 };

 FUNC_1(FUNC_5(&VAR_2, ".", 0, ((void*)0), ((void*)0)));
 FUNC_1(FUNC_2(
  VAR_2, VAR_0, VAR_1, &VAR_3));
 FUNC_1(FUNC_3(VAR_2, &VAR_3));

 FUNC_0(VAR_3.total_objects, 3);
 FUNC_0(VAR_3.received_objects, 3);
 FUNC_0(VAR_3.indexed_objects, 3);

 FUNC_4(VAR_2);
}
