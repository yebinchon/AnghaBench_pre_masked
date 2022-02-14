
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {struct scmi_msg_resp_perf_describe_levels* buf; } ;
struct TYPE_4__ {struct scmi_msg_perf_describe_levels* buf; } ;
struct scmi_xfer {TYPE_2__ rx; TYPE_1__ tx; } ;
struct scmi_opp {scalar_t__ trans_latency_us; void* power; void* perf; } ;
struct scmi_msg_resp_perf_describe_levels {TYPE_3__* opp; int num_remaining; int num_returned; } ;
struct scmi_msg_perf_describe_levels {void* level_index; void* domain; } ;
struct scmi_handle {int dev; } ;
struct perf_dom_info {struct scmi_opp* opp; scalar_t__ opp_count; } ;
struct TYPE_6__ {int transition_latency_us; int power; int perf_val; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,void*,void*,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_6 (struct scmi_handle const*,int ,int ,int,int ,struct scmi_xfer**) ;
 int FUNC_7 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_8 (struct scmi_opp*,scalar_t__,int,int ,int *) ;

__attribute__((used)) static int
FUNC_9(const struct scmi_handle *VAR_4, u32 VAR_5,
         struct perf_dom_info *VAR_6)
{
 int VAR_7, VAR_8;
 u32 VAR_9 = 0;
 u16 VAR_10, VAR_11;
 struct scmi_xfer *VAR_12;
 struct scmi_opp *VAR_13;
 struct scmi_msg_perf_describe_levels *VAR_14;
 struct scmi_msg_resp_perf_describe_levels *VAR_15;

 VAR_7 = FUNC_6(VAR_4, VAR_1,
     VAR_2, sizeof(*VAR_14), 0, &VAR_12);
 if (VAR_7)
  return VAR_7;

 VAR_14 = VAR_12->tx.buf;
 VAR_15 = VAR_12->rx.buf;

 do {
  VAR_14->domain = FUNC_0(VAR_5);

  VAR_14->level_index = FUNC_0(VAR_9);

  VAR_7 = FUNC_5(VAR_4, VAR_12);
  if (VAR_7)
   break;

  VAR_10 = FUNC_3(VAR_15->num_returned);
  VAR_11 = FUNC_3(VAR_15->num_remaining);
  if (VAR_9 + VAR_10 > VAR_0) {
   FUNC_2(VAR_4->dev, "No. of OPPs exceeded MAX_OPPS");
   break;
  }

  VAR_13 = &VAR_6->opp[VAR_9];
  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++, VAR_13++) {
   VAR_13->perf = FUNC_4(VAR_15->opp[VAR_8].perf_val);
   VAR_13->power = FUNC_4(VAR_15->opp[VAR_8].power);
   VAR_13->trans_latency_us = FUNC_3
    (VAR_15->opp[VAR_8].transition_latency_us);

   FUNC_1(VAR_4->dev, "Level %d Power %d Latency %dus\n",
    VAR_13->perf, VAR_13->power, VAR_13->trans_latency_us);
  }

  VAR_9 += VAR_10;




 } while (VAR_10 && VAR_11);

 VAR_6->opp_count = VAR_9;
 FUNC_7(VAR_4, VAR_12);

 FUNC_8(VAR_6->opp, VAR_9, sizeof(*VAR_13), VAR_3, ((void*)0));
 return VAR_7;
}
