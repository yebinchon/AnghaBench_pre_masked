
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_tt {int sg; int * swap_storage; int state; int page_flags; int caching_state; int num_pages; int bdev; } ;
struct ttm_buffer_object {int sg; int num_pages; int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct ttm_tt *VAR_2, struct ttm_buffer_object *VAR_3,
   uint32_t VAR_4)
{
 VAR_2->bdev = VAR_3->bdev;
 VAR_2->num_pages = VAR_3->num_pages;
 VAR_2->caching_state = VAR_0;
 VAR_2->page_flags = VAR_4;
 VAR_2->state = VAR_1;
 VAR_2->swap_storage = ((void*)0);
 VAR_2->sg = VAR_3->sg;
}
