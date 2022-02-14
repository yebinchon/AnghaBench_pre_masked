
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_attr {scalar_t__ precise_ip; int exclude_kernel; } ;
struct perf_event {int destroy; struct perf_event_attr attr; } ;
struct TYPE_2__ {int bts_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_5)
{
 struct perf_event_attr *VAR_6 = &VAR_5->attr;

 if (FUNC_1(FUNC_0(VAR_5))) {

  if (!VAR_4.bts_active)
   return -VAR_1;


  if (!VAR_6->exclude_kernel)
   return -VAR_1;


  if (VAR_6->precise_ip)
   return -VAR_1;


  if (FUNC_2(VAR_3))
   return -VAR_0;

  VAR_5->destroy = VAR_2;
 }

 return 0;
}
