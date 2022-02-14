
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int gmap_asce; int gmap_list; } ;
struct mm_struct {TYPE_1__ context; } ;
struct gmap {unsigned long asce; int list; struct mm_struct* mm; } ;


 int FUNC_0 (int ,unsigned long) ;
 struct gmap* FUNC_1 (unsigned long) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct gmap *FUNC_6(struct mm_struct *VAR_0, unsigned long VAR_1)
{
 struct gmap *VAR_2;
 unsigned long VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->mm = VAR_0;
 FUNC_4(&VAR_0->context.lock);
 FUNC_2(&VAR_2->list, &VAR_0->context.gmap_list);
 if (FUNC_3(&VAR_0->context.gmap_list))
  VAR_3 = VAR_2->asce;
 else
  VAR_3 = -1UL;
 FUNC_0(VAR_0->context.gmap_asce, VAR_3);
 FUNC_5(&VAR_0->context.lock);
 return VAR_2;
}
