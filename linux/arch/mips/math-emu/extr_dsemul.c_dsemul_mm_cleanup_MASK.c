
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bd_emupage_allocmap; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef TYPE_1__ mm_context_t ;


 int FUNC_0 (int ) ;

void FUNC_1(struct mm_struct *VAR_0)
{
 mm_context_t *VAR_1 = &VAR_0->context;

 FUNC_0(VAR_1->bd_emupage_allocmap);
}
