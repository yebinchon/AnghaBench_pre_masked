
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_driver_state {struct ldc_channel* lp; int name; TYPE_1__* vdev; } ;
struct ldc_channel_config {int rx_irq; int tx_irq; } ;
struct ldc_channel {int dummy; } ;
struct TYPE_2__ {int channel_id; int rx_irq; int tx_irq; } ;


 scalar_t__ FUNC_0 (struct ldc_channel*) ;
 int FUNC_1 (struct ldc_channel*) ;
 struct ldc_channel* FUNC_2 (int ,struct ldc_channel_config*,void*,int ) ;

int FUNC_3(struct vio_driver_state *VAR_0,
    struct ldc_channel_config *VAR_1,
    void *VAR_2)
{
 struct ldc_channel_config VAR_3 = *VAR_1;
 struct ldc_channel *VAR_4;

 VAR_3.tx_irq = VAR_0->vdev->tx_irq;
 VAR_3.rx_irq = VAR_0->vdev->rx_irq;

 VAR_4 = FUNC_2(VAR_0->vdev->channel_id, &VAR_3, VAR_2, VAR_0->name);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_0->lp = VAR_4;

 return 0;
}
