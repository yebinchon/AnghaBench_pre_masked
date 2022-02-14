
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gpu_scheduler {scalar_t__ timeout; int work_tdr; int ring_mirror_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct drm_gpu_scheduler *VAR_1)
{
 if (VAR_1->timeout != VAR_0 &&
     !FUNC_0(&VAR_1->ring_mirror_list))
  FUNC_1(&VAR_1->work_tdr, VAR_1->timeout);
}
