
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netconfig {int dummy; } ;
struct netbuf {int dummy; } ;
struct __rpc_sockinfo {int si_af; } ;


 int FUNC_0 (struct netconfig const*,struct __rpc_sockinfo*) ;
 struct netbuf* FUNC_1 (int ,char const*) ;

struct netbuf *
FUNC_2(const struct netconfig *VAR_0, const char *VAR_1)
{
 struct __rpc_sockinfo VAR_2;

 if (!FUNC_0(VAR_0, &VAR_2))
  return ((void*)0);
 return FUNC_1(VAR_2.si_af, VAR_1);
}
