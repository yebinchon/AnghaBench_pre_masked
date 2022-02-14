
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ seg_count; } ;
struct ib_mad_send_wr_private {scalar_t__ last_ack; scalar_t__ status; TYPE_1__ send_buf; int timeout; } ;
struct ib_mad_send_wc {TYPE_1__* send_buf; int vendor_err; int status; } ;
struct ib_mad_recv_wc {int dummy; } ;
struct ib_mad_agent_private {int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ib_mad_send_wr_private* FUNC_0 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;
 int FUNC_1 (struct ib_mad_send_wr_private*,struct ib_mad_send_wc*) ;
 int FUNC_2 (struct ib_mad_send_wr_private*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct ib_mad_agent_private *VAR_2,
         struct ib_mad_recv_wc *VAR_3, u8 VAR_4)
{
 struct ib_mad_send_wr_private *VAR_5;
 struct ib_mad_send_wc VAR_6;
 unsigned long VAR_7;

 FUNC_3(&VAR_2->lock, VAR_7);
 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_5)
  goto out;

 if ((VAR_5->last_ack == VAR_5->send_buf.seg_count) ||
     (!VAR_5->timeout) || (VAR_5->status != VAR_1))
  goto out;

 FUNC_2(VAR_5);
 FUNC_4(&VAR_2->lock, VAR_7);

 VAR_6.status = VAR_0;
 VAR_6.vendor_err = VAR_4;
 VAR_6.send_buf = &VAR_5->send_buf;
 FUNC_1(VAR_5, &VAR_6);
 return;
out:
 FUNC_4(&VAR_2->lock, VAR_7);
}
