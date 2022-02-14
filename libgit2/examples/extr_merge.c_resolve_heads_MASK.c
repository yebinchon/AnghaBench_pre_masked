
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t heads_count; char** heads; size_t annotated_count; int ** annotated; } ;
typedef TYPE_1__ merge_options ;
typedef int git_repository ;
typedef int git_annotated_commit ;
struct TYPE_5__ {char* message; } ;


 int ** FUNC_0 (size_t,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int **) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (int **,int *,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(git_repository *VAR_1, merge_options *VAR_2)
{
 git_annotated_commit **VAR_3 = FUNC_0(VAR_2->heads_count, sizeof(git_annotated_commit *));
 size_t VAR_4 = 0, VAR_5;
 int VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2->heads_count; VAR_5++) {
  VAR_6 = FUNC_4(&VAR_3[VAR_4++], VAR_1, VAR_2->heads[VAR_5]);
  if (VAR_6 != 0) {
   FUNC_1(VAR_0, "failed to resolve refish %s: %s\n", VAR_2->heads[VAR_5], FUNC_3()->message);
   VAR_4--;
   continue;
  }
 }

 if (VAR_4 != VAR_2->heads_count) {
  FUNC_1(VAR_0, "unable to parse some refish\n");
  FUNC_2(VAR_3);
  return -1;
 }

 VAR_2->annotated = VAR_3;
 VAR_2->annotated_count = VAR_4;
 return 0;
}
