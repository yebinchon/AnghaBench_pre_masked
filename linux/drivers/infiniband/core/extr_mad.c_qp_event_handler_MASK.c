
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_mad_qp_info {TYPE_3__* qp; TYPE_2__* port_priv; } ;
struct ib_event {int event; } ;
struct TYPE_6__ {int qp_num; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ib_event *VAR_0, void *VAR_1)
{
 struct ib_mad_qp_info *VAR_2 = VAR_1;


 FUNC_0(&VAR_2->port_priv->device->dev,
  "Fatal error (%d) on MAD QP (%d)\n",
  VAR_0->event, VAR_2->qp->qp_num);
}
