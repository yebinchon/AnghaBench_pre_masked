
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sockaddr {int dummy; } ;
struct rdma_dev_addr {scalar_t__ bound_dev_if; int src_dev_addr; int dst_dev_addr; } ;
struct ifnet {int if_flags; scalar_t__ if_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct rdma_dev_addr*,struct ifnet*,int *) ;
 int FUNC_2 (struct sockaddr const*,struct rdma_dev_addr*) ;

__attribute__((used)) static int FUNC_3(struct ifnet *VAR_3,
         const struct sockaddr *VAR_4,
         u8 *VAR_5,
         struct rdma_dev_addr *VAR_6)
{
 if (VAR_3->if_flags & VAR_0) {
  int VAR_7;






  if (VAR_6->bound_dev_if == VAR_3->if_index)
   VAR_6->bound_dev_if = 0;

  VAR_7 = FUNC_2(VAR_4, VAR_6);
  if (VAR_7 == 0) {
   FUNC_0(VAR_6->dst_dev_addr, VAR_6->src_dev_addr,
          VAR_2);
  }
  return VAR_7;
 }


 if (!(VAR_3->if_flags & VAR_1))
  return FUNC_1(VAR_6, VAR_3, VAR_5);

 return FUNC_1(VAR_6, VAR_3, ((void*)0));
}
