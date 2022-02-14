
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct device*,scalar_t__,size_t,int) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (scalar_t__,size_t) ;

__attribute__((used)) static dma_addr_t FUNC_3(struct device *VAR_1, struct page *VAR_2,
  unsigned long VAR_3, size_t VAR_4, enum dma_data_direction VAR_5,
  unsigned long VAR_6)
{
 phys_addr_t VAR_7 = FUNC_1(VAR_2) + VAR_3;

 if (!(VAR_6 & VAR_0))
  FUNC_0(VAR_1, VAR_7, VAR_4, VAR_5);
 return FUNC_2(VAR_7, VAR_4);
}
