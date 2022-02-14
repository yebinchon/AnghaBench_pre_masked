
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xarray {int dummy; } ;
struct rdma_bind_list {int dummy; } ;
struct net {int dummy; } ;
typedef enum rdma_ucm_port_space { ____Placeholder_rdma_ucm_port_space } rdma_ucm_port_space ;


 struct xarray* FUNC_0 (struct net*,int) ;
 struct rdma_bind_list* FUNC_1 (struct xarray*,int) ;

__attribute__((used)) static struct rdma_bind_list *FUNC_2(struct net *VAR_0,
       enum rdma_ucm_port_space VAR_1, int VAR_2)
{
 struct xarray *VAR_3 = FUNC_0(VAR_0, VAR_1);

 return FUNC_1(VAR_3, VAR_2);
}
