
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_msg_hdr {int dummy; } ;
struct ishtp_device {int dummy; } ;
struct ishtp_cl {int fc_spinlock; int err_send_fc; int ts_max_fc_delay; scalar_t__ ts_rx; int ts_out_fc; int out_flow_ctrl_cnt; scalar_t__ out_flow_ctrl_creds; scalar_t__ recv_msg_num_frags; } ;
struct hbm_flow_control {int dummy; } ;
typedef int ktime_t ;
typedef int flow_ctrl ;


 int VAR_0 ;
 int FUNC_0 (struct ishtp_cl*,int ,struct hbm_flow_control*,size_t const) ;
 int FUNC_1 (struct ishtp_msg_hdr*,size_t const) ;
 int FUNC_2 (struct ishtp_device*,struct ishtp_msg_hdr*,struct hbm_flow_control*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct ishtp_device *VAR_1,
      struct ishtp_cl *VAR_2)
{
 struct ishtp_msg_hdr VAR_3;
 struct hbm_flow_control VAR_4;
 const size_t VAR_5 = sizeof(VAR_4);
 int VAR_6;
 unsigned long VAR_7;

 FUNC_6(&VAR_2->fc_spinlock, VAR_7);

 FUNC_1(&VAR_3, VAR_5);
 FUNC_0(VAR_2, VAR_0, &VAR_4, VAR_5);





 if (VAR_2->out_flow_ctrl_creds) {
  FUNC_7(&VAR_2->fc_spinlock, VAR_7);
  return 0;
 }

 VAR_2->recv_msg_num_frags = 0;

 VAR_6 = FUNC_2(VAR_1, &VAR_3, &VAR_4);
 if (!VAR_6) {
  ++VAR_2->out_flow_ctrl_creds;
  ++VAR_2->out_flow_ctrl_cnt;
  VAR_2->ts_out_fc = FUNC_4();
  if (VAR_2->ts_rx) {
   ktime_t VAR_8 = FUNC_5(VAR_2->ts_out_fc, VAR_2->ts_rx);
   if (FUNC_3(VAR_8, VAR_2->ts_max_fc_delay))
    VAR_2->ts_max_fc_delay = VAR_8;
  }
 } else {
  ++VAR_2->err_send_fc;
 }

 FUNC_7(&VAR_2->fc_spinlock, VAR_7);
 return VAR_6;
}
