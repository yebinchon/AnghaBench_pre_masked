
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct TYPE_6__ {union ib_gid sgid; union ib_gid dgid; } ;
struct TYPE_4__ {int ip_dst; int ip_src; } ;
union rdma_network_hdr {TYPE_3__ ibgrh; TYPE_1__ roce4grh; } ;
struct TYPE_5__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct in6_addr {int dummy; } ;
typedef enum rdma_network_type { ____Placeholder_rdma_network_type } rdma_network_type ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct in6_addr*) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(const union rdma_network_hdr *VAR_4,
      enum rdma_network_type VAR_5,
      union ib_gid *VAR_6, union ib_gid *VAR_7)
{
 struct sockaddr_in VAR_8;
 struct sockaddr_in VAR_9;
 __be32 VAR_10, VAR_11;

 if (!VAR_6 || !VAR_7)
  return -VAR_0;

 if (VAR_5 == VAR_2) {
  FUNC_1(&VAR_8.sin_addr.s_addr,
         &VAR_4->roce4grh.ip_src, 4);
  FUNC_1(&VAR_9.sin_addr.s_addr,
         &VAR_4->roce4grh.ip_dst, 4);
  VAR_10 = VAR_8.sin_addr.s_addr;
  VAR_11 = VAR_9.sin_addr.s_addr;
  FUNC_0(VAR_10,
           (struct in6_addr *)VAR_6);
  FUNC_0(VAR_11,
           (struct in6_addr *)VAR_7);
  return 0;
 } else if (VAR_5 == VAR_3 ||
     VAR_5 == VAR_1) {
  *VAR_7 = VAR_4->ibgrh.dgid;
  *VAR_6 = VAR_4->ibgrh.sgid;
  return 0;
 } else {
  return -VAR_0;
 }
}
