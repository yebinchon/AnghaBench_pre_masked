
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_msource {scalar_t__ ims_stp; int ims_haddr; } ;
struct in_multi {scalar_t__ inm_nsrc; TYPE_1__* inm_st; int inm_srcs; } ;
typedef int in_addr_t ;
struct TYPE_2__ {int iss_rec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ip_msource* FUNC_1 (int ,int *,struct ip_msource*) ;
 int FUNC_2 (int ,int *,struct ip_msource*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct ip_msource* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int const) ;

int
FUNC_5(struct in_multi *VAR_7, const in_addr_t VAR_8)
{
 struct ip_msource VAR_9;
 struct ip_msource *VAR_10, *VAR_11;

 FUNC_0();

 VAR_9.ims_haddr = FUNC_4(VAR_8);
 VAR_10 = FUNC_1(VAR_6, &VAR_7->inm_srcs, &VAR_9);
 if (VAR_10 && VAR_10->ims_stp)
  return (0);
 if (VAR_10 == ((void*)0)) {
  if (VAR_7->inm_nsrc == VAR_5)
   return (-VAR_1);
  VAR_11 = FUNC_3(sizeof(struct ip_msource), VAR_2,
      VAR_3 | VAR_4);
  if (VAR_11 == ((void*)0))
   return (-VAR_0);
  VAR_11->ims_haddr = VAR_9.ims_haddr;
  FUNC_2(VAR_6, &VAR_7->inm_srcs, VAR_11);
  ++VAR_7->inm_nsrc;
  VAR_10 = VAR_11;
 }





 ++VAR_10->ims_stp;
 ++VAR_7->inm_st[1].iss_rec;

 return (1);
}
