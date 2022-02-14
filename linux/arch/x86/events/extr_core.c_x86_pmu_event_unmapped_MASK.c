
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct perf_event {TYPE_1__ hw; } ;
struct TYPE_4__ {int perf_rdpmc_allowed; } ;
struct mm_struct {TYPE_2__ context; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_2, struct mm_struct *VAR_3)
{

 if (!(VAR_2->hw.flags & VAR_0))
  return;

 if (FUNC_0(&VAR_3->context.perf_rdpmc_allowed))
  FUNC_2(FUNC_1(VAR_3), VAR_1, ((void*)0), 1);
}
