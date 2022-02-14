
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct args_info {size_t pos; size_t argc; char** argv; } ;
typedef scalar_t__ git_repository_state_t ;
typedef int git_repository ;
typedef int git_annotated_commit ;
typedef int checkout_options ;
struct TYPE_2__ {char* message; } ;


 struct args_info VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char const**,int *,struct args_info*) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int **,int *,char*) ;
 int VAR_2 ;
 int FUNC_7 (char*,char*) ;

int FUNC_8(git_repository *VAR_3, int VAR_4, char **VAR_5)
{
 struct args_info VAR_6 = VAR_0;
 checkout_options VAR_7;
 git_repository_state_t VAR_8;
 git_annotated_commit *VAR_9 = ((void*)0);
 int VAR_10 = 0;
 const char *VAR_11 = ".";


 FUNC_4(&VAR_11, &VAR_7, &VAR_6);


 VAR_8 = FUNC_3(VAR_3);
 if (VAR_8 != VAR_1) {
  FUNC_0(VAR_2, "repository is in unexpected state %ld\n", VAR_8);
  goto cleanup;
 }

 if (VAR_6.pos >= VAR_6.argc) {
  FUNC_0(VAR_2, "unhandled\n");
  VAR_10 = -1;
  goto cleanup;
 } else if (!FUNC_7("--", VAR_6.argv[VAR_6.pos])) {




  FUNC_0(VAR_2, "unhandled path-based checkout\n");
  VAR_10 = 1;
  goto cleanup;
 } else {



  VAR_10 = FUNC_6(&VAR_9, VAR_3, VAR_6.argv[VAR_6.pos]);
  if (VAR_10 != 0) {
   FUNC_0(VAR_2, "failed to resolve %s: %s\n", VAR_6.argv[VAR_6.pos], FUNC_2()->message);
   goto cleanup;
  }
  VAR_10 = FUNC_5(VAR_3, VAR_9, &VAR_7);
 }

cleanup:
 FUNC_1(VAR_9);

 return VAR_10;
}
