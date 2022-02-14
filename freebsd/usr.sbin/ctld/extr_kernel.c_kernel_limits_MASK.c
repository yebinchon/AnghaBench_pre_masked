
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctl_iscsi_limits_params {int max_recv_data_segment_length; int max_send_data_segment_length; int max_burst_length; int first_burst_length; int offload; } ;
struct TYPE_2__ {int limits; } ;
struct ctl_iscsi {scalar_t__ status; int error_str; TYPE_1__ data; int type; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ctl_iscsi*,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,struct ctl_iscsi*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*,int ) ;
 int FUNC_5 (int ,char const*,int) ;

void
FUNC_6(const char *VAR_4, int *VAR_5, int *VAR_6,
    int *VAR_7, int *VAR_8)
{
 struct ctl_iscsi VAR_9;
 struct ctl_iscsi_limits_params *VAR_10;

 FUNC_0(&VAR_9, sizeof(VAR_9));

 VAR_9.type = VAR_1;
 VAR_10 = (struct ctl_iscsi_limits_params *)&(VAR_9.data.limits);
 if (VAR_4 != ((void*)0)) {
  FUNC_5(VAR_10->offload, VAR_4, sizeof(VAR_10->offload));
 }

 if (FUNC_1(VAR_3, VAR_0, &VAR_9) == -1) {
  FUNC_3(1, "error issuing CTL_ISCSI ioctl; "
      "dropping connection");
 }

 if (VAR_9.status != VAR_2) {
  FUNC_4(1, "error returned from CTL iSCSI limits request: "
      "%s; dropping connection", VAR_9.error_str);
 }

 if (VAR_10->max_recv_data_segment_length != 0) {
  *VAR_5 = VAR_10->max_recv_data_segment_length;
  *VAR_6 = VAR_10->max_recv_data_segment_length;
 }
 if (VAR_10->max_send_data_segment_length != 0)
  *VAR_6 = VAR_10->max_send_data_segment_length;
 if (VAR_10->max_burst_length != 0)
  *VAR_7 = VAR_10->max_burst_length;
 if (VAR_10->first_burst_length != 0)
  *VAR_8 = VAR_10->first_burst_length;
 if (*VAR_7 < *VAR_8)
  *VAR_8 = *VAR_7;

 if (VAR_4 != ((void*)0)) {
  FUNC_2("Kernel limits for offload \"%s\" are "
      "MaxRecvDataSegment=%d, max_send_dsl=%d, "
      "MaxBurstLength=%d, FirstBurstLength=%d",
      VAR_4, *VAR_5, *VAR_6, *VAR_7,
      *VAR_8);
 } else {
  FUNC_2("Kernel limits are "
      "MaxRecvDataSegment=%d, max_send_dsl=%d, "
      "MaxBurstLength=%d, FirstBurstLength=%d",
      *VAR_5, *VAR_6, *VAR_7,
      *VAR_8);
 }
}
