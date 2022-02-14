
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ib_rmpp_hdr {scalar_t__ seg_num; scalar_t__ rmpp_status; } ;
struct ib_rmpp_mad {struct ib_rmpp_hdr rmpp_hdr; } ;
struct TYPE_2__ {scalar_t__ mad; } ;
struct ib_mad_recv_wc {TYPE_1__ recv_buf; } ;
struct ib_mad_agent_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_mad_recv_wc* FUNC_0 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ib_mad_recv_wc*) ;
 int FUNC_3 (struct ib_rmpp_hdr*) ;
 int FUNC_4 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*,int ) ;
 struct ib_mad_recv_wc* FUNC_5 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;

__attribute__((used)) static struct ib_mad_recv_wc *
FUNC_6(struct ib_mad_agent_private *VAR_3,
    struct ib_mad_recv_wc *VAR_4)
{
 struct ib_rmpp_hdr *VAR_5;
 u8 VAR_6;

 VAR_5 = &((struct ib_rmpp_mad *)VAR_4->recv_buf.mad)->rmpp_hdr;

 if (VAR_5->rmpp_status) {
  VAR_6 = VAR_2;
  goto bad;
 }

 if (VAR_5->seg_num == FUNC_1(1)) {
  if (!(FUNC_3(VAR_5) & VAR_0)) {
   VAR_6 = VAR_1;
   goto bad;
  }
  return FUNC_5(VAR_3, VAR_4);
 } else {
  if (FUNC_3(VAR_5) & VAR_0) {
   VAR_6 = VAR_1;
   goto bad;
  }
  return FUNC_0(VAR_3, VAR_4);
 }
bad:
 FUNC_4(VAR_3, VAR_4, VAR_6);
 FUNC_2(VAR_4);
 return ((void*)0);
}
