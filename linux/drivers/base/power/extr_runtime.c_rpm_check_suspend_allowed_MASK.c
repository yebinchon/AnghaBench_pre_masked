
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ disable_depth; scalar_t__ runtime_status; scalar_t__ request; scalar_t__ request_pending; scalar_t__ deferred_resume; int child_count; int ignore_children; int usage_count; scalar_t__ runtime_error; } ;
struct device {TYPE_1__ power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_8)
{
 int VAR_9 = 0;

 if (VAR_8->power.runtime_error)
  VAR_9 = -VAR_3;
 else if (VAR_8->power.disable_depth > 0)
  VAR_9 = -VAR_0;
 else if (FUNC_1(&VAR_8->power.usage_count) > 0)
  VAR_9 = -VAR_1;
 else if (!VAR_8->power.ignore_children &&
   FUNC_1(&VAR_8->power.child_count))
  VAR_9 = -VAR_2;


 else if ((VAR_8->power.deferred_resume
   && VAR_8->power.runtime_status == VAR_7)
     || (VAR_8->power.request_pending
   && VAR_8->power.request == VAR_5))
  VAR_9 = -VAR_1;
 else if (FUNC_0(VAR_8) == 0)
  VAR_9 = -VAR_4;
 else if (VAR_8->power.runtime_status == VAR_6)
  VAR_9 = 1;

 return VAR_9;
}
