
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct nuport_mac_priv {int tx_addr; TYPE_1__* pdev; int dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct nuport_mac_priv *VAR_11,
     struct sk_buff *VAR_12)
{
 u32 VAR_13;
 unsigned int VAR_14 = 2048;

 while (VAR_14--) {
  VAR_13 = FUNC_4(VAR_10);
  if (!(VAR_13 & VAR_4)) {
   FUNC_3(VAR_11->dev, "dma ready\n");
   break;
  }
  FUNC_0();
 }

 if (!VAR_14)
  return -VAR_1;

 VAR_11->tx_addr = FUNC_1(&VAR_11->pdev->dev, VAR_12->data,
   VAR_12->len, VAR_0);
 if (FUNC_2(&VAR_11->pdev->dev, VAR_11->tx_addr))
  return -VAR_2;


 FUNC_5(VAR_7, VAR_6);
 FUNC_5(VAR_11->tx_addr, VAR_3);
 FUNC_5((VAR_12->len) - 1, VAR_9);
 FUNC_6();
 VAR_13 = VAR_4 | VAR_8 | VAR_5;
 FUNC_5(VAR_13, VAR_10);

 return 0;
}
