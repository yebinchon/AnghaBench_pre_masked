
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulp_skb_cb {int flags; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ulp_skb_cb* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_3)
{
 struct ulp_skb_cb *VAR_4 = FUNC_0(VAR_3);

 if (!(VAR_4->flags & VAR_2))
  VAR_4->flags = VAR_0;
 VAR_4->flags |= VAR_1;
}
