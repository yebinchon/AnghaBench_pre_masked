
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_iommu_req_tail {int dummy; } ;
struct virtio_iommu_req_head {scalar_t__ type; } ;
struct viommu_dev {size_t probe_size; } ;
typedef size_t off_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static off_t FUNC_0(struct viommu_dev *VAR_1,
       struct virtio_iommu_req_head *VAR_2,
       size_t VAR_3)
{
 size_t VAR_4 = sizeof(struct virtio_iommu_req_tail);

 if (VAR_2->type == VAR_0)
  return VAR_3 - VAR_1->probe_size - VAR_4;

 return VAR_3 - VAR_4;
}
