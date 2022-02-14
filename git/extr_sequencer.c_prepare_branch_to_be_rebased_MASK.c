
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct replay_opts {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 char* FUNC_2 (struct replay_opts*,char*,char*,char const*) ;
 scalar_t__ FUNC_3 (struct repository*,struct replay_opts*,char const*,char const*) ;

int FUNC_4(struct repository *VAR_0, struct replay_opts *VAR_1,
     const char *VAR_2)
{
 const char *VAR_3;

 if (VAR_2 && *VAR_2) {
  VAR_3 = FUNC_2(VAR_1, "start", "checkout %s", VAR_2);
  if (FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3))
   return FUNC_1(FUNC_0("could not checkout %s"), VAR_2);
 }

 return 0;
}
