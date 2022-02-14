
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_output_handle {int dummy; } ;
struct TYPE_3__ {scalar_t__ state; } ;
struct perf_event {TYPE_1__ hw; } ;
struct list_head {int dummy; } ;
struct etm_event_data {int dummy; } ;
struct coresight_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ (* enable ) (struct coresight_device*,struct perf_event*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct list_head*) ;
 scalar_t__ FUNC_2 (struct list_head*,int ,struct perf_output_handle*) ;
 struct coresight_device* FUNC_3 (struct list_head*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct list_head* FUNC_4 (struct etm_event_data*,int) ;
 struct coresight_device* FUNC_5 (int ,int) ;
 struct etm_event_data* FUNC_6 (struct perf_output_handle*,struct perf_event*) ;
 int FUNC_7 (struct perf_output_handle*,int ) ;
 int FUNC_8 (struct perf_output_handle*,int ) ;
 int FUNC_9 () ;
 TYPE_2__* FUNC_10 (struct coresight_device*) ;
 scalar_t__ FUNC_11 (struct coresight_device*,struct perf_event*,int ) ;
 struct perf_output_handle* FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct perf_event *VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_9();
 struct etm_event_data *VAR_8;
 struct perf_output_handle *VAR_9 = FUNC_12(&VAR_4);
 struct coresight_device *VAR_10, *VAR_11 = FUNC_5(VAR_3, VAR_7);
 struct list_head *VAR_12;

 if (!VAR_11)
  goto fail;





 VAR_8 = FUNC_6(VAR_9, VAR_5);
 if (!VAR_8)
  goto fail;

 VAR_12 = FUNC_4(VAR_8, VAR_7);

 VAR_10 = FUNC_3(VAR_12);
 if (FUNC_0(!VAR_10))
  goto fail_end_stop;


 if (FUNC_2(VAR_12, VAR_0, VAR_9))
  goto fail_end_stop;


 VAR_5->hw.state = 0;


 if (FUNC_10(VAR_11)->enable(VAR_11, VAR_5, VAR_0))
  goto fail_disable_path;

out:
 return;

fail_disable_path:
 FUNC_1(VAR_12);
fail_end_stop:
 FUNC_8(VAR_9, VAR_1);
 FUNC_7(VAR_9, 0);
fail:
 VAR_5->hw.state = VAR_2;
 goto out;
}
