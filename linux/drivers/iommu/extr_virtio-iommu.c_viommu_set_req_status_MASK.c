
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_iommu_req_tail {int status; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, size_t VAR_1, int VAR_2)
{
 struct virtio_iommu_req_tail *VAR_3 = VAR_0 + VAR_1 - sizeof(*VAR_3);

 VAR_3->status = VAR_2;
}
