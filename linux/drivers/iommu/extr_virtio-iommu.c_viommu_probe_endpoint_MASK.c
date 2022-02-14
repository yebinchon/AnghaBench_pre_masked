
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct virtio_iommu_req_tail {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct virtio_iommu_req_probe {scalar_t__ properties; int endpoint; TYPE_1__ head; } ;
struct virtio_iommu_probe_property {int type; int length; } ;
struct viommu_endpoint {int dummy; } ;
struct viommu_dev {int probe_size; } ;
struct iommu_fwspec {int * ids; int num_ids; struct viommu_endpoint* iommu_priv; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct iommu_fwspec* FUNC_2 (struct device*) ;
 int FUNC_3 (struct virtio_iommu_req_probe*) ;
 struct virtio_iommu_req_probe* FUNC_4 (size_t,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct viommu_endpoint*,void*,int) ;
 int FUNC_7 (struct viommu_dev*,struct virtio_iommu_req_probe*,size_t) ;

__attribute__((used)) static int FUNC_8(struct viommu_dev *VAR_6, struct device *VAR_7)
{
 int VAR_8;
 u16 VAR_9, VAR_10;
 size_t VAR_11 = 0;
 size_t VAR_12;
 struct virtio_iommu_req_probe *VAR_13;
 struct virtio_iommu_probe_property *VAR_14;
 struct iommu_fwspec *VAR_15 = FUNC_2(VAR_7);
 struct viommu_endpoint *VAR_16 = VAR_15->iommu_priv;

 if (!VAR_15->num_ids)
  return -VAR_0;

 VAR_12 = sizeof(*VAR_13) + VAR_6->probe_size +
      sizeof(struct virtio_iommu_req_tail);
 VAR_13 = FUNC_4(VAR_12, VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->head.type = VAR_5;




 VAR_13->endpoint = FUNC_0(VAR_15->ids[0]);

 VAR_8 = FUNC_7(VAR_6, VAR_13, VAR_12);
 if (VAR_8)
  goto out_free;

 VAR_14 = (void *)VAR_13->properties;
 VAR_9 = FUNC_5(VAR_14->type) & VAR_3;

 while (VAR_9 != VAR_4 &&
        VAR_11 < VAR_6->probe_size) {
  VAR_10 = FUNC_5(VAR_14->length) + sizeof(*VAR_14);

  switch (VAR_9) {
  case 128:
   VAR_8 = FUNC_6(VAR_16, (void *)VAR_14, VAR_10);
   break;
  default:
   FUNC_1(VAR_7, "unknown viommu prop 0x%x\n", VAR_9);
  }

  if (VAR_8)
   FUNC_1(VAR_7, "failed to parse viommu prop 0x%x\n", VAR_9);

  VAR_11 += VAR_10;
  if (VAR_11 >= VAR_6->probe_size)
   break;

  VAR_14 = (void *)VAR_13->properties + VAR_11;
  VAR_9 = FUNC_5(VAR_14->type) & VAR_3;
 }

out_free:
 FUNC_3(VAR_13);
 return VAR_8;
}
