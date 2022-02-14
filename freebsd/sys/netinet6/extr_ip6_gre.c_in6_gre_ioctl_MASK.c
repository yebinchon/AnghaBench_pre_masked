
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_long ;
struct sockaddr_in6 {void* sin6_family; int sin6_len; int sin6_addr; } ;
struct sockaddr {int dummy; } ;
struct ip6_hdr {int ip6_dst; int ip6_src; } ;
struct in6_ifreq {int ifr_addr; } ;
struct in6_aliasreq {struct sockaddr_in6 ifra_dstaddr; struct sockaddr_in6 ifra_addr; } ;
struct greudp6 {int dummy; } ;
struct TYPE_3__ {int ip6_dst; int ip6_src; } ;
struct gre_softc {void* gre_family; TYPE_1__ gre_oip6; struct ip6_hdr* gre_hdr; int gre_iseq; int gre_oseq; int gre_options; } ;
struct gre_sockets {int dummy; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_4__ {int td_ucred; } ;


 void* VAR_0 ;
 int FUNC_0 (struct gre_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int * VAR_8 ;
 struct gre_sockets* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 TYPE_2__* VAR_12 ;
 int FUNC_3 (struct ip6_hdr*,int ) ;
 void* FUNC_4 () ;
 int FUNC_5 (struct gre_softc*) ;
 int FUNC_6 (struct gre_softc*,int *,int *,int ) ;
 struct ip6_hdr* FUNC_7 (int,int ,int) ;
 int FUNC_8 (struct sockaddr_in6*,int ,int) ;
 int FUNC_9 (int ,struct sockaddr*) ;
 int FUNC_10 (struct sockaddr_in6*,int ) ;
 int FUNC_11 (struct sockaddr_in6*) ;
 int VAR_13 ;

int
FUNC_12(struct gre_softc *VAR_14, u_long VAR_15, caddr_t VAR_16)
{
 struct in6_ifreq *VAR_17 = (struct in6_ifreq *)VAR_16;
 struct sockaddr_in6 *VAR_18, *VAR_19;
 struct ip6_hdr *VAR_20;
 int VAR_21;


 VAR_21 = VAR_3;
 switch (VAR_15) {
 case 128:
  VAR_19 = &((struct in6_aliasreq *)VAR_16)->ifra_addr;
  VAR_18 = &((struct in6_aliasreq *)VAR_16)->ifra_dstaddr;


  if (VAR_19->sin6_family != VAR_18->sin6_family ||
      VAR_19->sin6_family != VAR_0 ||
      VAR_19->sin6_len != VAR_18->sin6_len ||
      VAR_19->sin6_len != sizeof(*VAR_19))
   break;
  if (FUNC_2(&VAR_19->sin6_addr) ||
      FUNC_2(&VAR_18->sin6_addr)) {
   VAR_21 = VAR_1;
   break;
  }





  if ((VAR_21 = FUNC_10(VAR_19, 0)) != 0 ||
      (VAR_21 = FUNC_10(VAR_18, 0)) != 0)
   break;

  if (VAR_8 == ((void*)0)) {
   VAR_8 = FUNC_4();
   VAR_10 = FUNC_4();
   VAR_9 = (struct gre_sockets *)FUNC_4();
  }
  VAR_21 = FUNC_6(VAR_14, &VAR_19->sin6_addr,
      &VAR_18->sin6_addr, VAR_14->gre_options);
  if (VAR_21 == VAR_1)
   break;
  if (VAR_21 == VAR_2) {

   VAR_21 = 0;
   break;
  }
  VAR_20 = FUNC_7(sizeof(struct greudp6) + 3 * sizeof(uint32_t),
      VAR_4, VAR_5 | VAR_6);
  VAR_20->ip6_src = VAR_19->sin6_addr;
  VAR_20->ip6_dst = VAR_18->sin6_addr;
  if (VAR_14->gre_family != 0) {

   FUNC_0(VAR_14, VAR_11);
   FUNC_0(VAR_14, VAR_13);
   FUNC_1();
   FUNC_3(VAR_14->gre_hdr, VAR_4);

  }
  VAR_14->gre_family = VAR_0;
  VAR_14->gre_hdr = VAR_20;
  VAR_14->gre_oseq = 0;
  VAR_14->gre_iseq = VAR_7;
  VAR_21 = FUNC_5(VAR_14);
  if (VAR_21 != 0) {
   VAR_14->gre_family = 0;
   FUNC_3(VAR_14->gre_hdr, VAR_4);
  }
  break;
 case 129:
 case 130:
  if (VAR_14->gre_family != VAR_0) {
   VAR_21 = VAR_1;
   break;
  }
  VAR_19 = (struct sockaddr_in6 *)&VAR_17->ifr_addr;
  FUNC_8(VAR_19, 0, sizeof(*VAR_19));
  VAR_19->sin6_family = VAR_0;
  VAR_19->sin6_len = sizeof(*VAR_19);
  VAR_19->sin6_addr = (VAR_15 == 129) ?
      VAR_14->gre_oip6.ip6_src: VAR_14->gre_oip6.ip6_dst;
  VAR_21 = FUNC_9(VAR_12->td_ucred, (struct sockaddr *)VAR_19);
  if (VAR_21 == 0)
   VAR_21 = FUNC_11(VAR_19);
  if (VAR_21 != 0)
   FUNC_8(VAR_19, 0, sizeof(*VAR_19));
  break;
 }
 return (VAR_21);
}
