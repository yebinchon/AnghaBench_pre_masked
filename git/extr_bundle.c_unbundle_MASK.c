
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct child_process {char const** argv; int in; int no_stdout; int git_cmd; } ;
struct bundle_header {int dummy; } ;


 int VAR_0 ;
 struct child_process VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct child_process*) ;
 scalar_t__ FUNC_3 (struct repository*,struct bundle_header*,int ) ;

int FUNC_4(struct repository *VAR_2, struct bundle_header *VAR_3,
      int VAR_4, int VAR_5)
{
 const char *VAR_6[] = {"index-pack",
      "--fix-thin", "--stdin", ((void*)0), ((void*)0)};
 struct child_process VAR_7 = VAR_1;

 if (VAR_5 & VAR_0)
  VAR_6[3] = "-v";

 if (FUNC_3(VAR_2, VAR_3, 0))
  return -1;
 VAR_7.argv = VAR_6;
 VAR_7.in = VAR_4;
 VAR_7.no_stdout = 1;
 VAR_7.git_cmd = 1;
 if (FUNC_2(&VAR_7))
  return FUNC_1(FUNC_0("index-pack died"));
 return 0;
}
