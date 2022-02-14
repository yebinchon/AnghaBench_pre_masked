
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct TYPE_2__ {int (* backlog_rcv ) (struct sock*,struct sk_buff*) ;} ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 if (VAR_1->protocol) {
  FUNC_1(VAR_1);
  return 0;
 }
 FUNC_0(VAR_1)->backlog_rcv(VAR_0, VAR_1);
 return 0;
}
