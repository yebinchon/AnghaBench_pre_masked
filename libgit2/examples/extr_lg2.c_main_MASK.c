
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct args_info {int pos; int argc; char** argv; } ;
typedef int git_repository ;
struct TYPE_3__ {char* name; int fn; scalar_t__ requires_repo; } ;


 struct args_info VAR_0 ;
 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,char const*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,char const*,int ,int *) ;
 scalar_t__ FUNC_7 (char const**,struct args_info*,char*,char*) ;
 int FUNC_8 (int ,int *,struct args_info) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

int FUNC_11(int VAR_3, char **VAR_4)
{
 struct args_info VAR_5 = VAR_0;
 git_repository *VAR_6 = ((void*)0);
 const char *VAR_7 = ((void*)0);
 int VAR_8 = 1;
 size_t VAR_9;

 if (VAR_3 < 2)
  FUNC_10(VAR_4[0]);

 FUNC_3();

 for (VAR_5.pos = 1; VAR_5.pos < VAR_5.argc; ++VAR_5.pos) {
  char *VAR_10 = VAR_5.argv[VAR_5.pos];

  if (VAR_10[0] != '-') {

   break;
  } else if (FUNC_7(&VAR_7, &VAR_5, "--git-dir", ".git")) {
   continue;
  } else if (!FUNC_9(VAR_10, "--")) {

   break;
  }
 }

 if (VAR_5.pos == VAR_5.argc)
  FUNC_10(VAR_4[0]);

 if (!VAR_7)
  VAR_7 = ".";

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_1); ++VAR_9) {
  if (FUNC_9(VAR_5.argv[VAR_5.pos], VAR_1[VAR_9].name))
   continue;





  if (VAR_1[VAR_9].requires_repo) {
   FUNC_1(FUNC_6(&VAR_6, VAR_7, 0, ((void*)0)),
      "Unable to open repository '%s'", VAR_7);
  }

  VAR_8 = FUNC_8(VAR_1[VAR_9].fn, VAR_6, VAR_5);
  goto shutdown;
 }

 FUNC_2(VAR_2, "Command not found: %s\n", VAR_4[1]);

shutdown:
 FUNC_5(VAR_6);
 FUNC_4();

 return VAR_8;
}
