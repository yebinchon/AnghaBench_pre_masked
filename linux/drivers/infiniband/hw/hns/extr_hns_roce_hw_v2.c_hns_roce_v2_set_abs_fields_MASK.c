
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_qp_attr {int dummy; } ;
struct ib_qp {int device; } ;
struct hns_roce_v2_qp_context {int dummy; } ;
struct hns_roce_dev {int dev; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct hns_roce_v2_qp_context*,int ,int) ;
 int FUNC_3 (struct ib_qp*,struct ib_qp_attr const*,int,struct hns_roce_v2_qp_context*,struct hns_roce_v2_qp_context*) ;
 int FUNC_4 (struct ib_qp*,struct ib_qp_attr const*,int,struct hns_roce_v2_qp_context*,struct hns_roce_v2_qp_context*) ;
 int FUNC_5 (struct ib_qp*,struct ib_qp_attr const*,int,struct hns_roce_v2_qp_context*,struct hns_roce_v2_qp_context*) ;
 int FUNC_6 (struct ib_qp*,struct ib_qp_attr const*,int,struct hns_roce_v2_qp_context*,struct hns_roce_v2_qp_context*) ;
 struct hns_roce_dev* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ib_qp *VAR_5,
          const struct ib_qp_attr *VAR_6,
          int VAR_7,
          enum ib_qp_state VAR_8,
          enum ib_qp_state VAR_9,
          struct hns_roce_v2_qp_context *VAR_10,
          struct hns_roce_v2_qp_context *VAR_11)
{
 struct hns_roce_dev *VAR_12 = FUNC_7(VAR_5->device);
 int VAR_13 = 0;

 if (VAR_8 == VAR_2 && VAR_9 == VAR_1) {
  FUNC_2(VAR_11, 0, sizeof(*VAR_11));
  FUNC_5(VAR_5, VAR_6, VAR_7, VAR_10,
     VAR_11);
 } else if (VAR_8 == VAR_1 && VAR_9 == VAR_1) {
  FUNC_3(VAR_5, VAR_6, VAR_7, VAR_10,
           VAR_11);
 } else if (VAR_8 == VAR_1 && VAR_9 == VAR_3) {
  VAR_13 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_10,
         VAR_11);
  if (VAR_13)
   goto out;
 } else if (VAR_8 == VAR_3 && VAR_9 == VAR_4) {
  VAR_13 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_10,
        VAR_11);
  if (VAR_13)
   goto out;
 } else if (FUNC_1(VAR_8, VAR_9)) {

  ;
 } else {
  FUNC_0(VAR_12->dev, "Illegal state for QP!\n");
  VAR_13 = -VAR_0;
  goto out;
 }

out:
 return VAR_13;
}
