
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef unsigned long phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef unsigned long dma_addr_t ;


 unsigned long FUNC_0 (struct device*,unsigned long,size_t,int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct device*,unsigned long,size_t) ;
 unsigned long FUNC_3 (struct page*) ;

__attribute__((used)) static dma_addr_t FUNC_4(struct device *VAR_0, struct page *VAR_1,
    unsigned long VAR_2, size_t VAR_3,
    enum dma_data_direction VAR_4,
    unsigned long VAR_5)
{
 unsigned long VAR_6;
 phys_addr_t VAR_7 = FUNC_3(VAR_1) + VAR_2;

 if (!FUNC_2(VAR_0, VAR_7, VAR_3))
  return VAR_7;

 VAR_6 = FUNC_0(VAR_0, VAR_7, VAR_3, VAR_4, 0);
 FUNC_1();

 return VAR_6;
}
