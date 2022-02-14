
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
struct rdma_id_private {TYPE_4__ id; } ;
struct rdma_bind_list {int ps; unsigned short port; } ;
typedef enum rdma_port_space { ____Placeholder_rdma_port_space } rdma_port_space ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rdma_bind_list*,struct rdma_id_private*) ;
 int FUNC_1 (int ,int,struct rdma_bind_list*,unsigned short) ;
 int FUNC_2 (struct rdma_bind_list*) ;
 struct rdma_bind_list* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(enum rdma_port_space VAR_4,
     struct rdma_id_private *VAR_5, unsigned short VAR_6)
{
 struct rdma_bind_list *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof *VAR_7, VAR_3);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_5->id.route.addr.dev_addr.net, VAR_4, VAR_7,
      VAR_6);
 if (VAR_8 < 0)
  goto err;

 VAR_7->ps = VAR_4;
 VAR_7->port = (unsigned short)VAR_8;
 FUNC_0(VAR_7, VAR_5);
 return 0;
err:
 FUNC_2(VAR_7);
 return VAR_8 == -VAR_2 ? -VAR_0 : VAR_8;
}
