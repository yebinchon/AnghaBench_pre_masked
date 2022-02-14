
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_6__ {int wr_id; } ;
struct ipoib_dev_priv {TYPE_2__* rx_ring; TYPE_3__ rx_wr; int qp; TYPE_1__* rx_sge; } ;
struct TYPE_5__ {int * skb; int * mapping; } ;
struct TYPE_4__ {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_3__*,int *) ;
 struct ipoib_dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ipoib_dev_priv*,int *) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*,int,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, int VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 VAR_3->rx_wr.wr_id = VAR_2 | VAR_0;
 VAR_3->rx_sge[0].addr = VAR_3->rx_ring[VAR_2].mapping[0];
 VAR_3->rx_sge[1].addr = VAR_3->rx_ring[VAR_2].mapping[1];


 VAR_4 = FUNC_1(VAR_3->qp, &VAR_3->rx_wr, ((void*)0));
 if (FUNC_5(VAR_4)) {
  FUNC_4(VAR_3, "receive failed for buf %d (%d)\n", VAR_2, VAR_4);
  FUNC_3(VAR_3, VAR_3->rx_ring[VAR_2].mapping);
  FUNC_0(VAR_3->rx_ring[VAR_2].skb);
  VAR_3->rx_ring[VAR_2].skb = ((void*)0);
 }

 return VAR_4;
}
