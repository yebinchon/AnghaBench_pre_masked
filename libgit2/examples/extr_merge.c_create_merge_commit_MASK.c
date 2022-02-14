
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int annotated_count; char** heads; int ** annotated; } ;
typedef TYPE_1__ merge_options ;
typedef int git_tree ;
typedef int git_signature ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_index ;
typedef int git_commit ;
typedef int git_annotated_commit ;
struct TYPE_5__ {int * message; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int ** FUNC_0 (int,int) ;
 int FUNC_1 (int,char*,int *) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const**,int *) ;
 int FUNC_6 (int *,int *,int ,int *,int *,int *,char*,int *,int,int const**) ;
 int FUNC_7 (int **,int *,int ) ;
 TYPE_2__* FUNC_8 () ;
 int FUNC_9 (int *,int *) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (int **,int *,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int *,int ) ;
 int FUNC_14 (int **,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int **,char*,char*) ;
 int FUNC_17 (int **,int *,int *) ;
 char* FUNC_18 (size_t) ;
 scalar_t__ FUNC_19 (int **,int *,char*) ;
 void* FUNC_20 (char*,size_t,char*,char*,char const*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_21(git_repository *VAR_3, git_index *VAR_4, merge_options *VAR_5)
{
 git_oid VAR_6, VAR_7;
 git_tree *VAR_8;
 git_signature *VAR_9;
 git_reference *VAR_10 = ((void*)0);
 git_annotated_commit *VAR_11;
 git_reference *VAR_12;
 git_commit **VAR_13 = FUNC_0(VAR_5->annotated_count + 1, sizeof(git_commit *));
 const char *VAR_14 = ((void*)0);
 size_t VAR_15 = 0;
 char *VAR_16;
 size_t VAR_17;
 int VAR_18;


 FUNC_1(FUNC_14(&VAR_12, VAR_3), "failed to get repo HEAD", ((void*)0));
 if (FUNC_19(&VAR_11, VAR_3, VAR_5->heads[0])) {
  FUNC_2(VAR_2, "failed to resolve refish %s", VAR_5->heads[0]);
  FUNC_3(VAR_13);
  return -1;
 }


 VAR_18 = FUNC_11(&VAR_10, VAR_3, VAR_5->heads[0]);
 FUNC_1(VAR_18, "failed to DWIM reference", FUNC_8()->message);


 FUNC_1(FUNC_16(&VAR_9, "Me", "me@example.com"), "failed to create signature", ((void*)0));



 if (VAR_10 != ((void*)0)) {
  FUNC_1(FUNC_5(&VAR_14, VAR_10), "failed to get branch name of merged ref", ((void*)0));
 } else {
  VAR_14 = FUNC_10(FUNC_4(VAR_11));
 }

 VAR_15 = FUNC_20(((void*)0), 0, "Merge %s '%s'", (VAR_10 ? "branch" : "commit"), VAR_14);
 if (VAR_15 > 0) VAR_15++;
 VAR_16 = FUNC_18(VAR_15);
 VAR_18 = FUNC_20(VAR_16, VAR_15, "Merge %s '%s'", (VAR_10 ? "branch" : "commit"), VAR_14);


 if (VAR_18 < 0) goto cleanup;


 VAR_18 = FUNC_13((git_object **)&VAR_13[0], VAR_12, VAR_0);
 FUNC_1(VAR_18, "failed to peel head reference", ((void*)0));
 for (VAR_17 = 0; VAR_17 < VAR_5->annotated_count; VAR_17++) {
  FUNC_7(&VAR_13[VAR_17 + 1], VAR_3, FUNC_4(VAR_5->annotated[VAR_17]));
 }


 FUNC_1(FUNC_9(&VAR_6, VAR_4), "failed to write merged tree", ((void*)0));
 FUNC_1(FUNC_17(&VAR_8, VAR_3, &VAR_6), "failed to lookup tree", ((void*)0));


 VAR_18 = FUNC_6(&VAR_7,
                         VAR_3, FUNC_12(VAR_12),
                         VAR_9, VAR_9,
                         ((void*)0), VAR_16,
                         VAR_8,
                         VAR_5->annotated_count + 1, (const git_commit **)VAR_13);
 FUNC_1(VAR_18, "failed to create commit", ((void*)0));


 FUNC_15(VAR_3);

cleanup:
 FUNC_3(VAR_13);
 return VAR_18;
}
