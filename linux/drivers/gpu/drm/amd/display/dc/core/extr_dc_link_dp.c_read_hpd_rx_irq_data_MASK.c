
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {void* raw; } ;
struct TYPE_16__ {void* raw; } ;
struct TYPE_15__ {void* raw; } ;
struct TYPE_14__ {void* raw; } ;
struct TYPE_13__ {void* raw; } ;
struct TYPE_12__ {void* raw; } ;
struct TYPE_18__ {TYPE_8__ sink_status; TYPE_7__ lane_status_updated; TYPE_6__ lane23_status; TYPE_5__ lane01_status; TYPE_4__ device_service_irq; TYPE_3__ sink_cnt; } ;
union hpd_irq_data {void** raw; TYPE_9__ bytes; } ;
typedef void* uint8_t ;
typedef int tmp ;
struct TYPE_10__ {scalar_t__ raw; } ;
struct TYPE_11__ {TYPE_1__ dpcd_rev; } ;
struct dc_link {TYPE_2__ dpcd_caps; } ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct dc_link*,int,void**,int) ;

__attribute__((used)) static enum dc_status FUNC_1(
 struct dc_link *VAR_9,
 union hpd_irq_data *VAR_10)
{
 static enum dc_status VAR_11;
 if (VAR_9->dpcd_caps.dpcd_rev.raw < VAR_1)
  VAR_11 = FUNC_0(
   VAR_9,
   VAR_6,
   VAR_10->raw,
   sizeof(union hpd_irq_data));
 else {



  uint8_t VAR_12[VAR_8 - VAR_7 + 1];

  VAR_11 = FUNC_0(
   VAR_9,
   VAR_7,
   VAR_12,
   sizeof(VAR_12));

  if (VAR_11 != VAR_0)
   return VAR_11;

  VAR_10->bytes.sink_cnt.raw = VAR_12[VAR_7 - VAR_7];
  VAR_10->bytes.device_service_irq.raw = VAR_12[VAR_2 - VAR_7];
  VAR_10->bytes.lane01_status.raw = VAR_12[VAR_3 - VAR_7];
  VAR_10->bytes.lane23_status.raw = VAR_12[VAR_4 - VAR_7];
  VAR_10->bytes.lane_status_updated.raw = VAR_12[VAR_5 - VAR_7];
  VAR_10->bytes.sink_status.raw = VAR_12[VAR_8 - VAR_7];
 }

 return VAR_11;
}
