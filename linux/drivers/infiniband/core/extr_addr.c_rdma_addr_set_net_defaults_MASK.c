
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_dev_addr {scalar_t__ bound_dev_if; int * net; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct rdma_dev_addr *VAR_1)
{
 VAR_1->net = &VAR_0;
 VAR_1->bound_dev_if = 0;
}
