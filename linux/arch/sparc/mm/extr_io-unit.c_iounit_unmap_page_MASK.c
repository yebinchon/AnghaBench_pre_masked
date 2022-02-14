
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iounit_struct {int lock; int bmap; } ;
struct TYPE_2__ {struct iounit_struct* iommu; } ;
struct device {TYPE_1__ archdata; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef size_t dma_addr_t ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_4, dma_addr_t VAR_5, size_t VAR_6,
  enum dma_data_direction VAR_7, unsigned long VAR_8)
{
 struct iounit_struct *VAR_9 = VAR_4->archdata.iommu;
 unsigned long VAR_10;

 FUNC_2(&VAR_9->lock, VAR_10);
 VAR_6 = ((VAR_5 & ~VAR_1) + VAR_6 + (VAR_3-1)) >> VAR_2;
 VAR_5 = (VAR_5 - VAR_0) >> VAR_2;
 FUNC_0(("iounit_release %08lx-%08lx\n", (long)VAR_5, (long)VAR_6+VAR_5));
 for (VAR_6 += VAR_5; VAR_5 < VAR_6; VAR_5++)
  FUNC_1(VAR_5, VAR_9->bmap);
 FUNC_3(&VAR_9->lock, VAR_10);
}
