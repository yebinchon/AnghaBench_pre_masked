
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_qp_init_attr {int dummy; } ;
struct ib_qp_attr {int dummy; } ;
struct ib_qp {int dummy; } ;
struct hns_roce_qp {int doorbell_qpn; } ;


 int FUNC_0 (struct ib_qp*,struct ib_qp_attr*,int,struct ib_qp_init_attr*) ;
 int FUNC_1 (struct ib_qp*,struct ib_qp_attr*,int,struct ib_qp_init_attr*) ;
 struct hns_roce_qp* FUNC_2 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_3(struct ib_qp *VAR_0, struct ib_qp_attr *VAR_1,
    int VAR_2,
    struct ib_qp_init_attr *VAR_3)
{
 struct hns_roce_qp *VAR_4 = FUNC_2(VAR_0);

 return VAR_4->doorbell_qpn <= 1 ?
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3) :
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
