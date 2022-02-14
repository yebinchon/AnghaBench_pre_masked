
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_status_list ;
struct TYPE_10__ {TYPE_2__* head_to_index; } ;
typedef TYPE_3__ git_status_entry ;
typedef int git_reference ;
struct TYPE_11__ {int id; int type; } ;
typedef TYPE_4__ git_rebase_operation ;
typedef int git_rebase ;
typedef int git_oid ;
typedef int git_annotated_commit ;
struct TYPE_8__ {int id; int path; } ;
struct TYPE_9__ {TYPE_1__ new_file; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int *,int *,int *,int *) ;
 int FUNC_11 (TYPE_4__**,int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int **,int ,char*) ;
 TYPE_3__* FUNC_18 (int *,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int **,int ,int *) ;
 int VAR_1 ;

void FUNC_22(void)
{
 git_rebase *VAR_2;
 git_reference *VAR_3, *VAR_4;
 git_annotated_commit *VAR_5, *VAR_6;
 git_rebase_operation *VAR_7;
 git_status_list *VAR_8;
 const git_status_entry *VAR_9;
 git_oid VAR_10, VAR_11;
 git_oid VAR_12, VAR_13;

 FUNC_8(&VAR_12, "efad0b11c47cb2f0220cbd6f5b0f93bb99064b00");
 FUNC_8(&VAR_13, "b146bd7608eac53d9bf9e1a6963543588b555c64");

 FUNC_5(FUNC_17(&VAR_3, VAR_1, "refs/heads/beef"));
 FUNC_5(FUNC_17(&VAR_4, VAR_1, "refs/heads/master"));

 FUNC_5(FUNC_7(&VAR_5, VAR_1, VAR_3));
 FUNC_5(FUNC_7(&VAR_6, VAR_1, VAR_4));

 FUNC_5(FUNC_10(&VAR_2, VAR_1, VAR_5, VAR_6, ((void*)0), ((void*)0)));

 FUNC_4("refs/heads/beef", FUNC_15(VAR_2));
 FUNC_3(&VAR_13, FUNC_14(VAR_2));

 FUNC_4("master", FUNC_13(VAR_2));
 FUNC_3(&VAR_12, FUNC_12(VAR_2));

 FUNC_5(FUNC_11(&VAR_7, VAR_2));

 FUNC_8(&VAR_10, "da9c51a23d02d931a486f45ad18cda05cf5d2b94");

 FUNC_2(VAR_0, VAR_7->type);
 FUNC_3(&VAR_10, &VAR_7->id);
 FUNC_1("da9c51a23d02d931a486f45ad18cda05cf5d2b94\n", 41, "rebase/.git/rebase-merge/current");
 FUNC_1("1\n", 2, "rebase/.git/rebase-merge/msgnum");

 FUNC_5(FUNC_21(&VAR_8, VAR_1, ((void*)0)));
 FUNC_2(1, FUNC_19(VAR_8));
 FUNC_0(VAR_9 = FUNC_18(VAR_8, 0));

 FUNC_4("beef.txt", VAR_9->head_to_index->new_file.path);

 FUNC_8(&VAR_11, "8d95ea62e621f1d38d230d9e7d206e41096d76af");
 FUNC_3(&VAR_11, &VAR_9->head_to_index->new_file.id);

 FUNC_20(VAR_8);
 FUNC_6(VAR_5);
 FUNC_6(VAR_6);
 FUNC_16(VAR_3);
 FUNC_16(VAR_4);
 FUNC_9(VAR_2);
}
