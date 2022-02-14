
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct chtls_hws {int sk_recv_queue; } ;
struct chtls_sock {struct chtls_hws tlshws; } ;


 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 struct chtls_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sk_buff*,int *) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0)
{
 struct chtls_sock *VAR_1 = FUNC_2(VAR_0);
 struct chtls_hws *VAR_2 = &VAR_1->tlshws;
 struct sk_buff *VAR_3;

 while ((VAR_3 = FUNC_0(&VAR_2->sk_recv_queue)) != ((void*)0)) {
  FUNC_3(VAR_3, ((void*)0));
  FUNC_1(VAR_3);
 }
}
