
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct netconfig {int dummy; } ;
struct __rpc_sockinfo {int si_proto; int si_socktype; int si_af; } ;
struct TYPE_3__ {int td_ucred; } ;


 int FUNC_0 (struct netconfig const*,struct __rpc_sockinfo*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,struct socket**,int ,int ,int ,TYPE_1__*) ;

struct socket *
FUNC_2(const struct netconfig *VAR_1)
{
 struct __rpc_sockinfo VAR_2;
 struct socket *VAR_3;
 int VAR_4;

 if (!FUNC_0(VAR_1, &VAR_2))
  return 0;

 VAR_3 = ((void*)0);
 VAR_4 = FUNC_1(VAR_2.si_af, &VAR_3, VAR_2.si_socktype, VAR_2.si_proto,
     VAR_0->td_ucred, VAR_0);

 if (VAR_4)
  return ((void*)0);
 else
  return VAR_3;
}
