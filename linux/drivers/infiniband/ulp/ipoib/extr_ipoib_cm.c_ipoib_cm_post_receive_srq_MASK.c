
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_8__ {int wr_id; } ;
struct TYPE_7__ {int num_frags; TYPE_2__* srq_ring; TYPE_4__ rx_wr; int srq; TYPE_1__* rx_sge; } ;
struct ipoib_dev_priv {TYPE_3__ cm; } ;
struct TYPE_6__ {int * skb; int * mapping; } ;
struct TYPE_5__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_4__*,int *) ;
 int FUNC_2 (struct ipoib_dev_priv*,int,int *) ;
 struct ipoib_dev_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*,int,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, int VAR_3)
{
 struct ipoib_dev_priv *VAR_4 = FUNC_3(VAR_2);
 int VAR_5, VAR_6;

 VAR_4->cm.rx_wr.wr_id = VAR_3 | VAR_0 | VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_4->cm.num_frags; ++VAR_5)
  VAR_4->cm.rx_sge[VAR_5].addr = VAR_4->cm.srq_ring[VAR_3].mapping[VAR_5];

 VAR_6 = FUNC_1(VAR_4->cm.srq, &VAR_4->cm.rx_wr, ((void*)0));
 if (FUNC_5(VAR_6)) {
  FUNC_4(VAR_4, "post srq failed for buf %d (%d)\n", VAR_3, VAR_6);
  FUNC_2(VAR_4, VAR_4->cm.num_frags - 1,
          VAR_4->cm.srq_ring[VAR_3].mapping);
  FUNC_0(VAR_4->cm.srq_ring[VAR_3].skb);
  VAR_4->cm.srq_ring[VAR_3].skb = ((void*)0);
 }

 return VAR_6;
}
