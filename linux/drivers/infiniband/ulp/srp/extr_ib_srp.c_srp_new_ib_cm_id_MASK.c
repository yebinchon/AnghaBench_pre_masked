
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int service_id; int pkey; int orig_dgid; } ;
struct srp_target_port {TYPE_5__ ib_cm; int sgid; TYPE_2__* srp_host; } ;
struct TYPE_8__ {int service_id; int pkey; int dgid; int sgid; int rec_type; } ;
struct TYPE_9__ {TYPE_3__ path; struct ib_cm_id* cm_id; } ;
struct srp_rdma_ch {TYPE_4__ ib_cm; struct srp_target_port* target; } ;
struct ib_cm_id {int dummy; } ;
struct TYPE_7__ {int port; TYPE_1__* srp_dev; } ;
struct TYPE_6__ {int dev; } ;


 scalar_t__ FUNC_0 (struct ib_cm_id*) ;
 int FUNC_1 (struct ib_cm_id*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ib_cm_id* FUNC_2 (int ,int ,struct srp_rdma_ch*) ;
 int FUNC_3 (struct ib_cm_id*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct srp_rdma_ch *VAR_3)
{
 struct srp_target_port *VAR_4 = VAR_3->target;
 struct ib_cm_id *VAR_5;

 VAR_5 = FUNC_2(VAR_4->srp_host->srp_dev->dev,
        VAR_2, VAR_3);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 if (VAR_3->ib_cm.cm_id)
  FUNC_3(VAR_3->ib_cm.cm_id);
 VAR_3->ib_cm.cm_id = VAR_5;
 if (FUNC_4(VAR_4->srp_host->srp_dev->dev,
       VAR_4->srp_host->port))
  VAR_3->ib_cm.path.rec_type = VAR_1;
 else
  VAR_3->ib_cm.path.rec_type = VAR_0;
 VAR_3->ib_cm.path.sgid = VAR_4->sgid;
 VAR_3->ib_cm.path.dgid = VAR_4->ib_cm.orig_dgid;
 VAR_3->ib_cm.path.pkey = VAR_4->ib_cm.pkey;
 VAR_3->ib_cm.path.service_id = VAR_4->ib_cm.service_id;

 return 0;
}
