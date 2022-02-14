
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_9__ {int member_0; } ;
struct TYPE_10__ {char* path; int id; int mode; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;
struct TYPE_11__ {int context_lines; int interhunk_lines; unsigned long flags; } ;
typedef TYPE_3__ git_diff_options ;
typedef int git_diff ;
typedef int diff_expects ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *,int *,TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int) ;
 int * FUNC_11 (int ,char const*) ;

__attribute__((used)) static void FUNC_12(diff_expects *VAR_7, unsigned long VAR_8)
{
 const char *VAR_9 = "26a125ee1bf";
 git_tree *VAR_10 = FUNC_11(VAR_6, VAR_9);
 git_diff_options VAR_11 = VAR_0;
 git_index_entry VAR_12 = {0}, VAR_13 = {0}, VAR_14 = {0};
 git_diff *VAR_15 = ((void*)0);
 git_index *VAR_16;

 FUNC_0(VAR_10);

 VAR_11.context_lines = 1;
 VAR_11.interhunk_lines = 1;
 VAR_11.flags |= VAR_8;

 FUNC_10(VAR_7, 0, sizeof(diff_expects));

 FUNC_1(FUNC_8(&VAR_16, VAR_6));

 VAR_12.path = VAR_13.path = VAR_14.path = "staged_changes";
 VAR_12.mode = VAR_13.mode = VAR_14.mode = VAR_1;

 FUNC_7(&VAR_12.id, "d427e0b2e138501a3d15cc376077a3631e15bd46");
 FUNC_7(&VAR_13.id, "ee3fa1b8c00aff7fe02065fdb50864bb0d932ccf");
 FUNC_7(&VAR_14.id, "2bd0a343aeef7a2cf0d158478966a6e587ff3863");

 FUNC_1(FUNC_5(VAR_16, &VAR_12, &VAR_13, &VAR_14));
 FUNC_1(FUNC_4(&VAR_15, VAR_6, VAR_10, VAR_16, &VAR_11));

 FUNC_1(FUNC_2(
  VAR_15, VAR_3, VAR_2, VAR_4, VAR_5, VAR_7));

 FUNC_3(VAR_15);
 FUNC_9(VAR_10);
 FUNC_6(VAR_16);
}
