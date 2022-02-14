
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ps3_dma_region {int dummy; } ;
typedef int dma_addr_t ;


 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (struct ps3_dma_region*,int ) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ps3_dma_region *VAR_0,
 unsigned long VAR_1, unsigned long VAR_2, dma_addr_t *VAR_3,
 u64 VAR_4)
{
 unsigned long VAR_5 = FUNC_2(VAR_1) ? FUNC_0(VAR_1)
  : VAR_1;
 *VAR_3 = FUNC_1(VAR_0, FUNC_3(VAR_5));
 return 0;
}
