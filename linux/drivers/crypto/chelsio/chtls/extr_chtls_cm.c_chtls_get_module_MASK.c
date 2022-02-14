
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct inet_connection_sock {TYPE_1__* icsk_ulp_ops; } ;
struct TYPE_2__ {int owner; } ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_0)
{
 struct inet_connection_sock *VAR_1 = FUNC_0(VAR_0);

 if (!FUNC_1(VAR_1->icsk_ulp_ops->owner))
  return -1;

 return 0;
}
