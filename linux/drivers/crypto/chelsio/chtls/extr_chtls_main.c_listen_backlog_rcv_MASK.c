
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* backlog_rcv ) (struct sock*,struct sk_buff*) ;} ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 if (FUNC_1(FUNC_3(VAR_1) != FUNC_2(VAR_1)))
  return FUNC_5(VAR_0, VAR_1);
 FUNC_0(VAR_1)->backlog_rcv(VAR_0, VAR_1);
 return 0;
}
