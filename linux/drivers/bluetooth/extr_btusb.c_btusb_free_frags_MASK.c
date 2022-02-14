
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btusb_data {int rxlock; int * sco_skb; int * acl_skb; int * evt_skb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct btusb_data *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->rxlock, VAR_1);

 FUNC_0(VAR_0->evt_skb);
 VAR_0->evt_skb = ((void*)0);

 FUNC_0(VAR_0->acl_skb);
 VAR_0->acl_skb = ((void*)0);

 FUNC_0(VAR_0->sco_skb);
 VAR_0->sco_skb = ((void*)0);

 FUNC_2(&VAR_0->rxlock, VAR_1);
}
