
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct rss_header {int opcode; } ;
struct cpl_peer_close {int dummy; } ;
struct chtls_dev {int tids; } ;






 unsigned int FUNC_0 (struct cpl_peer_close*) ;
 int VAR_0 ;
 void FUNC_1 (struct sock*,struct sk_buff*) ;
 void FUNC_2 (struct sock*,struct sk_buff*) ;
 void FUNC_3 (struct sock*,struct sk_buff*) ;
 void FUNC_4 (struct sock*,struct sk_buff*) ;
 struct cpl_peer_close* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sock* FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (void (*) (struct sock*,struct sk_buff*),struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct chtls_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct cpl_peer_close *VAR_3 = FUNC_5(VAR_2) + VAR_0;
 void (*VAR_4)(struct sock *VAR_5, struct sk_buff *VAR_6);
 unsigned int VAR_7 = FUNC_0(VAR_3);
 struct sock *VAR_8;
 u8 VAR_9;

 VAR_9 = ((const struct rss_header *)FUNC_5(VAR_2))->opcode;

 VAR_8 = FUNC_7(VAR_1->tids, VAR_7);
 if (!VAR_8)
  goto rel_skb;

 switch (VAR_9) {
 case 128:
  VAR_4 = FUNC_4;
  break;
 case 129:
  VAR_4 = FUNC_3;
  break;
 case 131:
  VAR_4 = FUNC_1;
  break;
 case 130:
  VAR_4 = FUNC_2;
  break;
 default:
  goto rel_skb;
 }

 FUNC_8(VAR_4, VAR_8, VAR_2);
 return 0;

rel_skb:
 FUNC_6(VAR_2);
 return 0;
}
