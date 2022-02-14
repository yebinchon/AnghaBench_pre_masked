
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int recursive; } ;
struct archiver_args {TYPE_1__ pathspec; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,char*,char const**) ;
 int FUNC_3 (struct archiver_args*,char const*) ;

__attribute__((used)) static void FUNC_4(const char **VAR_1,
  struct archiver_args *VAR_2)
{





 FUNC_2(&VAR_2->pathspec, 0,
         VAR_0,
         "", VAR_1);
 VAR_2->pathspec.recursive = 1;
 if (VAR_1) {
  while (*VAR_1) {
   if (**VAR_1 && !FUNC_3(VAR_2, *VAR_1))
    FUNC_1(FUNC_0("pathspec '%s' did not match any files"), *VAR_1);
   VAR_1++;
  }
 }
}
