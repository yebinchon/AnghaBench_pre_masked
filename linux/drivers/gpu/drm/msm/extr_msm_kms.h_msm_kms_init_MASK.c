
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_kms_funcs {int dummy; } ;
struct msm_kms {int * pending_timers; struct msm_kms_funcs const* funcs; int commit_lock; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct msm_kms*,unsigned int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct msm_kms *VAR_0,
  const struct msm_kms_funcs *VAR_1)
{
 unsigned VAR_2;

 FUNC_2(&VAR_0->commit_lock);
 VAR_0->funcs = VAR_1;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->pending_timers); VAR_2++)
  FUNC_1(&VAR_0->pending_timers[VAR_2], VAR_0, VAR_2);
}
