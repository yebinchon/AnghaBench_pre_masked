
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned long pages; struct bitmap_page* bp; } ;
struct bitmap_page {scalar_t__ cluster_slot; struct bitmap_page* map; int hijacked; TYPE_1__ counts; int storage; int pending_writes; int write_wait; TYPE_2__* mddev; scalar_t__ sysfs_can_clear; } ;
struct bitmap {scalar_t__ cluster_slot; struct bitmap* map; int hijacked; TYPE_1__ counts; int storage; int pending_writes; int write_wait; TYPE_2__* mddev; scalar_t__ sysfs_can_clear; } ;
struct TYPE_8__ {scalar_t__ (* slot_number ) (TYPE_2__*) ;} ;
struct TYPE_7__ {scalar_t__ cluster_info; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bitmap_page*) ;
 int FUNC_2 (int *) ;
 TYPE_5__* VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int) ;

void FUNC_8(struct bitmap *VAR_1)
{
 unsigned long VAR_2, VAR_3;
 struct bitmap_page *VAR_4;

 if (!VAR_1)
  return;

 if (VAR_1->sysfs_can_clear)
  FUNC_6(VAR_1->sysfs_can_clear);

 if (FUNC_4(VAR_1->mddev) && VAR_1->mddev->cluster_info &&
  VAR_1->cluster_slot == VAR_0->slot_number(VAR_1->mddev))
  FUNC_3(VAR_1->mddev);


 FUNC_7(VAR_1->write_wait,
     FUNC_0(&VAR_1->pending_writes) == 0);


 FUNC_2(&VAR_1->storage);

 VAR_4 = VAR_1->counts.bp;
 VAR_3 = VAR_1->counts.pages;



 if (VAR_4)
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
   if (VAR_4[VAR_2].map && !VAR_4[VAR_2].hijacked)
    FUNC_1(VAR_4[VAR_2].map);
 FUNC_1(VAR_4);
 FUNC_1(VAR_1);
}
