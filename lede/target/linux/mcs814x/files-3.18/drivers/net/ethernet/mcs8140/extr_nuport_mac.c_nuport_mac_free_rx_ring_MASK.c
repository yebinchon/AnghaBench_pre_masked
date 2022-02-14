
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nuport_mac_priv {scalar_t__ rx_addr; TYPE_1__* pdev; int ** rx_skb; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct nuport_mac_priv *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (!VAR_3->rx_skb[VAR_4])
   continue;

  FUNC_0(VAR_3->rx_skb[VAR_4]);
  VAR_3->rx_skb[VAR_4] = ((void*)0);
 }

 if (VAR_3->rx_addr)
  FUNC_1(&VAR_3->pdev->dev, VAR_3->rx_addr, VAR_1,
    VAR_0);
}
