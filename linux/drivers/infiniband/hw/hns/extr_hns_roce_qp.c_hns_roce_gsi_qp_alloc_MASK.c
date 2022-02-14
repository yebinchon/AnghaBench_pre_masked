
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xarray {int dummy; } ;
struct hns_roce_qp {unsigned long qpn; int free; int refcount; } ;
struct TYPE_2__ {int num_qps; } ;
struct hns_roce_dev {int dev; TYPE_1__ caps; struct xarray qp_table_xa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct xarray*,int,struct hns_roce_qp*,int ) ;

__attribute__((used)) static int FUNC_5(struct hns_roce_dev *VAR_2, unsigned long VAR_3,
     struct hns_roce_qp *VAR_4)
{
 struct xarray *VAR_5 = &VAR_2->qp_table_xa;
 int VAR_6;

 if (!VAR_3)
  return -VAR_0;

 VAR_4->qpn = VAR_3;
 FUNC_0(&VAR_4->refcount, 1);
 FUNC_2(&VAR_4->free);

 VAR_6 = FUNC_3(FUNC_4(VAR_5, VAR_4->qpn & (VAR_2->caps.num_qps - 1),
    VAR_4, VAR_1));
 if (VAR_6)
  FUNC_1(VAR_2->dev, "QPC xa_store failed\n");

 return VAR_6;
}
