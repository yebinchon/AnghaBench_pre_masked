
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct virtio_iommu_probe_resv_mem {int subtype; int end; int start; } ;
struct viommu_endpoint {int resv_regions; int dev; } ;
struct iommu_resv_region {int list; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;


 int FUNC_0 (int ,char*,int) ;
 struct iommu_resv_region* FUNC_1 (int,size_t,unsigned long,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct viommu_endpoint *VAR_8,
          struct virtio_iommu_probe_resv_mem *VAR_9,
          size_t VAR_10)
{
 size_t VAR_11;
 u64 VAR_12, VAR_13;
 phys_addr_t VAR_14, VAR_15;
 struct iommu_resv_region *VAR_16 = ((void*)0);
 unsigned long VAR_17 = VAR_7 | VAR_4 | VAR_3;

 VAR_14 = VAR_12 = FUNC_2(VAR_9->start);
 VAR_15 = VAR_13 = FUNC_2(VAR_9->end);
 VAR_11 = VAR_13 - VAR_12 + 1;


 if (VAR_14 != VAR_12 || VAR_15 != VAR_13 || VAR_11 < VAR_13 - VAR_12)
  return -VAR_2;

 if (VAR_10 < sizeof(*VAR_9))
  return -VAR_0;

 switch (VAR_9->subtype) {
 default:
  FUNC_0(VAR_8->dev, "unknown resv mem subtype 0x%x\n",
    VAR_9->subtype);

 case 128:
  VAR_16 = FUNC_1(VAR_14, VAR_11, 0,
       VAR_6);
  break;
 case 129:
  VAR_16 = FUNC_1(VAR_14, VAR_11, VAR_17,
       VAR_5);
  break;
 }
 if (!VAR_16)
  return -VAR_1;

 FUNC_3(&VAR_8->resv_regions, &VAR_16->list);
 return 0;
}
