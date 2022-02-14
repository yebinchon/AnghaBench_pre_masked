
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct fe_priv {int flags; TYPE_2__* soc; int rx_napi; TYPE_1__* phy; int page_lock; } ;
struct TYPE_4__ {int pdma_glo_cfg; int tx_int; int rx_int; scalar_t__ (* has_carrier ) (struct fe_priv*) ;} ;
struct TYPE_3__ {int (* start ) (struct fe_priv*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fe_priv*) ;
 int FUNC_1 (struct fe_priv*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct fe_priv*) ;
 int FUNC_5 (int *) ;
 struct fe_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct fe_priv*) ;
 scalar_t__ FUNC_12 (struct fe_priv*) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_6)
{
 struct fe_priv *VAR_7 = FUNC_6(VAR_6);
 unsigned long VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_7);
 if (VAR_10) {
  FUNC_0(VAR_7);
  return VAR_10;
 }

 FUNC_9(&VAR_7->page_lock, VAR_8);

 VAR_9 = VAR_5 | VAR_3 | VAR_4;
 if (VAR_7->flags & VAR_0)
  VAR_9 |= VAR_2;
 VAR_9 |= VAR_7->soc->pdma_glo_cfg;
 FUNC_3(VAR_9, VAR_1);

 FUNC_10(&VAR_7->page_lock, VAR_8);

 if (VAR_7->phy)
  VAR_7->phy->start(VAR_7);

 if (VAR_7->soc->has_carrier && VAR_7->soc->has_carrier(VAR_7))
  FUNC_7(VAR_6);

 FUNC_5(&VAR_7->rx_napi);
 FUNC_2(VAR_7->soc->tx_int | VAR_7->soc->rx_int);
 FUNC_8(VAR_6);




 return 0;
}
