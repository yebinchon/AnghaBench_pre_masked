
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i40iw_upload_context_info {int freeze_qp; int raw_format; int qp_type; int qp_id; int buf_pa; } ;
struct i40iw_sc_dev {struct i40iw_sc_cqp* cqp; } ;
struct i40iw_sc_cqp {int polarity; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct i40iw_sc_dev*,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(
     struct i40iw_sc_dev *VAR_10,
     struct i40iw_upload_context_info *VAR_11,
     u64 VAR_12,
     bool VAR_13)
{
 u64 *VAR_14;
 struct i40iw_sc_cqp *VAR_15;
 u64 VAR_16;

 VAR_15 = VAR_10->cqp;
 VAR_14 = FUNC_3(VAR_15, VAR_12);
 if (!VAR_14)
  return VAR_9;
 FUNC_5(VAR_14, 16, VAR_11->buf_pa);

 VAR_16 = FUNC_0(VAR_11->qp_id, VAR_2) |
   FUNC_0(VAR_6, VAR_0) |
   FUNC_0(VAR_11->qp_type, VAR_3) |
   FUNC_0(VAR_11->raw_format, VAR_4) |
   FUNC_0(VAR_11->freeze_qp, VAR_1) |
   FUNC_0(VAR_15->polarity, VAR_5);

 FUNC_2(VAR_14, VAR_16);

 FUNC_1(VAR_10, VAR_8, "QP_UPLOAD_CTX WQE",
   VAR_14, VAR_7 * 8);

 if (VAR_13)
  FUNC_4(VAR_15);
 return 0;
}
