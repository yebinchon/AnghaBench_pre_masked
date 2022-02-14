
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nuport_mac_priv {scalar_t__* rx_skb; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct nuport_mac_priv *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->rx_skb[VAR_2])
   return 1;

 return 0;
}
