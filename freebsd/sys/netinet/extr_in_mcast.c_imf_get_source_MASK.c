
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct ip_msource {int ims_haddr; } ;
struct in_msource {int * imsl_st; int ims_haddr; } ;
struct in_mfilter {scalar_t__ imf_nsrc; int imf_sources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ip_msource* FUNC_0 (int ,int *,struct ip_msource*) ;
 int FUNC_1 (int ,int *,struct ip_msource*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct ip_msource* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct in_mfilter *VAR_8, const struct sockaddr_in *VAR_9,
    struct in_msource **VAR_10)
{
 struct ip_msource VAR_11;
 struct ip_msource *VAR_12, *VAR_13;
 struct in_msource *VAR_14;
 int VAR_15;

 VAR_15 = 0;
 VAR_12 = ((void*)0);
 VAR_14 = ((void*)0);


 VAR_11.ims_haddr = FUNC_3(VAR_9->sin_addr.s_addr);
 VAR_12 = FUNC_0(VAR_7, &VAR_8->imf_sources, &VAR_11);
 VAR_14 = (struct in_msource *)VAR_12;
 if (VAR_14 == ((void*)0)) {
  if (VAR_8->imf_nsrc == VAR_6)
   return (VAR_1);
  VAR_13 = FUNC_2(sizeof(struct in_msource), VAR_3,
      VAR_4 | VAR_5);
  if (VAR_13 == ((void*)0))
   return (VAR_0);
  VAR_14 = (struct in_msource *)VAR_13;
  VAR_14->ims_haddr = VAR_11.ims_haddr;
  VAR_14->imsl_st[0] = VAR_2;
  FUNC_1(VAR_7, &VAR_8->imf_sources, VAR_13);
  ++VAR_8->imf_nsrc;
 }

 *VAR_10 = VAR_14;

 return (VAR_15);
}
