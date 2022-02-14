
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lima_sched_task {int deps; } ;
struct TYPE_2__ {int resv; } ;
struct lima_bo {TYPE_1__ gem; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(struct lima_sched_task *VAR_0, struct lima_bo *VAR_1,
       bool VAR_2, bool VAR_3)
{
 int VAR_4 = 0;

 if (!VAR_2) {
  VAR_4 = FUNC_0(VAR_1->gem.resv, 1);
  if (VAR_4)
   return VAR_4;
 }


 if (VAR_3)
  return 0;

 return FUNC_1(&VAR_0->deps, &VAR_1->gem, VAR_2);
}
