
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_dev_net {int nl_sock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 struct rdma_dev_net* FUNC_1 (int *) ;

bool FUNC_2(unsigned int VAR_1)
{
 struct rdma_dev_net *VAR_2 = FUNC_1(&VAR_0);

 return FUNC_0(VAR_2->nl_sock, VAR_1);
}
