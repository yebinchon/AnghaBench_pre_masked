
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {void* paylen_newwin; int rmpp_rtime_flags; void* seg_num; } ;
struct ib_rmpp_mad {TYPE_2__ rmpp_hdr; } ;
struct TYPE_3__ {int seg_count; int seg_rmpp_size; int timeout_ms; struct ib_rmpp_mad* mad; } ;
struct ib_mad_send_wr_private {int seg_num; int pad; int timeout; TYPE_1__ send_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct ib_mad_send_wr_private*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ib_mad_send_wr_private *VAR_3)
{
 struct ib_rmpp_mad *VAR_4;
 int VAR_5;
 u32 VAR_6 = 0;

 VAR_4 = VAR_3->send_buf.mad;
 FUNC_2(&VAR_4->rmpp_hdr, VAR_0);
 VAR_4->rmpp_hdr.seg_num = FUNC_0(++VAR_3->seg_num);

 if (VAR_3->seg_num == 1) {
  VAR_4->rmpp_hdr.rmpp_rtime_flags |= VAR_1;
  VAR_6 = (VAR_3->send_buf.seg_count *
     VAR_3->send_buf.seg_rmpp_size) -
     VAR_3->pad;
 }

 if (VAR_3->seg_num == VAR_3->send_buf.seg_count) {
  VAR_4->rmpp_hdr.rmpp_rtime_flags |= VAR_2;
  VAR_6 = VAR_3->send_buf.seg_rmpp_size - VAR_3->pad;
 }
 VAR_4->rmpp_hdr.paylen_newwin = FUNC_0(VAR_6);


 VAR_5 = VAR_3->send_buf.timeout_ms;
 if (!VAR_5 || VAR_5 > 2000)
  VAR_3->timeout = FUNC_3(2000);

 return FUNC_1(VAR_3);
}
