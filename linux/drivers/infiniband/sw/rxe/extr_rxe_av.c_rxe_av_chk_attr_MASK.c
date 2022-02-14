
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ gid_tbl_len; } ;
struct rxe_port {TYPE_1__ attr; } ;
struct rxe_dev {struct rxe_port port; } ;
struct rdma_ah_attr {int dummy; } ;
struct TYPE_4__ {scalar_t__ sgid_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct rdma_ah_attr*) ;
 TYPE_2__* FUNC_2 (struct rdma_ah_attr*) ;

int FUNC_3(struct rxe_dev *VAR_2, struct rdma_ah_attr *VAR_3)
{
 struct rxe_port *VAR_4;

 VAR_4 = &VAR_2->port;

 if (FUNC_1(VAR_3) & VAR_1) {
  u8 VAR_5 = FUNC_2(VAR_3)->sgid_index;

  if (VAR_5 > VAR_4->attr.gid_tbl_len) {
   FUNC_0("invalid sgid index = %d\n", VAR_5);
   return -VAR_0;
  }
 }

 return 0;
}
