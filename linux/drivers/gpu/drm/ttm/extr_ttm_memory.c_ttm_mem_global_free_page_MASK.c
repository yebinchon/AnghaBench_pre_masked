
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ttm_mem_zone {int dummy; } ;
struct ttm_mem_global {struct ttm_mem_zone* zone_kernel; scalar_t__ zone_dma32; struct ttm_mem_zone* zone_highmem; } ;
struct page {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct ttm_mem_global*,struct ttm_mem_zone*,int ) ;

void FUNC_3(struct ttm_mem_global *VAR_0, struct page *VAR_1,
         uint64_t VAR_2)
{
 struct ttm_mem_zone *VAR_3 = ((void*)0);





 if (VAR_0->zone_dma32 && FUNC_1(VAR_1) > 0x00100000UL)
  VAR_3 = VAR_0->zone_kernel;

 FUNC_2(VAR_0, VAR_3, VAR_2);
}
