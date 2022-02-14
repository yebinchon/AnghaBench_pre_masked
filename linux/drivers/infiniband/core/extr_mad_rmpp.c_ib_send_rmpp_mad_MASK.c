
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rmpp_type; } ;
struct ib_rmpp_mad {TYPE_2__ rmpp_hdr; } ;
struct TYPE_3__ {struct ib_rmpp_mad* mad; } ;
struct ib_mad_send_wr_private {int seg_num; int refcount; scalar_t__ timeout; int newwin; TYPE_1__ send_buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct ib_mad_send_wr_private*) ;
 int FUNC_2 (struct ib_mad_send_wr_private*) ;

int FUNC_3(struct ib_mad_send_wr_private *VAR_5)
{
 struct ib_rmpp_mad *VAR_6;
 int VAR_7;

 VAR_6 = VAR_5->send_buf.mad;
 if (!(FUNC_0(&VAR_6->rmpp_hdr) &
       VAR_0))
  return VAR_4;

 if (VAR_6->rmpp_hdr.rmpp_type != VAR_1) {
  VAR_5->seg_num = 1;
  return VAR_3;
 }

 VAR_5->newwin = FUNC_1(VAR_5);


 VAR_5->refcount += (VAR_5->timeout == 0);
 VAR_7 = FUNC_2(VAR_5);
 if (!VAR_7)
  return VAR_2;
 return VAR_7;
}
