
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; scalar_t__ precise_ip; int sample_period; } ;
struct TYPE_4__ {int config; } ;
struct perf_event {TYPE_1__ attr; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_6)
{
 int VAR_7 = FUNC_2(VAR_6);

 if (VAR_7)
  return VAR_7;
 if (!FUNC_0(VAR_5) && !FUNC_0(VAR_4))
  return 0;
 VAR_6->hw.config |= VAR_6->attr.config & (VAR_2|VAR_3);






 if ((VAR_6->hw.config & (VAR_2|VAR_3)) &&
      ((VAR_6->hw.config & VAR_0) ||
       VAR_6->attr.precise_ip > 0))
  return -VAR_1;

 if (FUNC_1(VAR_6)) {
  if (VAR_6->attr.sample_period > 0 &&
      VAR_6->attr.sample_period < 0x7fffffff)
   return -VAR_1;
 }
 return 0;
}
