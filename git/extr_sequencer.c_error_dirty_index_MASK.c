
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct replay_opts {int dummy; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (struct replay_opts*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct repository*) ;

__attribute__((used)) static int FUNC_6(struct repository *VAR_1, struct replay_opts *VAR_2)
{
 if (FUNC_5(VAR_1))
  return FUNC_4(FUNC_0(FUNC_1(VAR_2)));

 FUNC_3(FUNC_0("your local changes would be overwritten by %s."),
  FUNC_0(FUNC_1(VAR_2)));

 if (VAR_0)
  FUNC_2(FUNC_0("commit your changes or stash them to proceed."));
 return -1;
}
