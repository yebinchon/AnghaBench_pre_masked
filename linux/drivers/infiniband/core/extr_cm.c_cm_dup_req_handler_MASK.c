
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_mad_send_buf {scalar_t__ mad; } ;
struct cm_work {int mad_recv_wc; TYPE_3__* port; } ;
struct cm_rej_msg {int dummy; } ;
struct cm_mra_msg {int dummy; } ;
struct TYPE_5__ {int state; } ;
struct cm_id_private {int lock; int private_data_len; int private_data; int service_timeout; TYPE_2__ id; } ;
struct TYPE_6__ {TYPE_1__* counter_group; } ;
struct TYPE_4__ {int * counter; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int ,struct ib_mad_send_buf**) ;
 int FUNC_2 (struct cm_mra_msg*,struct cm_id_private*,int ,int ,int ,int ) ;
 int FUNC_3 (struct cm_rej_msg*,struct cm_id_private*,int ,int *,int ,int *,int ) ;
 int FUNC_4 (struct ib_mad_send_buf*) ;
 int FUNC_5 (struct ib_mad_send_buf*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct cm_work *VAR_5,
          struct cm_id_private *VAR_6)
{
 struct ib_mad_send_buf *VAR_7 = ((void*)0);
 int VAR_8;

 FUNC_0(&VAR_5->port->counter_group[VAR_1].
   counter[VAR_2]);


 if (VAR_6->id.state == VAR_4)
  return;

 VAR_8 = FUNC_1(VAR_5->port, VAR_5->mad_recv_wc, &VAR_7);
 if (VAR_8)
  return;

 FUNC_6(&VAR_6->lock);
 switch (VAR_6->id.state) {
 case 129:
  FUNC_2((struct cm_mra_msg *) VAR_7->mad, VAR_6,
         VAR_0, VAR_6->service_timeout,
         VAR_6->private_data,
         VAR_6->private_data_len);
  break;
 case 128:
  FUNC_3((struct cm_rej_msg *) VAR_7->mad, VAR_6,
         VAR_3, ((void*)0), 0, ((void*)0), 0);
  break;
 default:
  goto unlock;
 }
 FUNC_7(&VAR_6->lock);

 VAR_8 = FUNC_5(VAR_7, ((void*)0));
 if (VAR_8)
  goto free;
 return;

unlock: FUNC_7(&VAR_6->lock);
free: FUNC_4(VAR_7);
}
