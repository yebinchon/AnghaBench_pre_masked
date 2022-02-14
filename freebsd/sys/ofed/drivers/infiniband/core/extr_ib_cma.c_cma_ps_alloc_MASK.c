
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnet {int dummy; } ;
struct rdma_bind_list {int dummy; } ;
struct idr {int dummy; } ;
typedef enum rdma_port_space { ____Placeholder_rdma_port_space } rdma_port_space ;


 int VAR_0 ;
 struct idr* FUNC_0 (struct vnet*,int) ;
 int FUNC_1 (struct idr*,struct rdma_bind_list*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct vnet *VAR_1, enum rdma_port_space VAR_2,
   struct rdma_bind_list *VAR_3, int VAR_4)
{
 struct idr *VAR_5 = FUNC_0(VAR_1, VAR_2);

 return FUNC_1(VAR_5, VAR_3, VAR_4, VAR_4 + 1, VAR_0);
}
