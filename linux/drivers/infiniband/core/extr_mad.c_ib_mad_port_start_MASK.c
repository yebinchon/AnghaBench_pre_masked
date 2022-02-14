
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ib_qp_attr {int sq_psn; int qp_state; int qkey; scalar_t__ pkey_index; } ;
struct ib_qp {scalar_t__ qp_num; } ;
struct ib_mad_port_private {TYPE_2__* device; TYPE_1__* qp_info; int cq; int port_num; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct ib_qp* qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (TYPE_2__*,int ,int ,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (struct ib_qp*,struct ib_qp_attr*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ib_qp_attr*) ;
 struct ib_qp_attr* FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct ib_mad_port_private *VAR_14)
{
 int VAR_15, VAR_16;
 struct ib_qp_attr *VAR_17;
 struct ib_qp *VAR_18;
 u16 VAR_19;

 VAR_17 = FUNC_6(sizeof *VAR_17, VAR_1);
 if (!VAR_17)
  return -VAR_0;

 VAR_15 = FUNC_1(VAR_14->device, VAR_14->port_num,
      VAR_3, &VAR_19);
 if (VAR_15)
  VAR_19 = 0;

 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
  VAR_18 = VAR_14->qp_info[VAR_16].qp;
  if (!VAR_18)
   continue;





  VAR_17->qp_state = VAR_7;
  VAR_17->pkey_index = VAR_19;
  VAR_17->qkey = (VAR_18->qp_num == 0) ? 0 : VAR_6;
  VAR_15 = FUNC_3(VAR_18, VAR_17, VAR_13 |
          VAR_10 | VAR_11);
  if (VAR_15) {
   FUNC_0(&VAR_14->device->dev,
    "Couldn't change QP%d state to INIT: %d\n",
    VAR_16, VAR_15);
   goto out;
  }

  VAR_17->qp_state = VAR_8;
  VAR_15 = FUNC_3(VAR_18, VAR_17, VAR_13);
  if (VAR_15) {
   FUNC_0(&VAR_14->device->dev,
    "Couldn't change QP%d state to RTR: %d\n",
    VAR_16, VAR_15);
   goto out;
  }

  VAR_17->qp_state = VAR_9;
  VAR_17->sq_psn = VAR_5;
  VAR_15 = FUNC_3(VAR_18, VAR_17, VAR_13 | VAR_12);
  if (VAR_15) {
   FUNC_0(&VAR_14->device->dev,
    "Couldn't change QP%d state to RTS: %d\n",
    VAR_16, VAR_15);
   goto out;
  }
 }

 VAR_15 = FUNC_4(VAR_14->cq, VAR_2);
 if (VAR_15) {
  FUNC_0(&VAR_14->device->dev,
   "Failed to request completion notification: %d\n",
   VAR_15);
  goto out;
 }

 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
  if (!VAR_14->qp_info[VAR_16].qp)
   continue;

  VAR_15 = FUNC_2(&VAR_14->qp_info[VAR_16], ((void*)0));
  if (VAR_15) {
   FUNC_0(&VAR_14->device->dev,
    "Couldn't post receive WRs\n");
   goto out;
  }
 }
out:
 FUNC_5(VAR_17);
 return VAR_15;
}
