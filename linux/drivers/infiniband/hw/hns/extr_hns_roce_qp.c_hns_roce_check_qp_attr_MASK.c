
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp_attr {scalar_t__ port_num; scalar_t__ pkey_index; scalar_t__ max_rd_atomic; scalar_t__ max_dest_rd_atomic; } ;
struct ib_qp {int device; } ;
struct hns_roce_qp {int port; } ;
struct TYPE_2__ {scalar_t__ num_ports; scalar_t__* pkey_table_len; scalar_t__ max_qp_init_rdma; scalar_t__ max_qp_dest_rdma; } ;
struct hns_roce_dev {int ib_dev; TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hns_roce_dev*,struct hns_roce_qp*,struct ib_qp_attr*,int) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 struct hns_roce_dev* FUNC_2 (int ) ;
 struct hns_roce_qp* FUNC_3 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_4(struct ib_qp *VAR_6, struct ib_qp_attr *VAR_7,
      int VAR_8)
{
 struct hns_roce_dev *VAR_9 = FUNC_2(VAR_6->device);
 struct hns_roce_qp *VAR_10 = FUNC_3(VAR_6);
 int VAR_11;

 if ((VAR_8 & VAR_5) &&
     (VAR_7->port_num == 0 || VAR_7->port_num > VAR_9->caps.num_ports)) {
  FUNC_1(&VAR_9->ib_dev,
   "attr port_num invalid.attr->port_num=%d\n",
   VAR_7->port_num);
  return -VAR_0;
 }

 if (VAR_8 & VAR_4) {
  VAR_11 = VAR_8 & VAR_5 ? (VAR_7->port_num - 1) : VAR_10->port;
  if (VAR_7->pkey_index >= VAR_9->caps.pkey_table_len[VAR_11]) {
   FUNC_1(&VAR_9->ib_dev,
    "attr pkey_index invalid.attr->pkey_index=%d\n",
    VAR_7->pkey_index);
   return -VAR_0;
  }
 }

 if (VAR_8 & VAR_2 &&
     VAR_7->max_rd_atomic > VAR_9->caps.max_qp_init_rdma) {
  FUNC_1(&VAR_9->ib_dev,
   "attr max_rd_atomic invalid.attr->max_rd_atomic=%d\n",
   VAR_7->max_rd_atomic);
  return -VAR_0;
 }

 if (VAR_8 & VAR_1 &&
     VAR_7->max_dest_rd_atomic > VAR_9->caps.max_qp_dest_rdma) {
  FUNC_1(&VAR_9->ib_dev,
   "attr max_dest_rd_atomic invalid.attr->max_dest_rd_atomic=%d\n",
   VAR_7->max_dest_rd_atomic);
  return -VAR_0;
 }

 if (VAR_8 & VAR_3)
  return FUNC_0(VAR_9, VAR_10, VAR_7, VAR_8);

 return 0;
}
