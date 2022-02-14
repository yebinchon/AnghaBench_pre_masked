
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union rdma_network_hdr {int dummy; } rdma_network_hdr ;
typedef union ib_gid {int dummy; } ib_gid ;
struct ib_grh {int dummy; } ;
typedef enum rdma_network_type { ____Placeholder_rdma_network_type } rdma_network_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (union rdma_network_hdr*,int,union ib_gid*,union ib_gid*) ;
 int FUNC_1 (union rdma_network_hdr const*) ;

__attribute__((used)) static int FUNC_2(struct ib_grh *VAR_3, union ib_gid *VAR_4,
    union ib_gid *VAR_5)
{
 int VAR_6 = FUNC_1((const union rdma_network_hdr *)VAR_3);
 enum rdma_network_type VAR_7;

 if (VAR_6 == 4)
  VAR_7 = VAR_1;
 else if (VAR_6 == 6)
  VAR_7 = VAR_2;
 else
  return -VAR_0;

 return FUNC_0((union rdma_network_hdr *)VAR_3, VAR_7,
      VAR_4, VAR_5);
}
