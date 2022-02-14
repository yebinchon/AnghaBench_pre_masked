
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hv_vmbus_device_id {int dummy; } ;
struct hv_device {int channel; } ;
struct TYPE_7__ {int wrk; } ;
struct TYPE_6__ {int wrk; } ;
struct TYPE_8__ {int host_specified_ha_region; int thread; int state; TYPE_2__ ha_wrk; TYPE_1__ balloon_wrk; int ha_lock; int ha_region_list; int config_event; int host_event; int next_version; struct hv_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hv_device*) ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct hv_device*,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,TYPE_3__*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct hv_device *VAR_11,
    const struct hv_vmbus_device_id *VAR_12)
{
 int VAR_13;




 VAR_6 = 0;

 VAR_4.dev = VAR_11;
 VAR_4.state = VAR_1;
 VAR_4.next_version = VAR_2;
 FUNC_6(&VAR_4.host_event);
 FUNC_6(&VAR_4.config_event);
 FUNC_0(&VAR_4.ha_region_list);
 FUNC_11(&VAR_4.ha_lock);
 FUNC_1(&VAR_4.balloon_wrk.wrk, VAR_3);
 FUNC_1(&VAR_4.ha_wrk.wrk, VAR_8);
 VAR_4.host_specified_ha_region = 0;






 FUNC_5(VAR_11, &VAR_4);

 VAR_13 = FUNC_4(VAR_11);
 if (VAR_13 != 0)
  return VAR_13;

 VAR_4.state = VAR_0;

 VAR_4.thread =
   FUNC_7(VAR_5, &VAR_4, "hv_balloon");
 if (FUNC_2(VAR_4.thread)) {
  VAR_13 = FUNC_3(VAR_4.thread);
  goto probe_error;
 }

 return 0;

probe_error:
 FUNC_13(VAR_11->channel);




 return VAR_13;
}
