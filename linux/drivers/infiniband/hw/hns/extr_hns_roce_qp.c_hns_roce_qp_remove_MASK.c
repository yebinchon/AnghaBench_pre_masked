
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xarray {int dummy; } ;
struct hns_roce_qp {int qpn; } ;
struct TYPE_2__ {int num_qps; } ;
struct hns_roce_dev {TYPE_1__ caps; struct xarray qp_table_xa; } ;


 int FUNC_0 (struct xarray*,int) ;
 int FUNC_1 (struct xarray*,unsigned long) ;
 int FUNC_2 (struct xarray*,unsigned long) ;

void FUNC_3(struct hns_roce_dev *VAR_0, struct hns_roce_qp *VAR_1)
{
 struct xarray *VAR_2 = &VAR_0->qp_table_xa;
 unsigned long VAR_3;

 FUNC_1(VAR_2, VAR_3);
 FUNC_0(VAR_2, VAR_1->qpn & (VAR_0->caps.num_qps - 1));
 FUNC_2(VAR_2, VAR_3);
}
