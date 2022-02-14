
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_4__ {struct scmi_msg_resp_perf_domain_attributes* buf; } ;
struct TYPE_3__ {int buf; } ;
struct scmi_xfer {TYPE_2__ rx; TYPE_1__ tx; } ;
struct scmi_msg_resp_perf_domain_attributes {int name; int sustained_perf_level; int sustained_freq_khz; int flags; } ;
struct scmi_handle {int dummy; } ;
struct perf_dom_info {int sustained_freq_khz; int sustained_perf_level; int mult_factor; int name; int perf_fastchannels; int perf_level_notify; int perf_limit_notify; int set_perf; int set_limits; } ;
typedef int domain ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_8 (struct scmi_handle const*,int ,int ,int,int,struct scmi_xfer**) ;
 int FUNC_9 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_11(const struct scmi_handle *VAR_3, u32 VAR_4,
    struct perf_dom_info *VAR_5)
{
 int VAR_6;
 struct scmi_xfer *VAR_7;
 struct scmi_msg_resp_perf_domain_attributes *VAR_8;

 VAR_6 = FUNC_8(VAR_3, VAR_0,
     VAR_2, sizeof(VAR_4),
     sizeof(*VAR_8), &VAR_7);
 if (VAR_6)
  return VAR_6;

 FUNC_6(VAR_4, VAR_7->tx.buf);
 VAR_8 = VAR_7->rx.buf;

 VAR_6 = FUNC_7(VAR_3, VAR_7);
 if (!VAR_6) {
  u32 VAR_9 = FUNC_5(VAR_8->flags);

  VAR_5->set_limits = FUNC_3(VAR_9);
  VAR_5->set_perf = FUNC_4(VAR_9);
  VAR_5->perf_limit_notify = FUNC_2(VAR_9);
  VAR_5->perf_level_notify = FUNC_1(VAR_9);
  VAR_5->perf_fastchannels = FUNC_0(VAR_9);
  VAR_5->sustained_freq_khz =
     FUNC_5(VAR_8->sustained_freq_khz);
  VAR_5->sustained_perf_level =
     FUNC_5(VAR_8->sustained_perf_level);
  if (!VAR_5->sustained_freq_khz ||
      !VAR_5->sustained_perf_level)

   VAR_5->mult_factor = 1000;
  else
   VAR_5->mult_factor =
     (VAR_5->sustained_freq_khz * 1000) /
     VAR_5->sustained_perf_level;
  FUNC_10(VAR_5->name, VAR_8->name, VAR_1);
 }

 FUNC_9(VAR_3, VAR_7);
 return VAR_6;
}
