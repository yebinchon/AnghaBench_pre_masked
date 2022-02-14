
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siw_qp_attrs {scalar_t__ state; int flags; } ;
struct TYPE_2__ {int tx_suspend; } ;
struct siw_qp {int state_lock; TYPE_1__ tx_ctx; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_attr {int qp_access_flags; size_t qp_state; } ;
struct ib_qp {int dummy; } ;
typedef int new_attrs ;
typedef enum siw_qp_attr_mask { ____Placeholder_siw_qp_attr_mask } siw_qp_attr_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 scalar_t__* VAR_11 ;
 int * VAR_12 ;
 int FUNC_1 (struct siw_qp_attrs*,int ,int) ;
 int FUNC_2 (struct siw_qp*,char*,int ) ;
 int FUNC_3 (struct siw_qp*,struct siw_qp_attrs*,int) ;
 struct siw_qp* FUNC_4 (struct ib_qp*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct ib_qp *VAR_13, struct ib_qp_attr *VAR_14,
   int VAR_15, struct ib_udata *VAR_16)
{
 struct siw_qp_attrs VAR_17;
 enum siw_qp_attr_mask VAR_18 = 0;
 struct siw_qp *VAR_19 = FUNC_4(VAR_13);
 int VAR_20 = 0;

 if (!VAR_15)
  return 0;

 FUNC_1(&VAR_17, 0, sizeof(VAR_17));

 if (VAR_15 & VAR_3) {
  VAR_18 = VAR_5;

  if (VAR_14->qp_access_flags & VAR_1)
   VAR_17.flags |= VAR_9;
  if (VAR_14->qp_access_flags & VAR_2)
   VAR_17.flags |= VAR_10;
  if (VAR_14->qp_access_flags & VAR_0)
   VAR_17.flags |= VAR_8;
 }
 if (VAR_15 & VAR_4) {
  FUNC_2(VAR_19, "desired IB QP state: %s\n",
      VAR_12[VAR_14->qp_state]);

  VAR_17.state = VAR_11[VAR_14->qp_state];

  if (VAR_17.state > VAR_7)
   VAR_19->tx_ctx.tx_suspend = 1;

  VAR_18 |= VAR_6;
 }
 if (!VAR_18)
  goto out;

 FUNC_0(&VAR_19->state_lock);

 VAR_20 = FUNC_3(VAR_19, &VAR_17, VAR_18);

 FUNC_5(&VAR_19->state_lock);
out:
 return VAR_20;
}
