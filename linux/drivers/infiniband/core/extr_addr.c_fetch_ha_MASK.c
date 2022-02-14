
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct rdma_dev_addr {scalar_t__ network; } ;
struct dst_entry {int dummy; } ;
typedef scalar_t__ sa_family_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dst_entry const*,struct rdma_dev_addr*,void const*) ;
 scalar_t__ FUNC_1 (struct dst_entry const*,scalar_t__) ;
 int FUNC_2 (struct rdma_dev_addr*,void const*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(const struct dst_entry *VAR_2, struct rdma_dev_addr *VAR_3,
      const struct sockaddr *VAR_4, u32 VAR_5)
{
 const struct sockaddr_in *VAR_6 =
  (const struct sockaddr_in *)VAR_4;
 const struct sockaddr_in6 *VAR_7 =
  (const struct sockaddr_in6 *)VAR_4;
 const void *VAR_8 = (VAR_4->sa_family == VAR_0) ?
  (const void *)&VAR_6->sin_addr.s_addr :
  (const void *)&VAR_7->sin6_addr;
 sa_family_t VAR_9 = VAR_4->sa_family;


 if (FUNC_1(VAR_2, VAR_9) && VAR_3->network == VAR_1)
  return FUNC_2(VAR_3, VAR_8, VAR_5, VAR_9);
 else
  return FUNC_0(VAR_2, VAR_3, VAR_8);
}
