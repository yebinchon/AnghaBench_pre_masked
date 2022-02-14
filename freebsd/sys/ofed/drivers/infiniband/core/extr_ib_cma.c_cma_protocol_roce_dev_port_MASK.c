
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int node_type; } ;
typedef enum rdma_transport_type { ____Placeholder_rdma_transport_type } rdma_transport_type ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_device*,int) ;

__attribute__((used)) static bool FUNC_2(struct ib_device *VAR_2, int VAR_3)
{
 enum rdma_link_layer VAR_4 = FUNC_1(VAR_2, VAR_3);
 enum rdma_transport_type VAR_5 =
  FUNC_0(VAR_2->node_type);

 return VAR_4 == VAR_0 && VAR_5 == VAR_1;
}
