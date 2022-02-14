
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_9__ {int member_0; } ;
struct TYPE_11__ {char* path; int mode; int id; TYPE_1__ member_0; } ;
typedef TYPE_3__ git_index_entry ;
typedef int git_index ;
struct TYPE_10__ {int path; } ;
struct TYPE_12__ {int status; int nfiles; TYPE_2__ old_file; } ;
typedef TYPE_4__ git_diff_delta ;
typedef int git_diff ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 TYPE_4__* FUNC_5 (int *,int ) ;
 int FUNC_6 (int **,int ,int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,int *,int *,int *) ;
 int FUNC_10 (int *,TYPE_3__*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int **,int ) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int ,char const*) ;

void FUNC_16(void) {
 const char *VAR_2 = "26a125ee1bf";
 git_index_entry VAR_3 = {0}, VAR_4 = {0}, VAR_5 = {0};
 git_tree *VAR_6;
 git_index *VAR_7;
 git_diff *VAR_8, *VAR_9;
 const git_diff_delta *VAR_10;

 VAR_1 = FUNC_3("status");
 VAR_6 = FUNC_15(VAR_1, VAR_2);

 FUNC_2(FUNC_13(&VAR_7, VAR_1));

 VAR_3.path = VAR_4.path = VAR_5.path = "_file";
 VAR_3.mode = VAR_4.mode = VAR_5.mode = 0100644;
 FUNC_12(&VAR_3.id, "d427e0b2e138501a3d15cc376077a3631e15bd46");
 FUNC_12(&VAR_4.id, "ee3fa1b8c00aff7fe02065fdb50864bb0d932ccf");
 FUNC_12(&VAR_5.id, "2bd0a343aeef7a2cf0d158478966a6e587ff3863");
 FUNC_2(FUNC_10(VAR_7, &VAR_3, &VAR_4, &VAR_5));

 FUNC_2(FUNC_9(&VAR_8, VAR_1, VAR_6, VAR_7, ((void*)0)));
 FUNC_2(FUNC_6(&VAR_9, VAR_1, VAR_7, ((void*)0)));
 FUNC_2(FUNC_7(VAR_8, VAR_9));

 FUNC_0(FUNC_8(VAR_8), 12);
 VAR_10 = FUNC_5(VAR_8, 0);
 FUNC_1(VAR_10->old_file.path, "_file");
 FUNC_0(VAR_10->nfiles, 1);
 FUNC_0(VAR_10->status, VAR_0);

 FUNC_4(VAR_9);
 FUNC_4(VAR_8);
 FUNC_11(VAR_7);
 FUNC_14(VAR_6);
}
