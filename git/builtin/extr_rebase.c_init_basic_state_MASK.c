
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay_opts {int dummy; } ;
struct commit {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,...) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct replay_opts*,char const*,struct commit*,char const*) ;

__attribute__((used)) static int FUNC_10(struct replay_opts *VAR_0, const char *VAR_1,
       struct commit *VAR_2, const char *VAR_3)
{
 FILE *VAR_4;

 if (!FUNC_5(FUNC_6()) && FUNC_7(FUNC_6()))
  return FUNC_2(FUNC_0("could not create temporary %s"), FUNC_6());

 FUNC_1("REBASE_HEAD");

 VAR_4 = FUNC_4(FUNC_8(), "w");
 if (!VAR_4)
  return FUNC_2(FUNC_0("could not mark as interactive"));
 FUNC_3(VAR_4);

 return FUNC_9(VAR_0, VAR_1, VAR_2, VAR_3);
}
