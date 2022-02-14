
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct perf_event {TYPE_1__ hw; } ;
struct TYPE_4__ {int perf_rdpmc_allowed; } ;
struct mm_struct {TYPE_2__ context; int mmap_sem; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (int ,int ,int *,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_2, struct mm_struct *VAR_3)
{
 if (!(VAR_2->hw.flags & VAR_0))
  return;
 FUNC_1(&VAR_3->mmap_sem);

 if (FUNC_0(&VAR_3->context.perf_rdpmc_allowed) == 1)
  FUNC_3(FUNC_2(VAR_3), VAR_1, ((void*)0), 1);
}
