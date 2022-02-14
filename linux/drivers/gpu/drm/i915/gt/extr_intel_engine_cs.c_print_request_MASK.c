
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; int seqno; int context; TYPE_1__* ops; } ;
struct TYPE_5__ {int attr; } ;
struct i915_request {scalar_t__ emitted_jiffies; TYPE_3__ fence; TYPE_2__ sched; int i915; } ;
struct drm_printer {int dummy; } ;
typedef int buf ;
struct TYPE_4__ {char* (* get_timeline_name ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_printer*,char*,char const*,int ,int ,char*,char*,char*,int ,char const*) ;
 scalar_t__ FUNC_1 (struct i915_request*) ;
 scalar_t__ FUNC_2 (struct i915_request*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int *,char*,int,int) ;
 char* FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct drm_printer *VAR_3,
     struct i915_request *VAR_4,
     const char *VAR_5)
{
 const char *VAR_6 = VAR_4->fence.ops->get_timeline_name(&VAR_4->fence);
 char VAR_7[80] = "";
 int VAR_8 = 0;

 VAR_8 = FUNC_4(VAR_4->i915, &VAR_4->sched.attr, VAR_7, VAR_8, sizeof(VAR_7));

 FUNC_0(VAR_3, "%s %llx:%llx%s%s %s @ %dms: %s\n",
     VAR_5,
     VAR_4->fence.context, VAR_4->fence.seqno,
     FUNC_1(VAR_4) ? "!" :
     FUNC_2(VAR_4) ? "*" :
     "",
     FUNC_6(VAR_1,
       &VAR_4->fence.flags) ? "+" :
     FUNC_6(VAR_0,
       &VAR_4->fence.flags) ? "-" :
     "",
     VAR_7,
     FUNC_3(VAR_2 - VAR_4->emitted_jiffies),
     VAR_6);
}
