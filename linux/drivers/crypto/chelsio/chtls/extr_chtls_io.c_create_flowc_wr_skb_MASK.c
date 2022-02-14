
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct fw_flowc_wr {int dummy; } ;
struct chtls_sock {int txq_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,struct fw_flowc_wr*,int) ;
 struct chtls_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct sock *VAR_2,
        struct fw_flowc_wr *VAR_3,
        int VAR_4)
{
 struct chtls_sock *VAR_5 = FUNC_3(VAR_2);
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_1);
 if (!VAR_6)
  return ((void*)0);

 FUNC_2(FUNC_0(VAR_6, VAR_4), VAR_3, VAR_4);
 FUNC_4(VAR_6, (VAR_5->txq_idx << 1) | VAR_0);

 return VAR_6;
}
