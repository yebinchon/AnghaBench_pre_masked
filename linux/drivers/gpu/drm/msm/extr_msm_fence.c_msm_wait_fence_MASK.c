
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct msm_fence_context {scalar_t__ last_fence; int completed_fence; int event; int name; } ;
typedef int ktime_t ;


 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct msm_fence_context*,scalar_t__) ;
 unsigned long FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__,unsigned long) ;
 int FUNC_5 (int ,scalar_t__,unsigned long) ;

int FUNC_6(struct msm_fence_context *VAR_4, uint32_t VAR_5,
  ktime_t *VAR_6, bool VAR_7)
{
 int VAR_8;

 if (VAR_5 > VAR_4->last_fence) {
  FUNC_1("%s: waiting on invalid fence: %u (of %u)\n",
    VAR_4->name, VAR_5, VAR_4->last_fence);
  return -VAR_1;
 }

 if (!VAR_6) {

  VAR_8 = FUNC_2(VAR_4, VAR_5) ? 0 : -VAR_0;
 } else {
  unsigned long VAR_9 = FUNC_3(VAR_6);

  if (VAR_7)
   VAR_8 = FUNC_4(VAR_4->event,
    FUNC_2(VAR_4, VAR_5),
    VAR_9);
  else
   VAR_8 = FUNC_5(VAR_4->event,
    FUNC_2(VAR_4, VAR_5),
    VAR_9);

  if (VAR_8 == 0) {
   FUNC_0("timeout waiting for fence: %u (completed: %u)",
     VAR_5, VAR_4->completed_fence);
   VAR_8 = -VAR_3;
  } else if (VAR_8 != -VAR_2) {
   VAR_8 = 0;
  }
 }

 return VAR_8;
}
