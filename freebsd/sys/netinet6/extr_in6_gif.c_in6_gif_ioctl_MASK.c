
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct sockaddr_in6 {void* sin6_family; int sin6_len; int sin6_addr; } ;
struct sockaddr {int dummy; } ;
struct ip6_hdr {int ip6_dst; int ip6_src; int ip6_vfc; } ;
struct in6_ifreq {int ifr_addr; } ;
struct in6_aliasreq {struct sockaddr_in6 ifra_dstaddr; struct sockaddr_in6 ifra_addr; } ;
struct gif_softc {void* gif_family; struct ip6_hdr* gif_ip6hdr; int gif_hdr; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int td_ucred; } ;


 void* VAR_0 ;
 int FUNC_0 (struct gif_softc*,int ) ;
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
 void* VAR_9 ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 () ;
 int FUNC_5 (struct gif_softc*) ;
 int FUNC_6 (struct gif_softc*,int *,int *) ;
 int FUNC_7 (struct gif_softc*) ;
 struct ip6_hdr* FUNC_8 (int,int ,int) ;
 int FUNC_9 (struct sockaddr_in6*,int ,int) ;
 int FUNC_10 (int ,struct sockaddr*) ;
 int FUNC_11 (struct sockaddr_in6*,int ) ;
 int FUNC_12 (struct sockaddr_in6*) ;
 int VAR_12 ;

int
FUNC_13(struct gif_softc *VAR_13, u_long VAR_14, caddr_t VAR_15)
{
 struct in6_ifreq *VAR_16 = (struct in6_ifreq *)VAR_15;
 struct sockaddr_in6 *VAR_17, *VAR_18;
 struct ip6_hdr *VAR_19;
 int VAR_20;


 VAR_20 = VAR_3;
 switch (VAR_14) {
 case 128:
  VAR_18 = &((struct in6_aliasreq *)VAR_15)->ifra_addr;
  VAR_17 = &((struct in6_aliasreq *)VAR_15)->ifra_dstaddr;


  if (VAR_18->sin6_family != VAR_17->sin6_family ||
      VAR_18->sin6_family != VAR_0 ||
      VAR_18->sin6_len != VAR_17->sin6_len ||
      VAR_18->sin6_len != sizeof(*VAR_18))
   break;
  if (FUNC_2(&VAR_18->sin6_addr) ||
      FUNC_2(&VAR_17->sin6_addr)) {
   VAR_20 = VAR_1;
   break;
  }





  if ((VAR_20 = FUNC_11(VAR_18, 0)) != 0 ||
      (VAR_20 = FUNC_11(VAR_17, 0)) != 0)
   break;

  if (VAR_8 == ((void*)0)) {
   VAR_8 = FUNC_4();
   VAR_9 = FUNC_4();
  }
  VAR_20 = FUNC_6(VAR_13, &VAR_18->sin6_addr,
      &VAR_17->sin6_addr);
  if (VAR_20 == VAR_1)
   break;
  if (VAR_20 == VAR_2) {

   VAR_20 = 0;
   break;
  }
  VAR_19 = FUNC_8(sizeof(*VAR_19), VAR_5, VAR_6 | VAR_7);
  VAR_19->ip6_src = VAR_18->sin6_addr;
  VAR_19->ip6_dst = VAR_17->sin6_addr;
  VAR_19->ip6_vfc = VAR_4;
  if (VAR_13->gif_family != 0) {

   FUNC_0(VAR_13, VAR_12);
   FUNC_0(VAR_13, VAR_10);
   FUNC_1();
   FUNC_3(VAR_13->gif_hdr, VAR_5);

  }
  VAR_13->gif_family = VAR_0;
  VAR_13->gif_ip6hdr = VAR_19;
  FUNC_5(VAR_13);
  FUNC_7(VAR_13);
  break;
 case 129:
 case 130:
  if (VAR_13->gif_family != VAR_0) {
   VAR_20 = VAR_1;
   break;
  }
  VAR_18 = (struct sockaddr_in6 *)&VAR_16->ifr_addr;
  FUNC_9(VAR_18, 0, sizeof(*VAR_18));
  VAR_18->sin6_family = VAR_0;
  VAR_18->sin6_len = sizeof(*VAR_18);
  VAR_18->sin6_addr = (VAR_14 == 129) ?
      VAR_13->gif_ip6hdr->ip6_src: VAR_13->gif_ip6hdr->ip6_dst;
  VAR_20 = FUNC_10(VAR_11->td_ucred, (struct sockaddr *)VAR_18);
  if (VAR_20 == 0)
   VAR_20 = FUNC_12(VAR_18);
  if (VAR_20 != 0)
   FUNC_9(VAR_18, 0, sizeof(*VAR_18));
  break;
 }
 return (VAR_20);
}
