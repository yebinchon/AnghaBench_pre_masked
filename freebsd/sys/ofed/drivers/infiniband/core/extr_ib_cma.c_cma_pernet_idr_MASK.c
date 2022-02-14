
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnet {int dummy; } ;
struct idr {int dummy; } ;
struct cma_pernet {struct idr sdp_ps; struct idr ib_ps; struct idr ipoib_ps; struct idr udp_ps; struct idr tcp_ps; } ;
typedef enum rdma_port_space { ____Placeholder_rdma_port_space } rdma_port_space ;







 struct cma_pernet* FUNC_0 (struct vnet*) ;

__attribute__((used)) static struct idr *FUNC_1(struct vnet *VAR_0, enum rdma_port_space VAR_1)
{
 struct cma_pernet *VAR_2 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 129:
  return &VAR_2->tcp_ps;
 case 128:
  return &VAR_2->udp_ps;
 case 131:
  return &VAR_2->ipoib_ps;
 case 132:
  return &VAR_2->ib_ps;
 case 130:
  return &VAR_2->sdp_ps;
 default:
  return ((void*)0);
 }
}
