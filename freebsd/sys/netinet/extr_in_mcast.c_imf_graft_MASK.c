
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct ip_msource {int dummy; } ;
struct in_msource {int * imsl_st; int ims_haddr; } ;
struct in_mfilter {int imf_nsrc; int imf_sources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,struct ip_msource*) ;
 int VAR_4 ;
 struct ip_msource* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct in_msource *
FUNC_3(struct in_mfilter *VAR_5, const uint8_t VAR_6,
    const struct sockaddr_in *VAR_7)
{
 struct ip_msource *VAR_8;
 struct in_msource *VAR_9;

 VAR_8 = FUNC_1(sizeof(struct in_msource), VAR_1,
     VAR_2 | VAR_3);
 if (VAR_8 == ((void*)0))
  return (((void*)0));
 VAR_9 = (struct in_msource *)VAR_8;
 VAR_9->ims_haddr = FUNC_2(VAR_7->sin_addr.s_addr);
 VAR_9->imsl_st[0] = VAR_0;
 VAR_9->imsl_st[1] = VAR_6;
 FUNC_0(VAR_4, &VAR_5->imf_sources, VAR_8);
 ++VAR_5->imf_nsrc;

 return (VAR_9);
}
