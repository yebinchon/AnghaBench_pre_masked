
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int paired; } ;
typedef TYPE_1__ git_status_list ;
struct TYPE_9__ {int * index_to_workdir; int * head_to_index; int status; } ;
typedef TYPE_2__ git_status_entry ;
typedef int git_diff_delta ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static int FUNC_5(
 git_diff_delta *VAR_0,
 git_diff_delta *VAR_1,
 void *VAR_2)
{
 git_status_list *VAR_3 = VAR_2;
 git_status_entry *VAR_4;

 if (!FUNC_4(VAR_3, VAR_0, VAR_1))
  return 0;

 VAR_4 = FUNC_1(sizeof(git_status_entry));
 FUNC_0(VAR_4);

 VAR_4->status = FUNC_3(VAR_3, VAR_0, VAR_1);
 VAR_4->head_to_index = VAR_0;
 VAR_4->index_to_workdir = VAR_1;

 return FUNC_2(&VAR_3->paired, VAR_4);
}
