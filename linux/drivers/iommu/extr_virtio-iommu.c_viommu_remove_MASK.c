
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_device {int dev; TYPE_1__* config; struct viommu_dev* priv; } ;
struct viommu_dev {int iommu; } ;
struct TYPE_2__ {int (* del_vqs ) (struct virtio_device*) ;int (* reset ) (struct virtio_device*) ;} ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct virtio_device*) ;
 int FUNC_4 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_5(struct virtio_device *VAR_0)
{
 struct viommu_dev *VAR_1 = VAR_0->priv;

 FUNC_1(&VAR_1->iommu);
 FUNC_2(&VAR_1->iommu);


 VAR_0->config->reset(VAR_0);
 VAR_0->config->del_vqs(VAR_0);

 FUNC_0(&VAR_0->dev, "device removed\n");
}
