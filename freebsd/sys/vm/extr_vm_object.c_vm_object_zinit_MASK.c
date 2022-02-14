
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
struct TYPE_3__ {int flags; scalar_t__ shadow_count; scalar_t__ resident_page_count; int busy; int paging_in_progress; int ref_count; int rtree; int type; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(void *VAR_7, int VAR_8, int VAR_9)
{
 vm_object_t VAR_10;

 VAR_10 = (vm_object_t)VAR_7;
 FUNC_4(&VAR_10->lock, "vm object", VAR_2 | VAR_3);


 VAR_10->type = VAR_0;
 FUNC_5(&VAR_10->rtree);
 FUNC_3(&VAR_10->ref_count, 0);
 FUNC_3(&VAR_10->paging_in_progress, 0);
 FUNC_3(&VAR_10->busy, 0);
 VAR_10->resident_page_count = 0;
 VAR_10->shadow_count = 0;
 VAR_10->flags = VAR_1;

 FUNC_1(&VAR_6);
 FUNC_0(&VAR_5, VAR_10, VAR_4);
 FUNC_2(&VAR_6);
 return (0);
}
