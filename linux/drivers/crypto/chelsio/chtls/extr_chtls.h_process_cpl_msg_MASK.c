
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {void (* backlog_rcv ) (struct sock*,struct sk_buff*) ;} ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sock*,struct sk_buff*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static inline void FUNC_9(void (*VAR_0)(struct sock *, struct sk_buff *),
       struct sock *VAR_1,
       struct sk_buff *VAR_2)
{
 FUNC_4(VAR_2);
 FUNC_5(VAR_2);
 FUNC_6(VAR_2);

 FUNC_2(VAR_1);
 if (FUNC_8(FUNC_7(VAR_1))) {
  FUNC_0(VAR_2)->backlog_rcv = VAR_0;
  FUNC_1(VAR_1, VAR_2);
 } else {
  VAR_0(VAR_1, VAR_2);
 }
 FUNC_3(VAR_1);
}
