
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct TYPE_8__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_3__ sin_addr; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_10__ {int ip6; TYPE_2__ ip4; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_9__ {int ip6; TYPE_1__ ip4; } ;
struct sdp_hh {TYPE_5__ dst_addr; TYPE_4__ src_addr; int port; int majv_minv; } ;
struct rdma_id_private {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct rdma_id_private*) ;
 scalar_t__ FUNC_1 (struct rdma_id_private*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct rdma_id_private*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sdp_hh*,int) ;

__attribute__((used)) static int FUNC_6(struct sdp_hh *VAR_5, struct rdma_id_private *VAR_6)
{




 if (FUNC_4(VAR_5->majv_minv) != VAR_4)
  return -VAR_3;

 if (FUNC_1(VAR_6) == VAR_0) {
  struct sockaddr_in *VAR_7, *VAR_8;

  VAR_7 = (struct sockaddr_in *) FUNC_3(VAR_6);
  VAR_8 = (struct sockaddr_in *) FUNC_0(VAR_6);

  FUNC_5(VAR_5, 4);
  VAR_5->src_addr.ip4.addr = VAR_7->sin_addr.s_addr;
  VAR_5->dst_addr.ip4.addr = VAR_8->sin_addr.s_addr;
  VAR_5->port = VAR_7->sin_port;
 } else if (FUNC_1(VAR_6) == VAR_1) {
  struct sockaddr_in6 *VAR_9, *VAR_10;

  VAR_9 = (struct sockaddr_in6 *) FUNC_3(VAR_6);
  VAR_10 = (struct sockaddr_in6 *) FUNC_0(VAR_6);

  FUNC_5(VAR_5, 6);
  VAR_5->src_addr.ip6 = VAR_9->sin6_addr;
  VAR_5->dst_addr.ip6 = VAR_10->sin6_addr;
  VAR_5->port = VAR_9->sin6_port;
  FUNC_2(&VAR_5->src_addr.ip6);
  FUNC_2(&VAR_5->dst_addr.ip6);
 } else
  return -VAR_2;
 return 0;
}
