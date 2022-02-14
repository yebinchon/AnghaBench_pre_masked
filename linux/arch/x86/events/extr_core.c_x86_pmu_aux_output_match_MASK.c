
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct TYPE_4__ {int capabilities; } ;
struct TYPE_3__ {int (* aux_output_match ) (struct perf_event*) ;} ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (struct perf_event*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_1(struct perf_event *VAR_3)
{
 if (!(VAR_1.capabilities & VAR_0))
  return 0;

 if (VAR_2.aux_output_match)
  return VAR_2.aux_output_match(VAR_3);

 return 0;
}
