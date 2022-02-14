
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xarray {int dummy; } ;
struct net {int dummy; } ;
struct cma_pernet {struct xarray ib_ps; struct xarray ipoib_ps; struct xarray udp_ps; struct xarray tcp_ps; } ;
typedef enum rdma_ucm_port_space { ____Placeholder_rdma_ucm_port_space } rdma_ucm_port_space ;






 struct cma_pernet* FUNC_0 (struct net*) ;

__attribute__((used)) static
struct xarray *FUNC_1(struct net *VAR_0, enum rdma_ucm_port_space VAR_1)
{
 struct cma_pernet *VAR_2 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 129:
  return &VAR_2->tcp_ps;
 case 128:
  return &VAR_2->udp_ps;
 case 130:
  return &VAR_2->ipoib_ps;
 case 131:
  return &VAR_2->ib_ps;
 default:
  return ((void*)0);
 }
}
