
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int data; } ;
struct nuport_mac_priv {int rx_addr; TYPE_1__* pdev; int dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct nuport_mac_priv *VAR_7,
     struct sk_buff *VAR_8)
{
 u32 VAR_9;
 unsigned int VAR_10 = 2048;

 while (VAR_10--) {
  VAR_9 = FUNC_4(VAR_6);
  if (!(VAR_9 & VAR_5)) {
   FUNC_3(VAR_7->dev, "dma ready\n");
   break;
  }
  FUNC_0();
 }

 if (!VAR_10)
  return -VAR_1;

 VAR_7->rx_addr = FUNC_1(&VAR_7->pdev->dev, VAR_8->data,
    VAR_3, VAR_0);
 if (FUNC_2(&VAR_7->pdev->dev, VAR_7->rx_addr))
  return -VAR_2;

 FUNC_5(VAR_7->rx_addr, VAR_4);
 FUNC_6();
 FUNC_5(VAR_5, VAR_6);

 return 0;
}
