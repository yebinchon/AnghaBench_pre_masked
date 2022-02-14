
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int qp_id; } ;
struct i40iw_sc_qp {int flush_rq; int flush_sq; TYPE_3__ qp_uk; TYPE_2__* pd; } ;
struct i40iw_sc_cqp {int polarity; int dev; } ;
struct i40iw_qp_flush_info {int userflushcode; int rq_minor_code; int rq_major_code; int sq_minor_code; int sq_major_code; int generate_ae; int ae_code; int ae_source; scalar_t__ sq; scalar_t__ rq; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {struct i40iw_sc_cqp* cqp; } ;


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
 int VAR_14 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(
    struct i40iw_sc_qp *VAR_15,
    struct i40iw_qp_flush_info *VAR_16,
    u64 VAR_17,
    bool VAR_18)
{
 u64 VAR_19 = 0;
 u64 *VAR_20;
 struct i40iw_sc_cqp *VAR_21;
 u64 VAR_22;
 bool VAR_23 = 0, VAR_24 = 0;

 if (VAR_16->rq && !VAR_15->flush_rq)
  VAR_24 = 1;

 if (VAR_16->sq && !VAR_15->flush_sq)
  VAR_23 = 1;

 VAR_15->flush_sq |= VAR_23;
 VAR_15->flush_rq |= VAR_24;
 if (!VAR_23 && !VAR_24)
  return 0;

 VAR_21 = VAR_15->pd->dev->cqp;
 VAR_20 = FUNC_3(VAR_21, VAR_17);
 if (!VAR_20)
  return VAR_14;
 if (VAR_16->userflushcode) {
  if (VAR_24) {
   VAR_19 |= FUNC_0(VAR_16->rq_minor_code, VAR_5) |
    FUNC_0(VAR_16->rq_major_code, VAR_4);
  }
  if (VAR_23) {
   VAR_19 |= FUNC_0(VAR_16->sq_minor_code, VAR_7) |
    FUNC_0(VAR_16->sq_major_code, VAR_6);
  }
 }
 FUNC_5(VAR_20, 16, VAR_19);

 VAR_19 = (VAR_16->generate_ae) ?
  VAR_16->ae_code | FUNC_0(VAR_16->ae_source, VAR_0) : 0;

 FUNC_5(VAR_20, 8, VAR_19);

 VAR_22 = VAR_15->qp_uk.qp_id |
   FUNC_0(VAR_11, VAR_9) |
   FUNC_0(VAR_16->generate_ae, VAR_3) |
   FUNC_0(VAR_16->userflushcode, VAR_8) |
   FUNC_0(VAR_23, VAR_2) |
   FUNC_0(VAR_24, VAR_1) |
   FUNC_0(VAR_21->polarity, VAR_10);

 FUNC_2(VAR_20, VAR_22);

 FUNC_1(VAR_21->dev, VAR_13, "QP_FLUSH WQE",
   VAR_20, VAR_12 * 8);

 if (VAR_18)
  FUNC_4(VAR_21);
 return 0;
}
