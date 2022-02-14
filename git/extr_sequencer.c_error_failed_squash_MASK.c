
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct replay_opts {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (struct repository*,struct commit*,char const*,int,struct replay_opts*,int,int ) ;
 char* FUNC_4 (struct repository*) ;
 char* FUNC_5 () ;
 char* FUNC_6 () ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct repository *VAR_0,
          struct commit *VAR_1,
          struct replay_opts *VAR_2,
          int VAR_3,
          const char *VAR_4)
{
 if (FUNC_1(FUNC_5(), FUNC_6(), 0666))
  return FUNC_2(FUNC_0("could not copy '%s' to '%s'"),
   FUNC_6(), FUNC_5());
 FUNC_7(FUNC_4(VAR_0));
 if (FUNC_1(FUNC_4(VAR_0), FUNC_5(), 0666))
  return FUNC_2(FUNC_0("could not copy '%s' to '%s'"),
        FUNC_5(),
        FUNC_4(VAR_0));
 return FUNC_3(VAR_0, VAR_1, VAR_4, VAR_3, VAR_2, 1, 0);
}
