
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ dma_pfn_offset; } ;
typedef unsigned long dma_addr_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (unsigned long) ;

void FUNC_5(struct device *VAR_1, size_t VAR_2, void *VAR_3,
  dma_addr_t VAR_4, unsigned long VAR_5)
{
 int VAR_6 = FUNC_2(VAR_2);
 unsigned long VAR_7 = (VAR_4 >> VAR_0);
 int VAR_8;

 if (!FUNC_0(!VAR_1))
  VAR_7 += VAR_1->dma_pfn_offset;

 for (VAR_8 = 0; VAR_8 < (1 << VAR_6); VAR_8++)
  FUNC_1(FUNC_4(VAR_7 + VAR_8), 0);

 FUNC_3(VAR_3);
}
