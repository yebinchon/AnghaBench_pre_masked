
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct args_info {int argc; int pos; char** argv; } ;
struct TYPE_4__ {int progress; int force; int perf; } ;
typedef TYPE_1__ checkout_options ;


 scalar_t__ FUNC_0 (int*,struct args_info*,char*) ;
 scalar_t__ FUNC_1 (char const**,struct args_info*,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static void FUNC_5(const char **VAR_0, checkout_options *VAR_1, struct args_info *VAR_2)
{
 if (VAR_2->argc <= 1)
  FUNC_3();

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));


 VAR_1->progress = 1;

 for (VAR_2->pos = 1; VAR_2->pos < VAR_2->argc; ++VAR_2->pos) {
  const char *VAR_3 = VAR_2->argv[VAR_2->pos];
  int VAR_4;

  if (FUNC_4(VAR_3, "--") == 0) {
   break;
  } else if (!FUNC_4(VAR_3, "--force")) {
   VAR_1->force = 1;
  } else if (FUNC_0(&VAR_4, VAR_2, "--progress")) {
   VAR_1->progress = VAR_4;
  } else if (FUNC_0(&VAR_4, VAR_2, "--perf")) {
   VAR_1->perf = VAR_4;
  } else if (FUNC_1(VAR_0, VAR_2, "--git-dir")) {
   continue;
  } else {
   break;
  }
 }
}
