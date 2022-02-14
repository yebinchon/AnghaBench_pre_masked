
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_driver {int (* probe ) (struct vio_dev*,struct vio_device_id const*) ;int no_irq; int id_table; } ;
struct vio_device_id {int dummy; } ;
struct vio_dev {scalar_t__ tx_irq; unsigned long tx_ino; scalar_t__ rx_irq; unsigned long rx_ino; int cdev_handle; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int FUNC_0 (struct vio_dev*,struct vio_device_id const*) ;
 void* FUNC_1 (int ,unsigned long) ;
 struct vio_dev* FUNC_2 (struct device*) ;
 struct vio_driver* FUNC_3 (int ) ;
 struct vio_device_id* FUNC_4 (int ,struct vio_dev*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1)
{
 struct vio_dev *VAR_2 = FUNC_2(VAR_1);
 struct vio_driver *VAR_3 = FUNC_3(VAR_1->driver);
 const struct vio_device_id *VAR_4;

 if (!VAR_3->probe)
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_3->id_table, VAR_2);
 if (!VAR_4)
  return -VAR_0;


 if (!VAR_3->no_irq) {
  if (VAR_2->tx_irq == 0 && VAR_2->tx_ino != ~0UL)
   VAR_2->tx_irq = FUNC_1(VAR_2->cdev_handle,
       VAR_2->tx_ino);

  if (VAR_2->rx_irq == 0 && VAR_2->rx_ino != ~0UL)
   VAR_2->rx_irq = FUNC_1(VAR_2->cdev_handle,
       VAR_2->rx_ino);
 }

 return VAR_3->probe(VAR_2, VAR_4);
}
