
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_ringbuffer {TYPE_1__* gpu; int bo; int fctx; } ;
struct TYPE_2__ {int aspace; } ;


 scalar_t__ FUNC_0 (struct msm_ringbuffer*) ;
 int FUNC_1 (struct msm_ringbuffer*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

void FUNC_4(struct msm_ringbuffer *VAR_0)
{
 if (FUNC_0(VAR_0))
  return;

 FUNC_2(VAR_0->fctx);

 FUNC_3(VAR_0->bo, VAR_0->gpu->aspace, 0);

 FUNC_1(VAR_0);
}
