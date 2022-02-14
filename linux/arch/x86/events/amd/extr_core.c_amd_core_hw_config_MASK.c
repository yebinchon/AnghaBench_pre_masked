
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
struct TYPE_4__ {scalar_t__ exclude_guest; scalar_t__ exclude_host; } ;
struct perf_event {TYPE_1__ hw; TYPE_2__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct perf_event *VAR_4)
{
 if (VAR_4->attr.exclude_host && VAR_4->attr.exclude_guest)





  VAR_4->hw.config &= ~(VAR_3 |
          VAR_2);
 else if (VAR_4->attr.exclude_host)
  VAR_4->hw.config |= VAR_0;
 else if (VAR_4->attr.exclude_guest)
  VAR_4->hw.config |= VAR_1;

 return 0;
}
