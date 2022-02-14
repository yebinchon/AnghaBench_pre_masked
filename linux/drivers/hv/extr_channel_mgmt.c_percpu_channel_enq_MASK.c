
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmbus_channel {int percpu_list; } ;
struct hv_per_cpu_context {int chan_list; } ;
struct TYPE_2__ {int cpu_context; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct hv_per_cpu_context* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct vmbus_channel *VAR_2 = VAR_1;
 struct hv_per_cpu_context *VAR_3
  = FUNC_1(VAR_0.cpu_context);

 FUNC_0(&VAR_2->percpu_list, &VAR_3->chan_list);
}
