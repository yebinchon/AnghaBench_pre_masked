
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_sock {int dummy; } ;
struct nl_cb {int dummy; } ;


 int VAR_0 ;
 struct nl_sock* FUNC_0 (struct nl_cb*) ;
 struct nl_cb* FUNC_1 (int ) ;

struct nl_sock *FUNC_2(void)
{
 struct nl_cb *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 return FUNC_0(VAR_1);
}
