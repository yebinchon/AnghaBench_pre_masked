
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rmpp_rtime_flags; scalar_t__ rmpp_version; int rmpp_type; } ;
struct ib_rmpp_mad {TYPE_2__ rmpp_hdr; } ;
struct TYPE_3__ {scalar_t__ mad; } ;
struct ib_mad_recv_wc {TYPE_1__ recv_buf; } ;
struct ib_mad_agent_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*,int ) ;
 int FUNC_1 (struct ib_mad_recv_wc*) ;
 int FUNC_2 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*,int ) ;
 int FUNC_3 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;
 int FUNC_4 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;
 struct ib_mad_recv_wc* FUNC_5 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;
 int FUNC_6 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;

struct ib_mad_recv_wc *
FUNC_7(struct ib_mad_agent_private *VAR_4,
   struct ib_mad_recv_wc *VAR_5)
{
 struct ib_rmpp_mad *VAR_6;

 VAR_6 = (struct ib_rmpp_mad *)VAR_5->recv_buf.mad;
 if (!(VAR_6->rmpp_hdr.rmpp_rtime_flags & VAR_0))
  return VAR_5;

 if (VAR_6->rmpp_hdr.rmpp_version != VAR_3) {
  FUNC_0(VAR_4, VAR_5, VAR_2);
  FUNC_2(VAR_4, VAR_5, VAR_2);
  goto out;
 }

 switch (VAR_6->rmpp_hdr.rmpp_type) {
 case 129:
  return FUNC_5(VAR_4, VAR_5);
 case 130:
  FUNC_4(VAR_4, VAR_5);
  break;
 case 128:
  FUNC_6(VAR_4, VAR_5);
  break;
 case 131:
  FUNC_3(VAR_4, VAR_5);
  break;
 default:
  FUNC_0(VAR_4, VAR_5, VAR_1);
  FUNC_2(VAR_4, VAR_5, VAR_1);
  break;
 }
out:
 FUNC_1(VAR_5);
 return ((void*)0);
}
