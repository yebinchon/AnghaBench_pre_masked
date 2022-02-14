
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {struct sock* sk; } ;
struct chtls_sock {int txq_idx; } ;
struct TYPE_2__ {int cdev; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sock*,struct sock*) ;
 struct chtls_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct sk_buff*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct chtls_sock *VAR_3;
 struct sock *VAR_4;
 int VAR_5;

 VAR_4 = VAR_2->sk;
 VAR_3 = FUNC_2(VAR_4);
 VAR_5 = VAR_3->txq_idx;

 VAR_2->sk = ((void*)0);
 FUNC_1(VAR_4, VAR_1);
 FUNC_3(VAR_4, VAR_2, FUNC_0(VAR_2)->cdev,
         VAR_0, VAR_5);
}
