
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xarray {int dummy; } ;
struct rdma_bind_list {int dummy; } ;
struct net {int dummy; } ;
typedef enum rdma_ucm_port_space { ____Placeholder_rdma_ucm_port_space } rdma_ucm_port_space ;


 int VAR_0 ;
 struct xarray* FUNC_0 (struct net*,int) ;
 int FUNC_1 (struct xarray*,int,struct rdma_bind_list*,int ) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_1, enum rdma_ucm_port_space VAR_2,
   struct rdma_bind_list *VAR_3, int VAR_4)
{
 struct xarray *VAR_5 = FUNC_0(VAR_1, VAR_2);

 return FUNC_1(VAR_5, VAR_4, VAR_3, VAR_0);
}
