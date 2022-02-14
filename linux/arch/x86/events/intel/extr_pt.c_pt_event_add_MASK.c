
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ event; } ;
struct pt {TYPE_1__ handle; } ;
struct hw_perf_event {scalar_t__ state; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct perf_event*,int ) ;
 struct pt* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct perf_event *VAR_5, int VAR_6)
{
 struct pt *VAR_7 = FUNC_1(&VAR_4);
 struct hw_perf_event *VAR_8 = &VAR_5->hw;
 int VAR_9 = -VAR_0;

 if (VAR_7->handle.event)
  goto fail;

 if (VAR_6 & VAR_2) {
  FUNC_0(VAR_5, 0);
  VAR_9 = -VAR_1;
  if (VAR_8->state == VAR_3)
   goto fail;
 } else {
  VAR_8->state = VAR_3;
 }

 VAR_9 = 0;
fail:

 return VAR_9;
}
