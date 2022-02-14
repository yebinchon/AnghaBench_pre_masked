
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int paylen_newwin; scalar_t__ seg_num; } ;
struct TYPE_5__ {int method; } ;
struct ib_rmpp_mad {TYPE_3__ rmpp_hdr; TYPE_2__ mad_hdr; } ;
struct ib_mad_send_buf {int ah; int hdr_len; struct ib_rmpp_mad* mad; } ;
struct TYPE_4__ {int mad; } ;
struct ib_mad_recv_wc {TYPE_1__ recv_buf; } ;
struct ib_mad_agent_private {int agent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ib_mad_send_buf*) ;
 int VAR_2 ;
 struct ib_mad_send_buf* FUNC_1 (int *,struct ib_mad_recv_wc*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ib_mad_send_buf*) ;
 int FUNC_4 (struct ib_mad_send_buf*,int *) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (struct ib_rmpp_mad*,int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct ib_mad_agent_private *VAR_3,
         struct ib_mad_recv_wc *VAR_4)
{
 struct ib_mad_send_buf *VAR_5;
 struct ib_rmpp_mad *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(&VAR_3->agent, VAR_4);
 if (FUNC_0(VAR_5))
  return;

 VAR_6 = VAR_5->mad;
 FUNC_6(VAR_6, VAR_4->recv_buf.mad, VAR_5->hdr_len);

 VAR_6->mad_hdr.method ^= VAR_0;
 FUNC_5(&VAR_6->rmpp_hdr, VAR_1);
 VAR_6->rmpp_hdr.seg_num = 0;
 VAR_6->rmpp_hdr.paylen_newwin = FUNC_2(1);

 VAR_7 = FUNC_4(VAR_5, ((void*)0));
 if (VAR_7) {
  FUNC_7(VAR_5->ah, VAR_2);
  FUNC_3(VAR_5);
 }
}
