
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct chtls_sock {int egress_dev; int l2t_entry; } ;


 int FUNC_0 (int ,struct sk_buff*,int ) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 struct chtls_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static inline void FUNC_3(struct sock *VAR_0, struct tcp_sock *VAR_1,
     struct sk_buff *VAR_2, int VAR_3)
{
 struct chtls_sock *VAR_4 = FUNC_2(VAR_0);

 if (VAR_3) {

  FUNC_0(VAR_4->egress_dev, VAR_2, VAR_4->l2t_entry);
 } else {

  FUNC_1(VAR_4->egress_dev, VAR_2);
 }
}
