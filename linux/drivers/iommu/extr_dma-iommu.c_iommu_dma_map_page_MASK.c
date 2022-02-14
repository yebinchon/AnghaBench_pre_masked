
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct device*,scalar_t__,size_t,int) ;
 int FUNC_1 (struct device*,scalar_t__,size_t,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int,int,unsigned long) ;
 scalar_t__ FUNC_4 (struct page*) ;

__attribute__((used)) static dma_addr_t FUNC_5(struct device *VAR_2, struct page *VAR_3,
  unsigned long VAR_4, size_t VAR_5, enum dma_data_direction VAR_6,
  unsigned long VAR_7)
{
 phys_addr_t VAR_8 = FUNC_4(VAR_3) + VAR_4;
 bool VAR_9 = FUNC_2(VAR_2);
 int VAR_10 = FUNC_3(VAR_6, VAR_9, VAR_7);
 dma_addr_t VAR_11;

 VAR_11 =FUNC_0(VAR_2, VAR_8, VAR_5, VAR_10);
 if (!VAR_9 && !(VAR_7 & VAR_0) &&
     VAR_11 != VAR_1)
  FUNC_1(VAR_2, VAR_8, VAR_5, VAR_6);
 return VAR_11;
}
