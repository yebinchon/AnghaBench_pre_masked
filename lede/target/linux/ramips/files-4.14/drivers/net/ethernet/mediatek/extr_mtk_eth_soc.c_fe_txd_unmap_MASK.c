
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct fe_tx_buf {struct sk_buff* skb; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct fe_tx_buf*,int ) ;
 scalar_t__ FUNC_2 (struct fe_tx_buf*,int ) ;
 int FUNC_3 (struct fe_tx_buf*,int ,int ) ;
 int FUNC_4 (struct device*,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_6, struct fe_tx_buf *VAR_7)
{
 if (FUNC_2(VAR_7, VAR_4))
  FUNC_4(VAR_6,
          FUNC_1(VAR_7, VAR_2),
          FUNC_2(VAR_7, VAR_4),
          VAR_1);

 if (FUNC_2(VAR_7, VAR_5))
  FUNC_4(VAR_6,
          FUNC_1(VAR_7, VAR_3),
          FUNC_2(VAR_7, VAR_5),
          VAR_1);

 FUNC_3(VAR_7, VAR_2, 0);
 FUNC_3(VAR_7, VAR_3, 0);
 if (VAR_7->skb && (VAR_7->skb != (struct sk_buff *)VAR_0))
  FUNC_0(VAR_7->skb);
 VAR_7->skb = ((void*)0);
}
