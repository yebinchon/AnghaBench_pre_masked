
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ipoib_dev_priv {scalar_t__ max_ib_mtu; int * rx_ring; } ;


 scalar_t__ VAR_0 ;
 struct mbuf* FUNC_0 (struct ipoib_dev_priv*,int *,scalar_t__) ;

__attribute__((used)) static struct mbuf *
FUNC_1(struct ipoib_dev_priv *VAR_1, int VAR_2)
{

 return FUNC_0(VAR_1, &VAR_1->rx_ring[VAR_2],
     VAR_1->max_ib_mtu + VAR_0);
}
