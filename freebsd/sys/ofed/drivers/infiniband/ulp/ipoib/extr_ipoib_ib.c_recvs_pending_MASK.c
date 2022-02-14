
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipoib_dev_priv {TYPE_1__* rx_ring; } ;
struct TYPE_2__ {scalar_t__ mb; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ipoib_dev_priv *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
  if (VAR_1->rx_ring[VAR_3].mb)
   ++VAR_2;

 return VAR_2;
}
