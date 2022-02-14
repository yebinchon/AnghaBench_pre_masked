
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_signature ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_index ;
struct TYPE_13__ {int flags; } ;
typedef TYPE_3__ git_diff_options ;
struct TYPE_14__ {int flags; } ;
typedef TYPE_4__ git_diff_find_options ;
struct TYPE_12__ {int path; } ;
struct TYPE_11__ {int path; } ;
struct TYPE_15__ {TYPE_2__ new_file; TYPE_1__ old_file; int status; } ;
typedef TYPE_5__ git_diff_delta ;
typedef int git_diff ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_7 ;
 int FUNC_5 (int *,int ,char*,int *,int *,int *,char*,int *,int,int const**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int *,TYPE_4__*) ;
 int FUNC_9 (int *) ;
 TYPE_5__* FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,int *,TYPE_3__*) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int **,int *,int ) ;
 int FUNC_18 (int **,int ) ;
 int FUNC_19 (int **,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int **,char*,char*,int,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int **,int ,int *) ;

void FUNC_24(void)
{
 git_index *VAR_8;
 git_reference *VAR_9;
 git_commit *VAR_10;
 git_tree *VAR_11;
 git_tree *VAR_12;
 git_signature *VAR_13;
 git_diff *VAR_14;
 git_oid VAR_15;
 const git_diff_delta *VAR_16;
 git_diff_options VAR_17 = VAR_5;
 git_diff_find_options VAR_18 = VAR_2;

 FUNC_3(FUNC_19(&VAR_8, VAR_7));

 FUNC_2("renames/small.txt", "Hello World!\n");
 FUNC_3(FUNC_13(VAR_8, "small.txt"));

 FUNC_3(FUNC_18(&VAR_9, VAR_7));
 FUNC_3(FUNC_17((git_object**)&VAR_10, VAR_9, VAR_6));
 FUNC_3(FUNC_7(&VAR_11, VAR_10));
 FUNC_3(FUNC_15(&VAR_15, VAR_8));
 FUNC_3(FUNC_23(&VAR_12, VAR_7, &VAR_15));
 FUNC_3(FUNC_21(&VAR_13, "Rename", "rename@example.com", 1404157834, 0));
 FUNC_3(FUNC_5(&VAR_15, VAR_7, "HEAD", VAR_13, VAR_13, ((void*)0), "Test commit", VAR_12, 1, (const git_commit**)&VAR_10));

 FUNC_2("renames/copy.txt", "Hello World!\n");
 FUNC_4("renames/small.txt");

 VAR_17.flags = VAR_4;
 FUNC_3(FUNC_12(&VAR_14, VAR_7, VAR_12, &VAR_17));
 VAR_18.flags = VAR_3 | VAR_1;
 FUNC_3(FUNC_8(VAR_14, &VAR_18));

 FUNC_0(FUNC_11(VAR_14), 1);
 VAR_16 = FUNC_10(VAR_14, 0);
 FUNC_0(VAR_16->status, VAR_0);
 FUNC_1(VAR_16->old_file.path, "small.txt");
 FUNC_1(VAR_16->new_file.path, "copy.txt");

 FUNC_9(VAR_14);
 FUNC_20(VAR_13);
 FUNC_22(VAR_12);
 FUNC_22(VAR_11);
 FUNC_6(VAR_10);
 FUNC_16(VAR_9);
 FUNC_14(VAR_8);
}
