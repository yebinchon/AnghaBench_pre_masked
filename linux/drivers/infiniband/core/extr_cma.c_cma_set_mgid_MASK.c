
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct TYPE_11__ {int * s6_addr32; } ;
struct sockaddr_in6 {TYPE_5__ sin6_addr; } ;
struct TYPE_9__ {int s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; } ;
struct sockaddr_ib {TYPE_5__ sib_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct rdma_dev_addr {int broadcast; } ;
struct TYPE_7__ {struct rdma_dev_addr dev_addr; } ;
struct TYPE_8__ {TYPE_1__ addr; } ;
struct TYPE_10__ {scalar_t__ ps; TYPE_2__ route; } ;
struct rdma_id_private {TYPE_4__ id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sockaddr*) ;
 int FUNC_2 (int ,int ,unsigned char*) ;
 int FUNC_3 (TYPE_5__*,int ,unsigned char*) ;
 int FUNC_4 (union ib_gid*,TYPE_5__*,int) ;
 int FUNC_5 (union ib_gid*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct rdma_id_private *VAR_4,
    struct sockaddr *VAR_5, union ib_gid *VAR_6)
{
 unsigned char VAR_7[VAR_2];
 struct rdma_dev_addr *VAR_8 = &VAR_4->id.route.addr.dev_addr;
 struct sockaddr_in *VAR_9 = (struct sockaddr_in *) VAR_5;
 struct sockaddr_in6 *VAR_10 = (struct sockaddr_in6 *) VAR_5;

 if (FUNC_1(VAR_5)) {
  FUNC_5(VAR_6, 0, sizeof *VAR_6);
 } else if ((VAR_5->sa_family == VAR_1) &&
     ((FUNC_0(VAR_10->sin6_addr.s6_addr32[0]) & 0xFFF0FFFF) ==
         0xFF10A01B)) {

  FUNC_4(VAR_6, &VAR_10->sin6_addr, sizeof *VAR_6);
 } else if (VAR_5->sa_family == VAR_0) {
  FUNC_4(VAR_6, &((struct sockaddr_ib *) VAR_5)->sib_addr, sizeof *VAR_6);
 } else if (VAR_5->sa_family == VAR_1) {
  FUNC_3(&VAR_10->sin6_addr, VAR_8->broadcast, VAR_7);
  if (VAR_4->id.ps == VAR_3)
   VAR_7[7] = 0x01;
  *VAR_6 = *(union ib_gid *) (VAR_7 + 4);
 } else {
  FUNC_2(VAR_9->sin_addr.s_addr, VAR_8->broadcast, VAR_7);
  if (VAR_4->id.ps == VAR_3)
   VAR_7[7] = 0x01;
  *VAR_6 = *(union ib_gid *) (VAR_7 + 4);
 }
}
