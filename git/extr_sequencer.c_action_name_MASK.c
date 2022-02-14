
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay_opts {int action; } ;


 char const* FUNC_0 (char*) ;



 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static const char *FUNC_3(const struct replay_opts *VAR_0)
{
 switch (VAR_0->action) {
 case 128:
  return FUNC_0("revert");
 case 129:
  return FUNC_0("cherry-pick");
 case 130:
  return FUNC_0("rebase -i");
 }
 FUNC_2(FUNC_1("unknown action: %d"), VAR_0->action);
}
