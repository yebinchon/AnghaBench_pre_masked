
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct args_info {int pos; } ;
struct TYPE_4__ {int no_commit; } ;
typedef TYPE_1__ merge_options ;


 struct args_info VAR_0 ;
 scalar_t__ FUNC_0 (char const**,struct args_info*,char*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static void FUNC_4(const char **VAR_1, merge_options *VAR_2, int VAR_3, char **VAR_4)
{
 struct args_info VAR_5 = VAR_0;

 if (VAR_3 <= 1)
  FUNC_2();

 for (VAR_5.pos = 1; VAR_5.pos < VAR_3; ++VAR_5.pos) {
  const char *VAR_6 = VAR_4[VAR_5.pos];

  if (VAR_6[0] != '-') {
   FUNC_1(VAR_2, VAR_6);
  } else if (!FUNC_3(VAR_6, "--no-commit")) {
   VAR_2->no_commit = 1;
  } else if (FUNC_0(VAR_1, &VAR_5, "--git-dir")) {
   continue;
  } else {
   FUNC_2();
  }
 }
}
