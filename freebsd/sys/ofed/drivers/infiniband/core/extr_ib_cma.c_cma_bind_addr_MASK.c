
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_scope_id; int sin6_addr; } ;
struct sockaddr_ib {int sib_pkey; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_4__ {int bound_dev_if; } ;
struct TYPE_5__ {TYPE_1__ dev_addr; int src_addr; } ;
struct TYPE_6__ {TYPE_2__ addr; } ;
struct rdma_cm_id {TYPE_3__ route; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct rdma_cm_id*,struct sockaddr*) ;

__attribute__((used)) static int FUNC_3(struct rdma_cm_id *VAR_2, struct sockaddr *VAR_3,
    struct sockaddr *VAR_4)
{
 if (!VAR_3 || !VAR_3->sa_family) {
  VAR_3 = (struct sockaddr *) &VAR_2->route.addr.src_addr;
  VAR_3->sa_family = VAR_4->sa_family;
  if (VAR_4->sa_family == VAR_1) {
   struct sockaddr_in6 *VAR_5 = (struct sockaddr_in6 *) VAR_3;
   struct sockaddr_in6 *VAR_6 = (struct sockaddr_in6 *) VAR_4;
   VAR_5->sin6_scope_id = VAR_6->sin6_scope_id;
   if (FUNC_1(&VAR_6->sin6_addr) ||
       FUNC_0(&VAR_6->sin6_addr))
    VAR_2->route.addr.dev_addr.bound_dev_if = VAR_6->sin6_scope_id;
  } else if (VAR_4->sa_family == VAR_0) {
   ((struct sockaddr_ib *) VAR_3)->sib_pkey =
    ((struct sockaddr_ib *) VAR_4)->sib_pkey;
  }
 }
 return FUNC_2(VAR_2, VAR_3);
}
