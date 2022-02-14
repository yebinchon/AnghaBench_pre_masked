
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
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rdma_cm_id*,struct sockaddr*) ;

__attribute__((used)) static int FUNC_3(struct rdma_cm_id *VAR_4, struct sockaddr *VAR_5,
    const struct sockaddr *VAR_6)
{
 if (!VAR_5 || !VAR_5->sa_family) {
  VAR_5 = (struct sockaddr *) &VAR_4->route.addr.src_addr;
  VAR_5->sa_family = VAR_6->sa_family;
  if (FUNC_0(VAR_2) &&
      VAR_6->sa_family == VAR_1) {
   struct sockaddr_in6 *VAR_7 = (struct sockaddr_in6 *) VAR_5;
   struct sockaddr_in6 *VAR_8 = (struct sockaddr_in6 *) VAR_6;
   VAR_7->sin6_scope_id = VAR_8->sin6_scope_id;
   if (FUNC_1(&VAR_8->sin6_addr) & VAR_3)
    VAR_4->route.addr.dev_addr.bound_dev_if = VAR_8->sin6_scope_id;
  } else if (VAR_6->sa_family == VAR_0) {
   ((struct sockaddr_ib *) VAR_5)->sib_pkey =
    ((struct sockaddr_ib *) VAR_6)->sib_pkey;
  }
 }
 return FUNC_2(VAR_4, VAR_5);
}
