
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_device {int (* get_link_layer ) (struct ib_device*,int ) ;int node_type; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_device*,int ) ;

enum rdma_link_layer FUNC_2(struct ib_device *VAR_3, u8 VAR_4)
{
 if (VAR_3->get_link_layer)
  return VAR_3->get_link_layer(VAR_3, VAR_4);

 switch (FUNC_0(VAR_3->node_type)) {
 case 131:
  return VAR_1;
 case 130:
 case 129:
 case 128:
  return VAR_0;
 default:
  return VAR_2;
 }
}
