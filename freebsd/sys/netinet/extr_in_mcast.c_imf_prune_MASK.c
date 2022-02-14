
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct ip_msource {int ims_haddr; } ;
struct in_msource {int * imsl_st; } ;
struct in_mfilter {int imf_sources; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ip_msource* FUNC_0 (int ,int *,struct ip_msource*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct in_mfilter *VAR_3, const struct sockaddr_in *VAR_4)
{
 struct ip_msource VAR_5;
 struct ip_msource *VAR_6;
 struct in_msource *VAR_7;


 VAR_5.ims_haddr = FUNC_1(VAR_4->sin_addr.s_addr);
 VAR_6 = FUNC_0(VAR_2, &VAR_3->imf_sources, &VAR_5);
 if (VAR_6 == ((void*)0))
  return (VAR_0);
 VAR_7 = (struct in_msource *)VAR_6;
 VAR_7->imsl_st[1] = VAR_1;
 return (0);
}
