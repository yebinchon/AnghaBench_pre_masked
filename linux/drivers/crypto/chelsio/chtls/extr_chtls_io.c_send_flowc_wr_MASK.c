
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct fw_flowc_wr {int dummy; } ;
struct chtls_sock {int txq_idx; int egress_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (struct sock*,struct fw_flowc_wr*,int) ;
 scalar_t__ FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (int ,int ,struct fw_flowc_wr*,int) ;
 struct chtls_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct tcp_sock*,struct sk_buff*,int ) ;
 int FUNC_5 (struct sock*,struct sk_buff*,int) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_4, struct fw_flowc_wr *VAR_5,
    int VAR_6)
{
 struct chtls_sock *VAR_7 = FUNC_3(VAR_4);
 struct tcp_sock *VAR_8 = FUNC_6(VAR_4);
 struct sk_buff *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_10 = VAR_6 / 16;

 if (FUNC_1(VAR_4, VAR_0)) {
  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6);
  if (!VAR_9)
   return -VAR_1;

  FUNC_5(VAR_4, VAR_9,
      VAR_3 | VAR_2);
  return 0;
 }

 VAR_11 = FUNC_2(VAR_7->egress_dev,
     VAR_7->txq_idx,
     VAR_5, VAR_6);
 if (!VAR_11)
  return VAR_10;
 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6);
 if (!VAR_9)
  return -VAR_1;
 FUNC_4(VAR_4, VAR_8, VAR_9, 0);
 return VAR_10;
}
