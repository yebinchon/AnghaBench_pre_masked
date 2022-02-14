
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct sockaddr {int dummy; } ;
struct rdma_dev_addr {scalar_t__ dev_type; scalar_t__ src_dev_addr; } ;
struct TYPE_5__ {int src_addr; struct rdma_dev_addr dev_addr; } ;
struct TYPE_6__ {TYPE_1__ addr; } ;
struct TYPE_7__ {scalar_t__ ps; int port_num; TYPE_2__ route; } ;
struct rdma_id_private {TYPE_4__* cma_dev; TYPE_3__ id; } ;
struct ib_gid_attr {int dummy; } ;
struct cma_req_info {int port; int device; } ;
typedef int gid ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;
struct TYPE_8__ {int* default_gid_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ib_gid_attr const*) ;
 int FUNC_1 (struct ib_gid_attr const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct rdma_id_private*,TYPE_4__*) ;
 int FUNC_3 (struct rdma_id_private*,struct ib_gid_attr const*) ;
 struct ib_gid_attr* FUNC_4 (int ,int,int,union ib_gid*,struct rdma_id_private*) ;
 int VAR_3 ;
 int FUNC_5 (union ib_gid*,scalar_t__,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct rdma_dev_addr*) ;
 int FUNC_9 (struct sockaddr*,union ib_gid*) ;
 scalar_t__ FUNC_10 (int ,int) ;

__attribute__((used)) static int FUNC_11(struct rdma_id_private *VAR_4,
         const struct rdma_id_private *VAR_5,
         struct cma_req_info *VAR_6)
{
 struct rdma_dev_addr *VAR_7 = &VAR_4->id.route.addr.dev_addr;
 const struct ib_gid_attr *VAR_8;
 enum ib_gid_type VAR_9;
 union ib_gid VAR_10;

 if (VAR_7->dev_type != VAR_0 &&
     VAR_4->id.ps == VAR_2)
  return -VAR_1;

 if (FUNC_10(VAR_6->device, VAR_6->port))
  FUNC_9((struct sockaddr *)&VAR_4->id.route.addr.src_addr,
       &VAR_10);
 else
  FUNC_5(&VAR_10, VAR_7->src_dev_addr +
         FUNC_8(VAR_7), sizeof(VAR_10));

 VAR_9 = VAR_5->cma_dev->default_gid_type[VAR_6->port - 1];
 VAR_8 = FUNC_4(VAR_6->device, VAR_6->port,
          VAR_9, &VAR_10, VAR_4);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_4->id.port_num = VAR_6->port;
 FUNC_3(VAR_4, VAR_8);




 FUNC_6(&VAR_3);
 FUNC_2(VAR_4, VAR_5->cma_dev);
 FUNC_7(&VAR_3);
 return 0;
}
