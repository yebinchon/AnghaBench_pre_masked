
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ib_mad_send_buf {scalar_t__ mad; } ;
struct TYPE_3__ {scalar_t__ mad; } ;
struct ib_mad_recv_wc {TYPE_1__ recv_buf; } ;
struct TYPE_4__ {int tid; } ;
struct cm_rej_msg {int ari; int reason; int remote_comm_id; int local_comm_id; TYPE_2__ hdr; } ;
struct cm_port {int dummy; } ;
typedef enum ib_cm_rej_reason { ____Placeholder_ib_cm_rej_reason } ib_cm_rej_reason ;
typedef enum cm_msg_response { ____Placeholder_cm_msg_response } cm_msg_response ;


 int VAR_0 ;
 int FUNC_0 (struct cm_port*,struct ib_mad_recv_wc*,struct ib_mad_send_buf**) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (struct ib_mad_send_buf*) ;
 int FUNC_3 (struct cm_rej_msg*,int) ;
 int FUNC_4 (struct cm_rej_msg*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ib_mad_send_buf*,int *) ;
 int FUNC_7 (int ,void*,int ) ;

__attribute__((used)) static int FUNC_8(struct cm_port *VAR_1,
   struct ib_mad_recv_wc *VAR_2,
   enum ib_cm_rej_reason VAR_3,
   enum cm_msg_response VAR_4,
   void *VAR_5, u8 VAR_6)
{
 struct ib_mad_send_buf *VAR_7 = ((void*)0);
 struct cm_rej_msg *VAR_8, *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_1, VAR_2, &VAR_7);
 if (VAR_10)
  return VAR_10;


 VAR_9 = (struct cm_rej_msg *) VAR_2->recv_buf.mad;
 VAR_8 = (struct cm_rej_msg *) VAR_7->mad;

 FUNC_1(&VAR_8->hdr, VAR_0, VAR_9->hdr.tid);
 VAR_8->remote_comm_id = VAR_9->local_comm_id;
 VAR_8->local_comm_id = VAR_9->remote_comm_id;
 FUNC_3(VAR_8, VAR_4);
 VAR_8->reason = FUNC_5(VAR_3);

 if (VAR_5 && VAR_6) {
  FUNC_4(VAR_8, VAR_6);
  FUNC_7(VAR_8->ari, VAR_5, VAR_6);
 }

 VAR_10 = FUNC_6(VAR_7, ((void*)0));
 if (VAR_10)
  FUNC_2(VAR_7);

 return VAR_10;
}
