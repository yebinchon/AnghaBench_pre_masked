
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ewah_bitmap {int dummy; } ;
struct commit {int dummy; } ;
struct TYPE_4__ {scalar_t__ flags; struct ewah_bitmap* bitmap; struct commit* commit; } ;
struct TYPE_3__ {int selected_nr; int selected_alloc; TYPE_2__* selected; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct commit *VAR_1, struct ewah_bitmap *VAR_2)
{
 if (VAR_0.selected_nr >= VAR_0.selected_alloc) {
  VAR_0.selected_alloc = (VAR_0.selected_alloc + 32) * 2;
  FUNC_0(VAR_0.selected, VAR_0.selected_alloc);
 }

 VAR_0.selected[VAR_0.selected_nr].commit = VAR_1;
 VAR_0.selected[VAR_0.selected_nr].bitmap = VAR_2;
 VAR_0.selected[VAR_0.selected_nr].flags = 0;

 VAR_0.selected_nr++;
}
