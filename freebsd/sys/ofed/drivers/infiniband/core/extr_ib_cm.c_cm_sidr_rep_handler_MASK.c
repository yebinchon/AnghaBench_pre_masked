
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cm_work {TYPE_1__* mad_recv_wc; } ;
struct cm_sidr_rep_msg {int request_id; } ;
struct TYPE_9__ {TYPE_3__* port; } ;
struct TYPE_7__ {scalar_t__ state; } ;
struct cm_id_private {int lock; int msg; TYPE_4__ av; TYPE_2__ id; } ;
struct TYPE_10__ {scalar_t__ mad; } ;
struct TYPE_8__ {int mad_agent; } ;
struct TYPE_6__ {TYPE_5__ recv_buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct cm_id_private* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct cm_id_private*) ;
 int FUNC_2 (struct cm_work*) ;
 int FUNC_3 (struct cm_id_private*,struct cm_work*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct cm_work *VAR_3)
{
 struct cm_sidr_rep_msg *VAR_4;
 struct cm_id_private *VAR_5;

 VAR_4 = (struct cm_sidr_rep_msg *)
    VAR_3->mad_recv_wc->recv_buf.mad;
 VAR_5 = FUNC_0(VAR_4->request_id, 0);
 if (!VAR_5)
  return -VAR_0;

 FUNC_5(&VAR_5->lock);
 if (VAR_5->id.state != VAR_2) {
  FUNC_6(&VAR_5->lock);
  goto out;
 }
 VAR_5->id.state = VAR_1;
 FUNC_4(VAR_5->av.port->mad_agent, VAR_5->msg);
 FUNC_6(&VAR_5->lock);

 FUNC_2(VAR_3);
 FUNC_3(VAR_5, VAR_3);
 return 0;
out:
 FUNC_1(VAR_5);
 return -VAR_0;
}
