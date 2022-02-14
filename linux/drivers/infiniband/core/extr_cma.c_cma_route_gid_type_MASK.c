
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum rdma_network_type { ____Placeholder_rdma_network_type } rdma_network_type ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,unsigned long*) ;

__attribute__((used)) static enum ib_gid_type FUNC_1(enum rdma_network_type VAR_3,
        unsigned long VAR_4,
        enum ib_gid_type VAR_5)
{
 if ((VAR_3 == VAR_1 ||
      VAR_3 == VAR_2) &&
     FUNC_0(VAR_0, &VAR_4))
  return VAR_0;

 return VAR_5;
}
