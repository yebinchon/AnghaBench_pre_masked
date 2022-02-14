
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_wmem_queued; } ;
struct sk_buff {scalar_t__ truesize; } ;
struct chtls_sock {int txq; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;
 struct chtls_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct chtls_sock *VAR_1 = FUNC_2(VAR_0);
 struct sk_buff *VAR_2;

 while ((VAR_2 = FUNC_1(&VAR_1->txq))) {
  VAR_0->sk_wmem_queued -= VAR_2->truesize;
  FUNC_0(VAR_2);
 }
}
