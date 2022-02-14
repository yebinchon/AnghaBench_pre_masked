
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dev_addr; int mtu; } ;
struct ag71xx_platform_data {int reset_bit; } ;
struct TYPE_2__ {int descs_dma; scalar_t__ dirty; scalar_t__ curr; } ;
struct ag71xx {TYPE_1__ tx_ring; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ag71xx*) ;
 struct ag71xx_platform_data* FUNC_1 (struct ag71xx*) ;
 int FUNC_2 (struct ag71xx*,int ) ;
 int FUNC_3 (struct ag71xx*) ;
 int FUNC_4 (struct ag71xx*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ag71xx*,int ) ;
 int FUNC_7 (struct ag71xx*,int) ;
 int FUNC_8 (struct ag71xx*,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;

__attribute__((used)) static void FUNC_14(struct ag71xx *VAR_6)
{
 struct ag71xx_platform_data *VAR_7 = FUNC_1(VAR_6);
 struct net_device *VAR_8 = VAR_6->dev;
 u32 VAR_9 = VAR_7->reset_bit;
 u32 VAR_10;
 u32 VAR_11;

 VAR_9 &= VAR_4 | VAR_5;

 FUNC_4(VAR_6);
 FUNC_13();

 VAR_11 = FUNC_6(VAR_6, VAR_1);
 VAR_10 = FUNC_6(VAR_6, VAR_2);

 FUNC_7(VAR_6, 1);

 FUNC_10(VAR_9);
 FUNC_12(10);
 FUNC_9(VAR_9);
 FUNC_12(10);

 FUNC_0(VAR_6);
 FUNC_3(VAR_6);
 VAR_6->tx_ring.curr = 0;
 VAR_6->tx_ring.dirty = 0;
 FUNC_11(VAR_6->dev);


 FUNC_8(VAR_6, VAR_0,
    FUNC_5(VAR_6->dev->mtu));

 FUNC_8(VAR_6, VAR_2, VAR_10);
 FUNC_8(VAR_6, VAR_3, VAR_6->tx_ring.descs_dma);
 FUNC_8(VAR_6, VAR_1, VAR_11);

 FUNC_2(VAR_6, VAR_8->dev_addr);
}
