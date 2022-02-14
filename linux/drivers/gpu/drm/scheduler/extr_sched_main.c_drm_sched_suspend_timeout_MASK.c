
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long expires; } ;
struct TYPE_4__ {TYPE_1__ timer; } ;
struct drm_gpu_scheduler {unsigned long timeout; TYPE_2__ work_tdr; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;

unsigned long FUNC_2(struct drm_gpu_scheduler *VAR_3)
{
 unsigned long VAR_4, VAR_5 = VAR_1;

 VAR_4 = VAR_3->work_tdr.timer.expires;





 if (FUNC_0(VAR_2, &VAR_3->work_tdr, VAR_0)
   && FUNC_1(VAR_4, VAR_5))
  return VAR_4 - VAR_5;
 else
  return VAR_3->timeout;
}
