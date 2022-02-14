
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t id; int iommu_group_mem_list; } ;
struct mm_struct {TYPE_2__ context; } ;
struct TYPE_3__ {scalar_t__ prtb0; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct mm_struct*) ;

void FUNC_5(struct mm_struct *VAR_2)
{
 if (FUNC_3())
  VAR_1[VAR_2->context.id].prtb0 = 0;
 else
  FUNC_4(VAR_2);
 FUNC_1(&VAR_2->context);
 VAR_2->context.id = VAR_0;
}
