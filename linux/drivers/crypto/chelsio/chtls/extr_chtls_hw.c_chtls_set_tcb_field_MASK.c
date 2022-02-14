
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct ulptx_idata {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cpl_set_tcb_field {int dummy; } ;
struct chtls_sock {int txq_idx; unsigned int wr_credits; unsigned int wr_unacked; int egress_dev; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sock*,struct sk_buff*,int ,int ,int ,int ,int) ;
 struct sk_buff* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int ,struct sk_buff*) ;
 int FUNC_4 (struct chtls_sock*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct chtls_sock* FUNC_6 (struct sock*) ;
 unsigned int FUNC_7 (int,int) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_3, u16 VAR_4, u64 VAR_5, u64 VAR_6)
{
 struct cpl_set_tcb_field *VAR_7;
 unsigned int VAR_8;
 struct chtls_sock *VAR_9;
 struct ulptx_idata *VAR_10;
 struct sk_buff *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_12 = FUNC_7(sizeof(*VAR_7) + sizeof(*VAR_10), 16);

 VAR_11 = FUNC_2(VAR_12, VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_12, 16);
 VAR_9 = FUNC_6(VAR_3);

 FUNC_1(VAR_3, VAR_11, VAR_4, VAR_5, VAR_6, 0, 1);
 FUNC_8(VAR_11, (VAR_9->txq_idx << 1) | VAR_0);
 VAR_9->wr_credits -= VAR_8;
 VAR_9->wr_unacked += VAR_8;
 FUNC_4(VAR_9, VAR_11);
 VAR_13 = FUNC_3(VAR_9->egress_dev, VAR_11);
 if (VAR_13 < 0)
  FUNC_5(VAR_11);
 return VAR_13 < 0 ? VAR_13 : 0;
}
