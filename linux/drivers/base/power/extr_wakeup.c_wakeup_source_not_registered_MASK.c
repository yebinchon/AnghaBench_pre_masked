
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ function; } ;
struct wakeup_source {TYPE_1__ timer; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct wakeup_source *VAR_1)
{




 return VAR_1->timer.function != VAR_0;
}
