
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct ip6_msource {int im6s_addr; } ;
struct in6_msource {int * im6sl_st; int im6s_addr; } ;
struct in6_mfilter {scalar_t__ im6f_nsrc; int im6f_sources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ip6_msource* FUNC_0 (int ,int *,struct ip6_msource*) ;
 int FUNC_1 (int ,int *,struct ip6_msource*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct ip6_msource* FUNC_2 (int,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct in6_mfilter *VAR_8, const struct sockaddr_in6 *VAR_9,
    struct in6_msource **VAR_10)
{
 struct ip6_msource VAR_11;
 struct ip6_msource *VAR_12, *VAR_13;
 struct in6_msource *VAR_14;
 int VAR_15;

 VAR_15 = 0;
 VAR_12 = ((void*)0);
 VAR_14 = ((void*)0);

 VAR_11.im6s_addr = VAR_9->sin6_addr;
 VAR_12 = FUNC_0(VAR_7, &VAR_8->im6f_sources, &VAR_11);
 VAR_14 = (struct in6_msource *)VAR_12;
 if (VAR_14 == ((void*)0)) {
  if (VAR_8->im6f_nsrc == VAR_6)
   return (VAR_1);
  VAR_13 = FUNC_2(sizeof(struct in6_msource), VAR_3,
      VAR_4 | VAR_5);
  if (VAR_13 == ((void*)0))
   return (VAR_0);
  VAR_14 = (struct in6_msource *)VAR_13;
  VAR_14->im6s_addr = VAR_11.im6s_addr;
  VAR_14->im6sl_st[0] = VAR_2;
  FUNC_1(VAR_7, &VAR_8->im6f_sources, VAR_13);
  ++VAR_8->im6f_nsrc;
 }

 *VAR_10 = VAR_14;

 return (VAR_15);
}
