
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct h5 {int flags; scalar_t__ rx_pending; int rx_func; int * rx_skb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct h5 *VAR_2)
{
 if (VAR_2->rx_skb) {
  FUNC_1(VAR_2->rx_skb);
  VAR_2->rx_skb = ((void*)0);
 }

 VAR_2->rx_func = VAR_1;
 VAR_2->rx_pending = 0;
 FUNC_0(VAR_0, &VAR_2->flags);
}
