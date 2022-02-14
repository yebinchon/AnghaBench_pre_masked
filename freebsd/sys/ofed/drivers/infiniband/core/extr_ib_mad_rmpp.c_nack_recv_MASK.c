
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ paylen_newwin; scalar_t__ seg_num; int rmpp_status; int rmpp_type; int rmpp_version; } ;
struct TYPE_5__ {int method; } ;
struct ib_rmpp_mad {TYPE_3__ rmpp_hdr; TYPE_2__ mad_hdr; } ;
struct ib_mad_send_buf {int ah; int hdr_len; struct ib_rmpp_mad* mad; } ;
struct TYPE_4__ {int mad; } ;
struct ib_mad_recv_wc {TYPE_1__ recv_buf; } ;
struct ib_mad_agent_private {int agent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ib_mad_send_buf*) ;
 struct ib_mad_send_buf* FUNC_1 (int *,struct ib_mad_recv_wc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ib_mad_send_buf*) ;
 int FUNC_4 (struct ib_mad_send_buf*,int *) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (struct ib_rmpp_mad*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct ib_mad_agent_private *VAR_4,
        struct ib_mad_recv_wc *VAR_5, u8 VAR_6)
{
 struct ib_mad_send_buf *VAR_7;
 struct ib_rmpp_mad *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(&VAR_4->agent, VAR_5);
 if (FUNC_0(VAR_7))
  return;

 VAR_8 = VAR_7->mad;
 FUNC_6(VAR_8, VAR_5->recv_buf.mad, VAR_7->hdr_len);

 VAR_8->mad_hdr.method ^= VAR_0;
 VAR_8->rmpp_hdr.rmpp_version = VAR_3;
 VAR_8->rmpp_hdr.rmpp_type = VAR_2;
 FUNC_5(&VAR_8->rmpp_hdr, VAR_1);
 VAR_8->rmpp_hdr.rmpp_status = VAR_6;
 VAR_8->rmpp_hdr.seg_num = 0;
 VAR_8->rmpp_hdr.paylen_newwin = 0;

 VAR_9 = FUNC_4(VAR_7, ((void*)0));
 if (VAR_9) {
  FUNC_2(VAR_7->ah);
  FUNC_3(VAR_7);
 }
}
