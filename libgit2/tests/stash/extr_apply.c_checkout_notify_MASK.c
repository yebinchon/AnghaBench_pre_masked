
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seen_paths {int what; int how; int who; int when; } ;
typedef int git_diff_file ;
typedef int const* git_checkout_notify_t ;


 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

int FUNC_2(
 git_checkout_notify_t VAR_0,
 const char *VAR_1,
 const git_diff_file *VAR_2,
 const git_diff_file *VAR_3,
 const git_diff_file *VAR_4,
 void *VAR_5)
{
 struct seen_paths *VAR_6 = (struct seen_paths *)VAR_5;

 FUNC_0(VAR_0);
 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);

 if (FUNC_1(VAR_1, "what") == 0)
  VAR_6->what = 1;
 else if (FUNC_1(VAR_1, "how") == 0)
  VAR_6->how = 1;
 else if (FUNC_1(VAR_1, "who") == 0)
  VAR_6->who = 1;
 else if (FUNC_1(VAR_1, "when") == 0)
  VAR_6->when = 1;

 return 0;
}
