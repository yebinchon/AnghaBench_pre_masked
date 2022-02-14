
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct TYPE_10__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_4__ sin_addr; } ;
struct TYPE_7__ {scalar_t__ ps; } ;
struct rdma_id_private {TYPE_1__ id; } ;
struct TYPE_9__ {int addr; } ;
struct TYPE_12__ {int ip6; TYPE_3__ ip4; } ;
struct TYPE_8__ {int addr; } ;
struct TYPE_11__ {int ip6; TYPE_2__ ip4; } ;
struct cma_hdr {TYPE_6__ dst_addr; TYPE_5__ src_addr; int port; int cma_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct rdma_id_private*) ;
 scalar_t__ FUNC_1 (struct rdma_id_private*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cma_hdr*,int) ;
 scalar_t__ FUNC_4 (struct rdma_id_private*) ;
 int FUNC_5 (void*,struct rdma_id_private*) ;

__attribute__((used)) static int FUNC_6(void *VAR_4, struct rdma_id_private *VAR_5)
{
 struct cma_hdr *VAR_6;

 if (VAR_5->id.ps == VAR_3)
  return FUNC_5(VAR_4, VAR_5);

 VAR_6 = VAR_4;
 VAR_6->cma_version = VAR_2;
 if (FUNC_1(VAR_5) == VAR_0) {
  struct sockaddr_in *VAR_7, *VAR_8;

  VAR_7 = (struct sockaddr_in *) FUNC_4(VAR_5);
  VAR_8 = (struct sockaddr_in *) FUNC_0(VAR_5);

  FUNC_3(VAR_6, 4);
  VAR_6->src_addr.ip4.addr = VAR_7->sin_addr.s_addr;
  VAR_6->dst_addr.ip4.addr = VAR_8->sin_addr.s_addr;
  VAR_6->port = VAR_7->sin_port;
 } else if (FUNC_1(VAR_5) == VAR_1) {
  struct sockaddr_in6 *VAR_9, *VAR_10;

  VAR_9 = (struct sockaddr_in6 *) FUNC_4(VAR_5);
  VAR_10 = (struct sockaddr_in6 *) FUNC_0(VAR_5);

  FUNC_3(VAR_6, 6);
  VAR_6->src_addr.ip6 = VAR_9->sin6_addr;
  VAR_6->dst_addr.ip6 = VAR_10->sin6_addr;
  VAR_6->port = VAR_9->sin6_port;
  FUNC_2(&VAR_6->src_addr.ip6);
  FUNC_2(&VAR_6->dst_addr.ip6);
 }
 return 0;
}
