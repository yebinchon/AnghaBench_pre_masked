
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct ip6_msource {scalar_t__ im6s_stp; struct in6_addr im6s_addr; } ;
struct in6_multi {scalar_t__ in6m_nsrc; TYPE_1__* in6m_st; int in6m_srcs; } ;
struct TYPE_2__ {int iss_rec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ip6_msource* FUNC_1 (int ,int *,struct ip6_msource*) ;
 int FUNC_2 (int ,int *,struct ip6_msource*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct ip6_msource* FUNC_3 (int,int ,int) ;

int
FUNC_4(struct in6_multi *VAR_7, const struct in6_addr *VAR_8)
{
 struct ip6_msource VAR_9;
 struct ip6_msource *VAR_10, *VAR_11;

 FUNC_0();

 VAR_9.im6s_addr = *VAR_8;
 VAR_10 = FUNC_1(VAR_6, &VAR_7->in6m_srcs, &VAR_9);
 if (VAR_10 && VAR_10->im6s_stp)
  return (0);
 if (VAR_10 == ((void*)0)) {
  if (VAR_7->in6m_nsrc == VAR_5)
   return (-VAR_1);
  VAR_11 = FUNC_3(sizeof(struct ip6_msource), VAR_2,
      VAR_3 | VAR_4);
  if (VAR_11 == ((void*)0))
   return (-VAR_0);
  VAR_11->im6s_addr = VAR_9.im6s_addr;
  FUNC_2(VAR_6, &VAR_7->in6m_srcs, VAR_11);
  ++VAR_7->in6m_nsrc;
  VAR_10 = VAR_11;
 }





 ++VAR_10->im6s_stp;
 ++VAR_7->in6m_st[1].iss_rec;

 return (1);
}
