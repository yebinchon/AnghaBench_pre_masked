
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct rdma_dev_addr {int dummy; } ;
struct TYPE_4__ {struct rdma_dev_addr dev_addr; } ;
struct TYPE_5__ {TYPE_1__ addr; } ;
struct TYPE_6__ {scalar_t__ qp_type; int port_num; int device; TYPE_2__ route; } ;
struct rdma_id_private {int qkey; TYPE_3__ id; } ;
struct ib_qp_attr {scalar_t__ qp_access_flags; int qkey; int port_num; int pkey_index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rdma_id_private*,int ) ;
 int FUNC_1 (struct rdma_dev_addr*) ;
 int FUNC_2 (int ,int ,int,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct rdma_id_private *VAR_6,
          struct ib_qp_attr *VAR_7, int *VAR_8)
{
 struct rdma_dev_addr *VAR_9 = &VAR_6->id.route.addr.dev_addr;
 int VAR_10;
 u16 VAR_11;

 if (FUNC_3(VAR_6->id.device, VAR_6->id.port_num))
  VAR_11 = 0xffff;
 else
  VAR_11 = FUNC_1(VAR_9);

 VAR_10 = FUNC_2(VAR_6->id.device, VAR_6->id.port_num,
      VAR_11, &VAR_7->pkey_index);
 if (VAR_10)
  return VAR_10;

 VAR_7->port_num = VAR_6->id.port_num;
 *VAR_8 = VAR_5 | VAR_2 | VAR_3;

 if (VAR_6->id.qp_type == VAR_0) {
  VAR_10 = FUNC_0(VAR_6, 0);
  if (VAR_10)
   return VAR_10;

  VAR_7->qkey = VAR_6->qkey;
  *VAR_8 |= VAR_4;
 } else {
  VAR_7->qp_access_flags = 0;
  *VAR_8 |= VAR_1;
 }
 return 0;
}
