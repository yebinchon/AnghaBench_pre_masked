
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct iounit_struct {int lock; } ;
struct TYPE_2__ {struct iounit_struct* iommu; } ;
struct device {TYPE_1__ archdata; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef unsigned long dma_addr_t ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct iounit_struct*,unsigned long,size_t) ;
 void* FUNC_1 (struct page*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static dma_addr_t FUNC_4(struct device *VAR_1, struct page *VAR_2,
  unsigned long VAR_3, size_t VAR_4, enum dma_data_direction VAR_5,
  unsigned long VAR_6)
{
 void *VAR_7 = FUNC_1(VAR_2) + VAR_3;
 struct iounit_struct *VAR_8 = VAR_1->archdata.iommu;
 unsigned long VAR_9, VAR_10;


 if (!VAR_4 || VAR_4 > 256 * 1024)
  return VAR_0;

 FUNC_2(&VAR_8->lock, VAR_10);
 VAR_9 = FUNC_0(VAR_8, (unsigned long)VAR_7, VAR_4);
 FUNC_3(&VAR_8->lock, VAR_10);
 return VAR_9;
}
