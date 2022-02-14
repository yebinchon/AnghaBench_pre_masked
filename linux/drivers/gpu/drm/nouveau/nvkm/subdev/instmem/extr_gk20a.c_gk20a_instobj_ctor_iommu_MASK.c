
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct page {int dummy; } ;
struct nvkm_subdev {TYPE_2__* device; } ;
struct nvkm_mm_node {int offset; } ;
struct TYPE_6__ {int * ptrs; } ;
struct gk20a_instobj {struct nvkm_mm_node* mn; TYPE_3__ memory; } ;
struct gk20a_instobj_iommu {struct page** pages; scalar_t__* dma_addrs; struct gk20a_instobj base; } ;
struct TYPE_4__ {struct nvkm_subdev subdev; } ;
struct gk20a_instmem {int iommu_pgshift; int mm_mutex; int mm; scalar_t__ iommu_bit; int domain; TYPE_1__ base; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_5__ {struct device* dev; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct device*,struct page*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct device*,scalar_t__) ;
 int FUNC_5 (struct device*,scalar_t__,scalar_t__,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int,scalar_t__,scalar_t__,int) ;
 int FUNC_7 (int ,int,scalar_t__) ;
 struct gk20a_instobj_iommu* FUNC_8 (int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct nvkm_subdev*,char*,...) ;
 int FUNC_12 (int *,TYPE_3__*) ;
 int FUNC_13 (int ,struct nvkm_mm_node**) ;
 int FUNC_14 (int ,int ,int,int,int,int,struct nvkm_mm_node**) ;

__attribute__((used)) static int
FUNC_15(struct gk20a_instmem *VAR_8, u32 VAR_9, u32 VAR_10,
    struct gk20a_instobj **VAR_11)
{
 struct gk20a_instobj_iommu *VAR_12;
 struct nvkm_subdev *VAR_13 = &VAR_8->base.subdev;
 struct device *VAR_14 = VAR_13->device->dev;
 struct nvkm_mm_node *VAR_15;
 int VAR_16;
 int VAR_17;





 if (!(VAR_12 = FUNC_8(sizeof(*VAR_12) + ((sizeof(VAR_12->pages[0]) +
        sizeof(*VAR_12->dma_addrs)) * VAR_9), VAR_2)))
  return -VAR_1;
 *VAR_11 = &VAR_12->base;
 VAR_12->dma_addrs = (void *)(VAR_12->pages + VAR_9);

 FUNC_12(&VAR_6, &VAR_12->base.memory);
 VAR_12->base.memory.ptrs = &VAR_7;


 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
  struct page *VAR_18 = FUNC_2(VAR_2);
  dma_addr_t VAR_19;

  if (VAR_18 == ((void*)0)) {
   VAR_16 = -VAR_1;
   goto free_pages;
  }
  VAR_12->pages[VAR_17] = VAR_18;
  VAR_19 = FUNC_3(VAR_14, VAR_18, 0, VAR_5, VAR_0);
  if (FUNC_4(VAR_14, VAR_19)) {
   FUNC_11(VAR_13, "DMA mapping error!\n");
   VAR_16 = -VAR_1;
   goto free_pages;
  }
  VAR_12->dma_addrs[VAR_17] = VAR_19;
 }

 FUNC_9(VAR_8->mm_mutex);

 VAR_16 = FUNC_14(VAR_8->mm, 0, 1, VAR_9, VAR_9,
      VAR_10 >> VAR_8->iommu_pgshift, &VAR_15);
 FUNC_10(VAR_8->mm_mutex);
 if (VAR_16) {
  FUNC_11(VAR_13, "IOMMU space is full!\n");
  goto free_pages;
 }


 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
  u32 VAR_20 = (VAR_15->offset + VAR_17) << VAR_8->iommu_pgshift;

  VAR_16 = FUNC_6(VAR_8->domain, VAR_20, VAR_12->dma_addrs[VAR_17],
    VAR_5, VAR_3 | VAR_4);
  if (VAR_16 < 0) {
   FUNC_11(VAR_13, "IOMMU mapping failure: %d\n", VAR_16);

   while (VAR_17-- > 0) {
    VAR_20 -= VAR_5;
    FUNC_7(VAR_8->domain, VAR_20, VAR_5);
   }
   goto release_area;
  }
 }


 VAR_15->offset |= FUNC_0(VAR_8->iommu_bit - VAR_8->iommu_pgshift);

 VAR_12->base.mn = VAR_15;
 return 0;

release_area:
 FUNC_9(VAR_8->mm_mutex);
 FUNC_13(VAR_8->mm, &VAR_15);
 FUNC_10(VAR_8->mm_mutex);

free_pages:
 for (VAR_17 = 0; VAR_17 < VAR_9 && VAR_12->pages[VAR_17] != ((void*)0); VAR_17++) {
  dma_addr_t VAR_21 = VAR_12->dma_addrs[VAR_17];
  if (VAR_21)
   FUNC_5(VAR_14, VAR_21, VAR_5,
           VAR_0);
  FUNC_1(VAR_12->pages[VAR_17]);
 }

 return VAR_16;
}
