
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef void* u16 ;
struct TYPE_2__ {struct scmi_msg_resp_perf_attributes* buf; } ;
struct scmi_xfer {TYPE_1__ rx; } ;
struct scmi_perf_info {int stats_addr; int stats_size; int power_scale_mw; void* num_domains; } ;
struct scmi_msg_resp_perf_attributes {int stats_size; int stats_addr_high; int stats_addr_low; int num_domains; int flags; } ;
struct scmi_handle {int dummy; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_4 (struct scmi_handle const*,int ,int ,int ,int,struct scmi_xfer**) ;
 int FUNC_5 (struct scmi_handle const*,struct scmi_xfer*) ;

__attribute__((used)) static int FUNC_6(const struct scmi_handle *VAR_2,
        struct scmi_perf_info *VAR_3)
{
 int VAR_4;
 struct scmi_xfer *VAR_5;
 struct scmi_msg_resp_perf_attributes *VAR_6;

 VAR_4 = FUNC_4(VAR_2, VAR_0,
     VAR_1, 0, sizeof(*VAR_6), &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_6 = VAR_5->rx.buf;

 VAR_4 = FUNC_3(VAR_2, VAR_5);
 if (!VAR_4) {
  u16 VAR_7 = FUNC_1(VAR_6->flags);

  VAR_3->num_domains = FUNC_1(VAR_6->num_domains);
  VAR_3->power_scale_mw = FUNC_0(VAR_7);
  VAR_3->stats_addr = FUNC_2(VAR_6->stats_addr_low) |
    (u64)FUNC_2(VAR_6->stats_addr_high) << 32;
  VAR_3->stats_size = FUNC_2(VAR_6->stats_size);
 }

 FUNC_5(VAR_2, VAR_5);
 return VAR_4;
}
