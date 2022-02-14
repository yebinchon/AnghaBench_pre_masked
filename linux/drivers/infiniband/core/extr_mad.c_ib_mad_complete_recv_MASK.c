
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ib_rmpp_mad {int rmpp_hdr; } ;
struct ib_mad_send_wr_private {int send_buf; } ;
struct ib_mad_send_wc {int * send_buf; scalar_t__ vendor_err; int status; } ;
struct TYPE_11__ {TYPE_2__* mad; int list; } ;
struct ib_mad_recv_wc {TYPE_3__ recv_buf; int rmpp_list; TYPE_1__* wc; } ;
struct TYPE_12__ {int (* recv_handler ) (TYPE_4__*,int *,struct ib_mad_recv_wc*) ;} ;
struct ib_mad_agent_private {TYPE_4__ agent; int refcount; int lock; } ;
struct TYPE_13__ {int mgmt_class; } ;
struct TYPE_10__ {TYPE_7__ mad_hdr; } ;
struct TYPE_9__ {int pkey_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ib_mad_agent_private*) ;
 struct ib_mad_send_wr_private* FUNC_3 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;
 int FUNC_4 (struct ib_mad_recv_wc*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct ib_mad_send_wr_private*,struct ib_mad_send_wc*) ;
 int FUNC_8 (struct ib_mad_agent_private*,int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (struct ib_mad_send_wr_private*) ;
 struct ib_mad_recv_wc* FUNC_11 (struct ib_mad_agent_private*,struct ib_mad_recv_wc*) ;
 scalar_t__ FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (TYPE_4__*,int *,struct ib_mad_recv_wc*) ;
 int FUNC_17 (TYPE_4__*,int *,struct ib_mad_recv_wc*) ;
 int FUNC_18 (TYPE_4__*,int *,struct ib_mad_recv_wc*) ;

__attribute__((used)) static void FUNC_19(struct ib_mad_agent_private *VAR_2,
     struct ib_mad_recv_wc *VAR_3)
{
 struct ib_mad_send_wr_private *VAR_4;
 struct ib_mad_send_wc VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 FUNC_0(&VAR_3->rmpp_list);
 VAR_7 = FUNC_8(VAR_2,
          VAR_3->wc->pkey_index);
 if (VAR_7) {
  FUNC_4(VAR_3);
  FUNC_2(VAR_2);
  return;
 }

 FUNC_13(&VAR_3->recv_buf.list, &VAR_3->rmpp_list);
 if (FUNC_9(&VAR_2->agent)) {
  VAR_3 = FUNC_11(VAR_2,
            VAR_3);
  if (!VAR_3) {
   FUNC_2(VAR_2);
   return;
  }
 }


 if (FUNC_12(&VAR_3->recv_buf.mad->mad_hdr)) {
  FUNC_14(&VAR_2->lock, VAR_6);
  VAR_4 = FUNC_3(VAR_2, VAR_3);
  if (!VAR_4) {
   FUNC_15(&VAR_2->lock, VAR_6);
   if (!FUNC_9(&VAR_2->agent)
      && FUNC_6(VAR_3->recv_buf.mad->mad_hdr.mgmt_class)
      && (FUNC_5(&((struct ib_rmpp_mad *)VAR_3->recv_buf.mad)->rmpp_hdr)
     & VAR_0)) {



    VAR_2->agent.recv_handler(
      &VAR_2->agent, ((void*)0),
      VAR_3);
    FUNC_1(&VAR_2->refcount);
   } else {


    FUNC_4(VAR_3);
    FUNC_2(VAR_2);
    return;
   }
  } else {
   FUNC_10(VAR_4);
   FUNC_15(&VAR_2->lock, VAR_6);


   VAR_2->agent.recv_handler(
     &VAR_2->agent,
     &VAR_4->send_buf,
     VAR_3);
   FUNC_1(&VAR_2->refcount);

   VAR_5.status = VAR_1;
   VAR_5.vendor_err = 0;
   VAR_5.send_buf = &VAR_4->send_buf;
   FUNC_7(VAR_4, &VAR_5);
  }
 } else {
  VAR_2->agent.recv_handler(&VAR_2->agent, ((void*)0),
         VAR_3);
  FUNC_2(VAR_2);
 }

 return;
}
