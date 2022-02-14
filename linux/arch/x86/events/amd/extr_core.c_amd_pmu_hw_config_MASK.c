
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int config; scalar_t__ precise_ip; } ;
struct TYPE_3__ {int config; } ;
struct perf_event {TYPE_2__ attr; TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;

__attribute__((used)) static int FUNC_4(struct perf_event *VAR_4)
{
 int VAR_5;


 if (VAR_4->attr.precise_ip && FUNC_1())
  return -VAR_1;

 if (FUNC_2(VAR_4))
  return -VAR_2;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_4->attr.type == VAR_3)
  VAR_4->hw.config |= VAR_4->attr.config & VAR_0;

 return FUNC_0(VAR_4);
}
