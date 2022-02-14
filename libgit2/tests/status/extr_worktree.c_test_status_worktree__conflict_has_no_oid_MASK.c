
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int git_status_list ;
struct TYPE_28__ {TYPE_8__* index_to_workdir; TYPE_5__* head_to_index; int status; } ;
typedef TYPE_9__ git_status_entry ;
typedef int git_repository ;
struct TYPE_21__ {int member_0; } ;
struct TYPE_18__ {TYPE_2__ member_0; } ;
typedef TYPE_10__ git_oid ;
struct TYPE_20__ {int member_0; } ;
struct TYPE_19__ {int mode; char* path; int id; TYPE_1__ member_0; } ;
typedef TYPE_11__ git_index_entry ;
typedef int git_index ;
struct TYPE_26__ {int flags; scalar_t__ mode; scalar_t__ size; int id; int path; } ;
struct TYPE_25__ {int size; int mode; int id; int path; } ;
struct TYPE_27__ {TYPE_7__ new_file; TYPE_6__ old_file; } ;
struct TYPE_23__ {int size; int mode; int id; int path; } ;
struct TYPE_22__ {scalar_t__ mode; int id; int path; } ;
struct TYPE_24__ {TYPE_4__ new_file; TYPE_3__ old_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_10__*,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int *,TYPE_11__*,TYPE_11__*,TYPE_11__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_10__*,int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int **,int *) ;
 TYPE_9__* FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,int *,int *) ;

void FUNC_15(void)
{
 git_repository *VAR_2 = FUNC_5("status");
 git_index *VAR_3;
 git_index_entry VAR_4 = {0};
 git_status_list *VAR_5;
 const git_status_entry *VAR_6;
 git_oid VAR_7 = {{0}};

 VAR_4.mode = 0100644;
 VAR_4.path = "modified_file";
 FUNC_9(&VAR_4.id, "452e4244b5d083ddf0460acf1ecc74db9dcfa11a");

 FUNC_4(FUNC_10(&VAR_3, VAR_2));
 FUNC_4(FUNC_6(VAR_3, &VAR_4, &VAR_4, &VAR_4));

 FUNC_14(&VAR_5, VAR_2, ((void*)0));

 FUNC_1(16, FUNC_12(VAR_5));

 VAR_6 = FUNC_11(VAR_5, 2);

 FUNC_1(VAR_1, VAR_6->status);
 FUNC_3("modified_file", VAR_6->head_to_index->old_file.path);
 FUNC_0(!FUNC_8(&VAR_7, &VAR_6->head_to_index->old_file.id));
 FUNC_0(0 != VAR_6->head_to_index->old_file.mode);
 FUNC_3("modified_file", VAR_6->head_to_index->new_file.path);
 FUNC_2(&VAR_7, &VAR_6->head_to_index->new_file.id);
 FUNC_1(0, VAR_6->head_to_index->new_file.mode);
 FUNC_1(0, VAR_6->head_to_index->new_file.size);

 FUNC_3("modified_file", VAR_6->index_to_workdir->old_file.path);
 FUNC_2(&VAR_7, &VAR_6->index_to_workdir->old_file.id);
 FUNC_1(0, VAR_6->index_to_workdir->old_file.mode);
 FUNC_1(0, VAR_6->index_to_workdir->old_file.size);
 FUNC_3("modified_file", VAR_6->index_to_workdir->new_file.path);
 FUNC_0(
  !FUNC_8(&VAR_7, &VAR_6->index_to_workdir->new_file.id) ||
  !(VAR_6->index_to_workdir->new_file.flags & VAR_0));
 FUNC_0(0 != VAR_6->index_to_workdir->new_file.mode);
 FUNC_0(0 != VAR_6->index_to_workdir->new_file.size);

 FUNC_7(VAR_3);
 FUNC_13(VAR_5);
}
