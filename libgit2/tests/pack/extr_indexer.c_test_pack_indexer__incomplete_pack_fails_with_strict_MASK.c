
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int indexed_objects; int received_objects; int total_objects; int member_0; } ;
typedef TYPE_1__ git_indexer_progress ;
struct TYPE_8__ {int verify; } ;
typedef TYPE_2__ git_indexer_options ;
typedef int git_indexer ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,char*,int ,int *,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_7(void)
{
 git_indexer_options VAR_3 = VAR_0;
 git_indexer *VAR_4 = 0;
 git_indexer_progress VAR_5 = { 0 };

 VAR_3.verify = 1;

 FUNC_2(FUNC_6(&VAR_4, ".", 0, ((void*)0), &VAR_3));
 FUNC_2(FUNC_3(
  VAR_4, VAR_1, VAR_2, &VAR_5));
 FUNC_1(FUNC_4(VAR_4, &VAR_5));

 FUNC_0(VAR_5.total_objects, 2);
 FUNC_0(VAR_5.received_objects, 2);
 FUNC_0(VAR_5.indexed_objects, 2);

 FUNC_5(VAR_4);
}
