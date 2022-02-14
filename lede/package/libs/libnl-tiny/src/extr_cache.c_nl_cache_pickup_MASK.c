
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_sock {int dummy; } ;
struct nl_parser_param {struct nl_cache* pp_arg; int pp_cb; } ;
struct nl_cache {int dummy; } ;


 int FUNC_0 (struct nl_sock*,struct nl_cache*,struct nl_parser_param*) ;
 int VAR_0 ;

int FUNC_1(struct nl_sock *VAR_1, struct nl_cache *VAR_2)
{
 struct nl_parser_param VAR_3 = {
  .pp_cb = VAR_0,
  .pp_arg = VAR_2,
 };

 return FUNC_0(VAR_1, VAR_2, &VAR_3);
}
