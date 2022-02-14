
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sockaddr_in6 {int sin6_addr; } ;
struct ip6_msource {int dummy; } ;
struct in6_msource {int * im6sl_st; int im6s_addr; } ;
struct in6_mfilter {int im6f_nsrc; int im6f_sources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,struct ip6_msource*) ;
 int VAR_4 ;
 struct ip6_msource* FUNC_1 (int,int ,int) ;

__attribute__((used)) static struct in6_msource *
FUNC_2(struct in6_mfilter *VAR_5, const uint8_t VAR_6,
    const struct sockaddr_in6 *VAR_7)
{
 struct ip6_msource *VAR_8;
 struct in6_msource *VAR_9;

 VAR_8 = FUNC_1(sizeof(struct in6_msource), VAR_1,
     VAR_2 | VAR_3);
 if (VAR_8 == ((void*)0))
  return (((void*)0));
 VAR_9 = (struct in6_msource *)VAR_8;
 VAR_9->im6s_addr = VAR_7->sin6_addr;
 VAR_9->im6sl_st[0] = VAR_0;
 VAR_9->im6sl_st[1] = VAR_6;
 FUNC_0(VAR_4, &VAR_5->im6f_sources, VAR_8);
 ++VAR_5->im6f_nsrc;

 return (VAR_9);
}
