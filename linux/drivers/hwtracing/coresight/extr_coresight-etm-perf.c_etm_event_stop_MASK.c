
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct perf_output_handle {struct perf_event* event; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct perf_event {TYPE_1__ hw; } ;
struct list_head {int dummy; } ;
struct etm_event_data {int snk_config; } ;
struct coresight_device {int dummy; } ;
struct TYPE_6__ {unsigned long (* update_buffer ) (struct coresight_device*,struct perf_output_handle*,int ) ;} ;
struct TYPE_5__ {int (* disable ) (struct coresight_device*,struct perf_event*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct list_head*) ;
 struct coresight_device* FUNC_2 (struct list_head*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct list_head* FUNC_3 (struct etm_event_data*,int) ;
 struct coresight_device* FUNC_4 (int ,int) ;
 int FUNC_5 (struct perf_output_handle*,unsigned long) ;
 struct etm_event_data* FUNC_6 (struct perf_output_handle*) ;
 TYPE_3__* FUNC_7 (struct coresight_device*) ;
 int FUNC_8 () ;
 TYPE_2__* FUNC_9 (struct coresight_device*) ;
 int FUNC_10 (struct coresight_device*,struct perf_event*) ;
 unsigned long FUNC_11 (struct coresight_device*,struct perf_output_handle*,int ) ;
 struct perf_output_handle* FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct perf_event *VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_8();
 unsigned long VAR_7;
 struct coresight_device *VAR_8, *VAR_9 = FUNC_4(VAR_2, VAR_6);
 struct perf_output_handle *VAR_10 = FUNC_12(&VAR_3);
 struct etm_event_data *VAR_11 = FUNC_6(VAR_10);
 struct list_head *VAR_12;

 if (VAR_4->hw.state == VAR_1)
  return;

 if (!VAR_9)
  return;

 VAR_12 = FUNC_3(VAR_11, VAR_6);
 if (!VAR_12)
  return;

 VAR_8 = FUNC_2(VAR_12);
 if (!VAR_8)
  return;


 FUNC_9(VAR_9)->disable(VAR_9, VAR_4);


 VAR_4->hw.state = VAR_1;

 if (VAR_5 & VAR_0) {
  if (FUNC_0(VAR_10->event != VAR_4))
   return;


  if (!FUNC_7(VAR_8)->update_buffer)
   return;

  VAR_7 = FUNC_7(VAR_8)->update_buffer(VAR_8, VAR_10,
           VAR_11->snk_config);
  FUNC_5(VAR_10, VAR_7);
 }


 FUNC_1(VAR_12);
}
