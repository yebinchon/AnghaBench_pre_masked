
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ps; } ;
struct rdma_id_private {TYPE_1__ id; } ;
typedef enum rdma_port_space { ____Placeholder_rdma_port_space } rdma_port_space ;
__attribute__((used)) static enum rdma_port_space FUNC_0(
  struct rdma_id_private *VAR_0)
{
 switch (VAR_0->id.ps) {
 case 129:
 case 128:
 case 131:
 case 132:
 case 130:
  return VAR_0->id.ps;
 default:

  return 0;
 }
}
