
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int net; } ;
struct TYPE_6__ {TYPE_1__ dev_addr; } ;
struct TYPE_7__ {TYPE_2__ addr; } ;
struct TYPE_8__ {TYPE_3__ route; } ;
struct rdma_id_private {int reuseaddr; TYPE_4__ id; } ;
struct rdma_bind_list {int dummy; } ;
typedef enum rdma_ucm_port_space { ____Placeholder_rdma_ucm_port_space } rdma_ucm_port_space ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct rdma_id_private*,unsigned short) ;
 int FUNC_2 (struct rdma_bind_list*,struct rdma_id_private*) ;
 int FUNC_3 (struct rdma_bind_list*,struct rdma_id_private*,int ) ;
 int FUNC_4 (int ) ;
 struct rdma_bind_list* FUNC_5 (int ,int,unsigned short) ;
 int FUNC_6 (struct rdma_id_private*) ;
 unsigned short FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(enum rdma_ucm_port_space VAR_3,
   struct rdma_id_private *VAR_4)
{
 struct rdma_bind_list *VAR_5;
 unsigned short VAR_6;
 int VAR_7;

 VAR_6 = FUNC_7(FUNC_4(FUNC_6(VAR_4)));
 if (VAR_6 < VAR_2 && !FUNC_0(VAR_0))
  return -VAR_1;

 VAR_5 = FUNC_5(VAR_4->id.route.addr.dev_addr.net, VAR_3, VAR_6);
 if (!VAR_5) {
  VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_6);
 } else {
  VAR_7 = FUNC_3(VAR_5, VAR_4, VAR_4->reuseaddr);
  if (!VAR_7)
   FUNC_2(VAR_5, VAR_4);
 }
 return VAR_7;
}
