
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int (* cm_handler ) (TYPE_3__*,struct iw_cm_event*) ;TYPE_2__* device; int remote_addr; int local_addr; int m_remote_addr; int m_local_addr; } ;
struct iwcm_id_private {scalar_t__ state; int connect_wait; TYPE_3__ id; int lock; struct ib_qp* qp; int flags; } ;
struct iw_cm_event {scalar_t__ status; int private_data; scalar_t__ private_data_len; int remote_addr; int local_addr; } ;
struct ib_qp {int dummy; } ;
struct TYPE_4__ {int (* iw_rem_ref ) (struct ib_qp*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct ib_qp*) ;
 int FUNC_6 (TYPE_3__*,struct iw_cm_event*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct iwcm_id_private *VAR_4,
          struct iw_cm_event *VAR_5)
{
 struct ib_qp *VAR_6 = ((void*)0);
 unsigned long VAR_7;
 int VAR_8;

 FUNC_3(&VAR_4->lock, VAR_7);




 FUNC_1(VAR_0, &VAR_4->flags);
 FUNC_0(VAR_4->state != VAR_1);
 if (VAR_5->status == 0) {
  VAR_4->id.m_local_addr = VAR_5->local_addr;
  VAR_4->id.m_remote_addr = VAR_5->remote_addr;
  VAR_5->local_addr = VAR_4->id.local_addr;
  VAR_5->remote_addr = VAR_4->id.remote_addr;
  VAR_4->state = VAR_2;
 } else {

  VAR_6 = VAR_4->qp;
  VAR_4->qp = ((void*)0);
  VAR_4->state = VAR_3;
 }
 FUNC_4(&VAR_4->lock, VAR_7);
 if (VAR_6)
  VAR_4->id.device->ops.iw_rem_ref(VAR_6);
 VAR_8 = VAR_4->id.cm_handler(&VAR_4->id, VAR_5);

 if (VAR_5->private_data_len)
  FUNC_2(VAR_5->private_data);


 FUNC_7(&VAR_4->connect_wait);

 return VAR_8;
}
