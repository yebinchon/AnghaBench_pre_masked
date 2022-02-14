
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bd_emupage_lock; int bd_emupage_queue; int bd_emupage_allocmap; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef TYPE_1__ mm_context_t ;
struct TYPE_4__ {int pid; } ;


 int FUNC_0 (int ,int,int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(int VAR_1, struct mm_struct *VAR_2)
{
 mm_context_t *VAR_3 = &VAR_2->context;

 FUNC_2(&VAR_3->bd_emupage_lock);

 FUNC_1("free emuframe %d from %d\n", VAR_1, VAR_0->pid);
 FUNC_0(VAR_3->bd_emupage_allocmap, VAR_1, 1);


 FUNC_4(&VAR_3->bd_emupage_queue);

 FUNC_3(&VAR_3->bd_emupage_lock);
}
