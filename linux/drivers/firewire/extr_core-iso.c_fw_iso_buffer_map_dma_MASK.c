
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_iso_buffer {int direction; int page_count; int page_count_mapped; int * pages; } ;
struct fw_card {int device; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct fw_iso_buffer *VAR_2, struct fw_card *VAR_3,
     enum dma_data_direction VAR_4)
{
 dma_addr_t VAR_5;
 int VAR_6;

 VAR_2->direction = VAR_4;

 for (VAR_6 = 0; VAR_6 < VAR_2->page_count; VAR_6++) {
  VAR_5 = FUNC_0(VAR_3->device, VAR_2->pages[VAR_6],
           0, VAR_1, VAR_4);
  if (FUNC_1(VAR_3->device, VAR_5))
   break;

  FUNC_2(VAR_2->pages[VAR_6], VAR_5);
 }
 VAR_2->page_count_mapped = VAR_6;
 if (VAR_6 < VAR_2->page_count)
  return -VAR_0;

 return 0;
}
