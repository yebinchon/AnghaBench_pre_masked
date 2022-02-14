
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay_opts {scalar_t__ action; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static const char *FUNC_0(const struct replay_opts *VAR_1)
{
 return VAR_1->action == VAR_0 ? "revert" : "cherry-pick";
}
