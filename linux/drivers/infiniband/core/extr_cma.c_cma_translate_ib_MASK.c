
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
struct sockaddr_ib {int sib_pkey; int sib_addr; } ;
struct rdma_dev_addr {int dev_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct rdma_dev_addr*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rdma_dev_addr*,union ib_gid*) ;

__attribute__((used)) static void FUNC_3(struct sockaddr_ib *VAR_1, struct rdma_dev_addr *VAR_2)
{
 VAR_2->dev_type = VAR_0;
 FUNC_2(VAR_2, (union ib_gid *) &VAR_1->sib_addr);
 FUNC_0(VAR_2, FUNC_1(VAR_1->sib_pkey));
}
