
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sockaddr_ib {int sib_sid; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct rdma_cm_id {scalar_t__ ps; } ;
typedef int __be64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sockaddr*) ;
 int FUNC_2 (scalar_t__) ;

__be64 FUNC_3(struct rdma_cm_id *VAR_1, struct sockaddr *VAR_2)
{
 if (VAR_2->sa_family == VAR_0)
  return ((struct sockaddr_ib *) VAR_2)->sib_sid;

 return FUNC_2(((u64)VAR_1->ps << 16) + FUNC_0(FUNC_1(VAR_2)));
}
