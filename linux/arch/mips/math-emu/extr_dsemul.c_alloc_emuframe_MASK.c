
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bd_emupage_lock; scalar_t__ bd_emupage_allocmap; int bd_emupage_queue; } ;
typedef TYPE_2__ mm_context_t ;
struct TYPE_6__ {int pid; TYPE_1__* mm; } ;
struct TYPE_4__ {TYPE_2__ context; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int,int ) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(void)
{
 mm_context_t *VAR_4 = &VAR_2->mm->context;
 int VAR_5;

retry:
 FUNC_5(&VAR_4->bd_emupage_lock);


 if (!VAR_4->bd_emupage_allocmap) {
  VAR_4->bd_emupage_allocmap =
   FUNC_3(FUNC_0(VAR_3),
           sizeof(unsigned long),
    VAR_1);

  if (!VAR_4->bd_emupage_allocmap) {
   VAR_5 = VAR_0;
   goto out_unlock;
  }
 }


 VAR_5 = FUNC_1(VAR_4->bd_emupage_allocmap,
          VAR_3, 0);
 if (VAR_5 < 0) {
  FUNC_6(&VAR_4->bd_emupage_lock);
  if (!FUNC_7(VAR_4->bd_emupage_queue,
   !FUNC_2(VAR_4->bd_emupage_allocmap,
         VAR_3)))
   goto retry;


  return VAR_0;
 }


 FUNC_4("allocate emuframe %d to %d\n", VAR_5, VAR_2->pid);
out_unlock:
 FUNC_6(&VAR_4->bd_emupage_lock);
 return VAR_5;
}
