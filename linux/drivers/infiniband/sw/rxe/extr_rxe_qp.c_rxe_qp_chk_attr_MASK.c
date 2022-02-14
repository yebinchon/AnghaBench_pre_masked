
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_5__ {int qp_state; } ;
struct rxe_qp {int srq; TYPE_2__ req; TYPE_1__ attr; } ;
struct TYPE_7__ {int max_mtu; } ;
struct rxe_port {TYPE_3__ attr; } ;
struct TYPE_8__ {int max_qp_rd_atom; } ;
struct rxe_dev {TYPE_4__ attr; struct rxe_port port; int ib_dev; } ;
struct ib_qp_attr {int cur_qp_state; int qp_state; int port_num; int alt_port_num; int alt_timeout; int path_mtu; int timeout; int max_rd_atomic; int alt_ah_attr; int ah_attr; int cap; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
typedef enum ib_mtu { ____Placeholder_ib_mtu } ib_mtu ;


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
 scalar_t__ VAR_12 ;
 int FUNC_0 (int,int,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct rxe_qp*) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (struct rxe_dev*,int *) ;
 scalar_t__ FUNC_7 (struct rxe_dev*,int *,int) ;

int FUNC_8(struct rxe_dev *VAR_13, struct rxe_qp *VAR_14,
      struct ib_qp_attr *VAR_15, int VAR_16)
{
 enum ib_qp_state VAR_17 = (VAR_16 & VAR_6) ?
     VAR_15->cur_qp_state : VAR_14->attr.qp_state;
 enum ib_qp_state VAR_18 = (VAR_16 & VAR_10) ?
     VAR_15->qp_state : VAR_17;

 if (!FUNC_0(VAR_17, VAR_18, FUNC_4(VAR_14), VAR_16)) {
  FUNC_3("invalid mask or state for qp\n");
  goto err1;
 }

 if (VAR_16 & VAR_10) {
  if (VAR_17 == VAR_2) {
   if (VAR_14->req.state == VAR_12 &&
       VAR_18 != VAR_1)
    goto err1;
  }
 }

 if (VAR_16 & VAR_9) {
  if (!FUNC_5(&VAR_13->ib_dev, VAR_15->port_num)) {
   FUNC_3("invalid port %d\n", VAR_15->port_num);
   goto err1;
  }
 }

 if (VAR_16 & VAR_5 && FUNC_7(VAR_13, &VAR_15->cap, !!VAR_14->srq))
  goto err1;

 if (VAR_16 & VAR_4 && FUNC_6(VAR_13, &VAR_15->ah_attr))
  goto err1;

 if (VAR_16 & VAR_3) {
  if (FUNC_6(VAR_13, &VAR_15->alt_ah_attr))
   goto err1;
  if (!FUNC_5(&VAR_13->ib_dev, VAR_15->alt_port_num)) {
   FUNC_3("invalid alt port %d\n", VAR_15->alt_port_num);
   goto err1;
  }
  if (VAR_15->alt_timeout > 31) {
   FUNC_3("invalid QP alt timeout %d > 31\n",
    VAR_15->alt_timeout);
   goto err1;
  }
 }

 if (VAR_16 & VAR_8) {
  struct rxe_port *VAR_19 = &VAR_13->port;

  enum ib_mtu VAR_20 = VAR_19->attr.max_mtu;
  enum ib_mtu VAR_21 = VAR_15->path_mtu;

  if (VAR_21 > VAR_20) {
   FUNC_2("invalid mtu (%d) > (%d)\n",
     FUNC_1(VAR_21),
     FUNC_1(VAR_20));
   goto err1;
  }
 }

 if (VAR_16 & VAR_7) {
  if (VAR_15->max_rd_atomic > VAR_13->attr.max_qp_rd_atom) {
   FUNC_3("invalid max_rd_atomic %d > %d\n",
    VAR_15->max_rd_atomic,
    VAR_13->attr.max_qp_rd_atom);
   goto err1;
  }
 }

 if (VAR_16 & VAR_11) {
  if (VAR_15->timeout > 31) {
   FUNC_3("invalid QP timeout %d > 31\n",
    VAR_15->timeout);
   goto err1;
  }
 }

 return 0;

err1:
 return -VAR_0;
}
