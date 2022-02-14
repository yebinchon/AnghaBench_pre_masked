
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_iso_buffer {size_t page_count; int * pages; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ dma_addr_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

size_t FUNC_1(struct fw_iso_buffer *VAR_2, dma_addr_t VAR_3)
{
 size_t VAR_4;
 dma_addr_t VAR_5;
 ssize_t VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_2->page_count; VAR_4++) {
  VAR_5 = FUNC_0(VAR_2->pages[VAR_4]);
  VAR_6 = (ssize_t)VAR_3 - (ssize_t)VAR_5;
  if (VAR_6 > 0 && VAR_6 <= VAR_1)
   return (VAR_4 << VAR_0) + VAR_6;
 }

 return 0;
}
