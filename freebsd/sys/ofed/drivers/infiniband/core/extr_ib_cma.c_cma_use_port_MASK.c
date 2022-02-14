
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
typedef enum rdma_port_space { ____Placeholder_rdma_port_space } rdma_port_space ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct rdma_id_private*,unsigned short) ;
 int FUNC_1 (struct rdma_bind_list*,struct rdma_id_private*) ;
 int FUNC_2 (struct rdma_bind_list*,struct rdma_id_private*,int ) ;
 int FUNC_3 (int ) ;
 struct rdma_bind_list* FUNC_4 (int ,int,unsigned short) ;
 int FUNC_5 (struct rdma_id_private*) ;
 int VAR_3 ;
 unsigned short FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(enum rdma_port_space VAR_4,
   struct rdma_id_private *VAR_5)
{
 struct rdma_bind_list *VAR_6;
 unsigned short VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(FUNC_3(FUNC_5(VAR_5)));
 if (VAR_7 < VAR_1 &&
     FUNC_7(VAR_3, VAR_2) != 0)
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_5->id.route.addr.dev_addr.net, VAR_4, VAR_7);
 if (!VAR_6) {
  VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_7);
 } else {
  VAR_8 = FUNC_2(VAR_6, VAR_5, VAR_5->reuseaddr);
  if (!VAR_8)
   FUNC_1(VAR_6, VAR_5);
 }
 return VAR_8;
}
