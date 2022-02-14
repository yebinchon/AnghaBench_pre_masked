
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct push_buffer {int size; int fence; unsigned long alloc_size; int phys; int * mapped; int dma; scalar_t__ pos; } ;
struct iova {int dummy; } ;
struct host1x_cdma {int dummy; } ;
struct host1x {unsigned long iova_end; int dev; int iova; scalar_t__ domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct iova*) ;
 struct iova* FUNC_1 (int *,unsigned long,unsigned long,int) ;
 struct host1x* FUNC_2 (struct host1x_cdma*) ;
 void* FUNC_3 (int ,unsigned long,int *,int ) ;
 int FUNC_4 (int ,unsigned long,int *,int ) ;
 int FUNC_5 (struct host1x*,struct push_buffer*) ;
 int FUNC_6 (scalar_t__,int ,int ,unsigned long,int ) ;
 unsigned long FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,struct iova*) ;
 unsigned long FUNC_9 (int *) ;
 struct host1x_cdma* FUNC_10 (struct push_buffer*) ;

__attribute__((used)) static int FUNC_11(struct push_buffer *VAR_4)
{
 struct host1x_cdma *VAR_5 = FUNC_10(VAR_4);
 struct host1x *VAR_6 = FUNC_2(VAR_5);
 struct iova *VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_4->mapped = ((void*)0);
 VAR_4->phys = 0;
 VAR_4->size = VAR_2 * 8;

 VAR_8 = VAR_4->size + 4;


 VAR_4->fence = VAR_4->size - 8;
 VAR_4->pos = 0;

 if (VAR_6->domain) {
  unsigned long VAR_10;

  VAR_8 = FUNC_7(&VAR_6->iova, VAR_8);

  VAR_4->mapped = FUNC_3(VAR_6->dev, VAR_8, &VAR_4->phys,
       VAR_1);
  if (!VAR_4->mapped)
   return -VAR_0;

  VAR_10 = FUNC_9(&VAR_6->iova);
  VAR_7 = FUNC_1(&VAR_6->iova, VAR_8 >> VAR_10,
       VAR_6->iova_end >> VAR_10, 1);
  if (!VAR_7) {
   VAR_9 = -VAR_0;
   goto iommu_free_mem;
  }

  VAR_4->dma = FUNC_8(&VAR_6->iova, VAR_7);
  VAR_9 = FUNC_6(VAR_6->domain, VAR_4->dma, VAR_4->phys, VAR_8,
    VAR_3);
  if (VAR_9)
   goto iommu_free_iova;
 } else {
  VAR_4->mapped = FUNC_3(VAR_6->dev, VAR_8, &VAR_4->phys,
       VAR_1);
  if (!VAR_4->mapped)
   return -VAR_0;

  VAR_4->dma = VAR_4->phys;
 }

 VAR_4->alloc_size = VAR_8;

 FUNC_5(VAR_6, VAR_4);

 return 0;

iommu_free_iova:
 FUNC_0(&VAR_6->iova, VAR_7);
iommu_free_mem:
 FUNC_4(VAR_6->dev, VAR_8, VAR_4->mapped, VAR_4->phys);

 return VAR_9;
}
