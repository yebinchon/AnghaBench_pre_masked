
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnet {int dummy; } ;
struct rdma_bind_list {int dummy; } ;
struct idr {int dummy; } ;
typedef enum rdma_port_space { ____Placeholder_rdma_port_space } rdma_port_space ;


 struct idr* FUNC_0 (struct vnet*,int) ;
 struct rdma_bind_list* FUNC_1 (struct idr*,int) ;

__attribute__((used)) static struct rdma_bind_list *FUNC_2(struct vnet *VAR_0,
       enum rdma_port_space VAR_1, int VAR_2)
{
 struct idr *VAR_3 = FUNC_0(VAR_0, VAR_1);

 return FUNC_1(VAR_3, VAR_2);
}
