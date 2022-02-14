
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp_attr {size_t port_num; int max_dest_rd_atomic; int qp_access_flags; } ;
struct ib_qp {int device; } ;
struct hns_roce_qp {size_t port; int phy_port; int resp_depth; int atomic_rd_en; } ;
struct TYPE_2__ {int * phy_port; } ;
struct hns_roce_dev {TYPE_1__ iboe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hns_roce_dev* FUNC_0 (int ) ;
 struct hns_roce_qp* FUNC_1 (struct ib_qp*) ;

__attribute__((used)) static void FUNC_2(struct ib_qp *VAR_3,
       const struct ib_qp_attr *VAR_4,
       int VAR_5)
{
 struct hns_roce_dev *VAR_6 = FUNC_0(VAR_3->device);
 struct hns_roce_qp *VAR_7 = FUNC_1(VAR_3);

 if (VAR_5 & VAR_0)
  VAR_7->atomic_rd_en = VAR_4->qp_access_flags;

 if (VAR_5 & VAR_1)
  VAR_7->resp_depth = VAR_4->max_dest_rd_atomic;
 if (VAR_5 & VAR_2) {
  VAR_7->port = VAR_4->port_num - 1;
  VAR_7->phy_port = VAR_6->iboe.phy_port[VAR_7->port];
 }
}
