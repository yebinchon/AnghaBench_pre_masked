
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ act_entry; int act_page; scalar_t__ act_area; TYPE_2__* debug_info_snap; } ;
typedef TYPE_1__ file_private_info_t ;
struct TYPE_5__ {scalar_t__ entry_size; int pages_per_area; scalar_t__ nr_areas; int areas; } ;
typedef TYPE_2__ debug_info_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(file_private_info_t *VAR_2)
{
 debug_info_t *VAR_3;

 VAR_3 = VAR_2->debug_info_snap;
 if (VAR_2->act_entry == VAR_0) {
  VAR_2->act_entry = 0;
  VAR_2->act_page = 0;
  goto out;
 }
 if (!VAR_3->areas)
  return 1;
 VAR_2->act_entry += VAR_3->entry_size;

 if (VAR_2->act_entry > (VAR_1 - VAR_3->entry_size)) {

  VAR_2->act_entry = 0;
  VAR_2->act_page += 1;
  if ((VAR_2->act_page % VAR_3->pages_per_area) == 0) {

   VAR_2->act_area++;
   VAR_2->act_page = 0;
  }
  if (VAR_2->act_area >= VAR_3->nr_areas)
   return 1;
 }
out:
 return 0;
}
