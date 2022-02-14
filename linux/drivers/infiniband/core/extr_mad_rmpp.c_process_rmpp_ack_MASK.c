
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int paylen_newwin; int seg_num; scalar_t__ rmpp_status; } ;
struct ib_rmpp_mad {TYPE_2__ rmpp_hdr; } ;
struct TYPE_7__ {int seg_count; int timeout_ms; } ;
struct ib_mad_send_wr_private {int last_ack; scalar_t__ status; int newwin; int refcount; int seg_num; TYPE_4__* mad_agent_priv; int agent_list; TYPE_3__ send_buf; int max_retries; int retries_left; scalar_t__ timeout; } ;
struct ib_mad_send_wc {TYPE_3__* send_buf; scalar_t__ vendor_err; scalar_t__ status; } ;
struct TYPE_5__ {scalar_t__ mad; } ;
struct ib_mad_recv_wc {TYPE_1__ recv_buf; } ;
struct ib_mad_agent_private {int lock; } ;
struct TYPE_8__ {int send_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*,int ) ;
 int FUNC_1 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;
 int FUNC_2 (struct ib_mad_send_wr_private*,int) ;
 int FUNC_3 (int ) ;
 struct ib_mad_send_wr_private* FUNC_4 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;
 int FUNC_5 (struct ib_mad_send_wr_private*,struct ib_mad_send_wc*) ;
 int FUNC_6 (struct ib_mad_send_wr_private*) ;
 int FUNC_7 (struct ib_mad_send_wr_private*,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*,int ) ;
 int FUNC_10 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*,int) ;
 int FUNC_11 (struct ib_mad_send_wr_private*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_14(struct ib_mad_agent_private *VAR_4,
        struct ib_mad_recv_wc *VAR_5)
{
 struct ib_mad_send_wr_private *VAR_6;
 struct ib_rmpp_mad *VAR_7;
 unsigned long VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_7 = (struct ib_rmpp_mad *)VAR_5->recv_buf.mad;
 if (VAR_7->rmpp_hdr.rmpp_status) {
  FUNC_0(VAR_4, VAR_5, VAR_0);
  FUNC_9(VAR_4, VAR_5, VAR_0);
  return;
 }

 VAR_9 = FUNC_3(VAR_7->rmpp_hdr.seg_num);
 VAR_10 = FUNC_3(VAR_7->rmpp_hdr.paylen_newwin);
 if (VAR_10 < VAR_9) {
  FUNC_0(VAR_4, VAR_5, VAR_2);
  FUNC_9(VAR_4, VAR_5, VAR_2);
  return;
 }

 FUNC_12(&VAR_4->lock, VAR_8);
 VAR_6 = FUNC_4(VAR_4, VAR_5);
 if (!VAR_6) {
  if (!VAR_9)
   FUNC_10(VAR_4, VAR_5, VAR_10);
  goto out;
 }

 if ((VAR_6->last_ack == VAR_6->send_buf.seg_count) &&
     (VAR_6->timeout)) {
  FUNC_13(&VAR_4->lock, VAR_8);
  FUNC_1(VAR_4, VAR_5);
  return;
 }

 if ((VAR_6->last_ack == VAR_6->send_buf.seg_count) ||
     (!VAR_6->timeout) || (VAR_6->status != VAR_3))
  goto out;

 if (VAR_9 > VAR_6->send_buf.seg_count ||
     VAR_9 > VAR_6->newwin) {
  FUNC_13(&VAR_4->lock, VAR_8);
  FUNC_0(VAR_4, VAR_5, VAR_1);
  FUNC_9(VAR_4, VAR_5, VAR_1);
  return;
 }

 if (VAR_10 < VAR_6->newwin || VAR_9 < VAR_6->last_ack)
  goto out;

 if (VAR_9 > VAR_6->last_ack) {
  FUNC_2(VAR_6, VAR_9);
  VAR_6->retries_left = VAR_6->max_retries;
 }
 VAR_6->newwin = VAR_10;
 if (VAR_6->last_ack == VAR_6->send_buf.seg_count) {

  if (!VAR_6->send_buf.timeout_ms) {
   struct ib_mad_send_wc VAR_12;

   FUNC_6(VAR_6);
   FUNC_13(&VAR_4->lock, VAR_8);

   VAR_12.status = VAR_3;
   VAR_12.vendor_err = 0;
   VAR_12.send_buf = &VAR_6->send_buf;
   FUNC_5(VAR_6, &VAR_12);
   return;
  }
  if (VAR_6->refcount == 1)
   FUNC_7(VAR_6,
          VAR_6->send_buf.timeout_ms);
  FUNC_13(&VAR_4->lock, VAR_8);
  FUNC_1(VAR_4, VAR_5);
  return;
 } else if (VAR_6->refcount == 1 &&
     VAR_6->seg_num < VAR_6->newwin &&
     VAR_6->seg_num < VAR_6->send_buf.seg_count) {

  VAR_11 = FUNC_11(VAR_6);
  if (VAR_11)
   goto out;

  VAR_6->refcount++;
  FUNC_8(&VAR_6->agent_list,
         &VAR_6->mad_agent_priv->send_list);
 }
out:
 FUNC_13(&VAR_4->lock, VAR_8);
}
