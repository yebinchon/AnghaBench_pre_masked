
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* get_link_layer ) (struct ib_device*,int ) ;} ;
struct ib_device {int node_type; TYPE_1__ ops; } ;
typedef enum rdma_transport_type { ____Placeholder_rdma_transport_type } rdma_transport_type ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_device*,int ) ;

enum rdma_link_layer FUNC_2(struct ib_device *VAR_3, u8 VAR_4)
{
 enum rdma_transport_type VAR_5;
 if (VAR_3->ops.get_link_layer)
  return VAR_3->ops.get_link_layer(VAR_3, VAR_4);

 VAR_5 = FUNC_0(VAR_3->node_type);
 if (VAR_5 == VAR_2)
  return VAR_1;

 return VAR_0;
}
