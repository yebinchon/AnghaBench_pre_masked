
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct eth_device {scalar_t__ priv; } ;
struct TYPE_5__ {int descs_dma; } ;
struct TYPE_4__ {int descs_dma; } ;
struct ag71xx {int link; int duplex; TYPE_3__* dev; int speed; scalar_t__ phyfixed; TYPE_2__ rx_ring; TYPE_1__ tx_ring; } ;
typedef int bd_t ;
struct TYPE_6__ {int name; int enetaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ag71xx*) ;
 scalar_t__ FUNC_2 (struct ag71xx*) ;
 int FUNC_3 (struct ag71xx*,int ) ;
 int FUNC_4 (struct ag71xx*) ;
 int FUNC_5 (struct ag71xx*) ;
 int FUNC_6 (struct ag71xx*) ;
 int FUNC_7 (struct ag71xx*,int ) ;
 int FUNC_8 (struct ag71xx*,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct eth_device *VAR_5, bd_t * VAR_6)
{
 struct ag71xx *VAR_7 = (struct ag71xx *) VAR_5->priv;

 FUNC_1(VAR_7);

    FUNC_5(VAR_7);
 FUNC_6(VAR_7);

 FUNC_8(VAR_7, VAR_2,
    (u32) FUNC_9(VAR_7->tx_ring.descs_dma));
 FUNC_8(VAR_7, VAR_1,
    (u32) FUNC_9(VAR_7->rx_ring.descs_dma));

 FUNC_3(VAR_7, VAR_7->dev->enetaddr);

    if (VAR_7->phyfixed) {
        VAR_7->link = 1;
        VAR_7->duplex = 1;
        VAR_7->speed = VAR_4;
    } else {






  return -1;


    }
    FUNC_4(VAR_7);

 FUNC_0("%s: txdesc reg: %#08x rxdesc reg: %#08x\n",
  VAR_7->dev->name,
  FUNC_7(VAR_7, VAR_2),
  FUNC_7(VAR_7, VAR_1));


 FUNC_8(VAR_7, VAR_0, VAR_3);

 return 0;
}
