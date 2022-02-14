
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_rmpp_mad {int rmpp_hdr; } ;
struct TYPE_2__ {scalar_t__ seg_count; struct ib_rmpp_mad* mad; } ;
struct ib_mad_send_wr_private {scalar_t__ last_ack; scalar_t__ seg_num; int last_ack_seg; int cur_seg; TYPE_1__ send_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_mad_send_wr_private*) ;

int FUNC_2(struct ib_mad_send_wr_private *VAR_4)
{
 struct ib_rmpp_mad *VAR_5;
 int VAR_6;

 VAR_5 = VAR_4->send_buf.mad;
 if (!(FUNC_0(&VAR_5->rmpp_hdr) &
       VAR_0))
  return VAR_3;

 if (VAR_4->last_ack == VAR_4->send_buf.seg_count)
  return VAR_2;

 VAR_4->seg_num = VAR_4->last_ack;
 VAR_4->cur_seg = VAR_4->last_ack_seg;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  return VAR_2;

 return VAR_1;
}
