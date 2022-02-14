
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_iso_buffer {int page_count; int ** pages; scalar_t__ page_count_mapped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (struct fw_iso_buffer*,int *) ;
 int ** FUNC_2 (int,int,int) ;

int FUNC_3(struct fw_iso_buffer *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_4->page_count = 0;
 VAR_4->page_count_mapped = 0;
 VAR_4->pages = FUNC_2(VAR_5, sizeof(VAR_4->pages[0]),
          VAR_2);
 if (VAR_4->pages == ((void*)0))
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_4->pages[VAR_6] = FUNC_0(VAR_2 | VAR_1 | VAR_3);
  if (VAR_4->pages[VAR_6] == ((void*)0))
   break;
 }
 VAR_4->page_count = VAR_6;
 if (VAR_6 < VAR_5) {
  FUNC_1(VAR_4, ((void*)0));
  return -VAR_0;
 }

 return 0;
}
