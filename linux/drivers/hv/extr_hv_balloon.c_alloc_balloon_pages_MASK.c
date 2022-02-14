
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union dm_mem_page_range {int dummy; } dm_mem_page_range ;
struct page {int dummy; } ;
struct hv_dynmem_device {int num_pages_ballooned; } ;
struct TYPE_6__ {scalar_t__ size; } ;
struct dm_balloon_response {TYPE_3__ hdr; TYPE_2__* range_array; int range_count; } ;
struct TYPE_4__ {int page_cnt; int start_page; } ;
struct TYPE_5__ {TYPE_1__ finfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,int) ;

__attribute__((used)) static unsigned int FUNC_5(struct hv_dynmem_device *VAR_6,
     unsigned int VAR_7,
     struct dm_balloon_response *VAR_8,
     int VAR_9)
{
 unsigned int VAR_10, VAR_11;
 struct page *VAR_12;

 if (VAR_7 < VAR_9)
  return 0;

 for (VAR_10 = 0; (VAR_10 * VAR_9) < VAR_7; VAR_10++) {
  if (VAR_8->hdr.size + sizeof(union dm_mem_page_range) >
   VAR_2)
   return VAR_10 * VAR_9;





  VAR_12 = FUNC_1(VAR_0 | VAR_4 |
    VAR_3 | VAR_5,
    FUNC_2(VAR_9 << VAR_1));

  if (!VAR_12)
   return VAR_10 * VAR_9;

  VAR_6->num_pages_ballooned += VAR_9;






  if (VAR_9 != 1)
   FUNC_4(VAR_12, FUNC_2(VAR_9 << VAR_1));


  for (VAR_11 = 0; VAR_11 < (1 << FUNC_2(VAR_9 << VAR_1)); VAR_11++)
   FUNC_0(VAR_12 + VAR_11);

  VAR_8->range_count++;
  VAR_8->range_array[VAR_10].finfo.start_page =
   FUNC_3(VAR_12);
  VAR_8->range_array[VAR_10].finfo.page_cnt = VAR_9;
  VAR_8->hdr.size += sizeof(union dm_mem_page_range);

 }

 return VAR_7;
}
