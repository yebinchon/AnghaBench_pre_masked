
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_parser_param {struct nl_cache* pp_arg; int pp_cb; } ;
struct nl_msg {int dummy; } ;
struct nl_cache {int c_ops; } ;


 int FUNC_0 (int ,int *,int ,struct nl_parser_param*) ;
 int FUNC_1 (struct nl_msg*) ;
 int VAR_0 ;

int FUNC_2(struct nl_cache *VAR_1, struct nl_msg *VAR_2)
{
 struct nl_parser_param VAR_3 = {
  .pp_cb = VAR_0,
  .pp_arg = VAR_1,
 };

 return FUNC_0(VAR_1->c_ops, ((void*)0), FUNC_1(VAR_2), &VAR_3);
}
