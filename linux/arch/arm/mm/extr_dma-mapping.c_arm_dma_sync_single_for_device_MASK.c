
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*,unsigned int,size_t,int) ;
 int FUNC_1 (struct device*,int) ;
 struct page* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1,
  dma_addr_t VAR_2, size_t VAR_3, enum dma_data_direction VAR_4)
{
 unsigned int VAR_5 = VAR_2 & (VAR_0 - 1);
 struct page *VAR_6 = FUNC_2(FUNC_1(VAR_1, VAR_2-VAR_5));
 FUNC_0(VAR_6, VAR_5, VAR_3, VAR_4);
}
