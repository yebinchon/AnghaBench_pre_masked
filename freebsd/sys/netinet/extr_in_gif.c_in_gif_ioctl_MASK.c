
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {void* sin_family; int sin_len; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct ip {TYPE_1__ ip_dst; TYPE_1__ ip_src; } ;
struct in_aliasreq {struct sockaddr_in ifra_dstaddr; struct sockaddr_in ifra_addr; } ;
struct ifreq {int ifr_addr; } ;
struct gif_softc {void* gif_family; struct ip* gif_iphdr; int gif_hdr; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_4__ {int td_ucred; } ;


 void* VAR_0 ;
 int FUNC_0 (struct gif_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int * VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;
 int FUNC_2 (int ,int ) ;
 void* FUNC_3 () ;
 int FUNC_4 (struct gif_softc*) ;
 int FUNC_5 (struct gif_softc*,int ,int ) ;
 int FUNC_6 (struct gif_softc*) ;
 struct ip* FUNC_7 (int,int ,int) ;
 int FUNC_8 (struct sockaddr_in*,int ,int) ;
 int FUNC_9 (int ,struct sockaddr*) ;
 int VAR_12 ;

int
FUNC_10(struct gif_softc *VAR_13, u_long VAR_14, caddr_t VAR_15)
{
 struct ifreq *VAR_16 = (struct ifreq *)VAR_15;
 struct sockaddr_in *VAR_17, *VAR_18;
 struct ip *VAR_19;
 int VAR_20;


 VAR_20 = VAR_3;
 switch (VAR_14) {
 case 128:
  VAR_18 = &((struct in_aliasreq *)VAR_15)->ifra_addr;
  VAR_17 = &((struct in_aliasreq *)VAR_15)->ifra_dstaddr;


  if (VAR_18->sin_family != VAR_17->sin_family ||
      VAR_18->sin_family != VAR_0 ||
      VAR_18->sin_len != VAR_17->sin_len ||
      VAR_18->sin_len != sizeof(*VAR_18))
   break;
  if (VAR_18->sin_addr.s_addr == VAR_4 ||
      VAR_17->sin_addr.s_addr == VAR_4) {
   VAR_20 = VAR_1;
   break;
  }
  if (VAR_8 == ((void*)0)) {
   VAR_8 = FUNC_3();
   VAR_9 = FUNC_3();
  }
  VAR_20 = FUNC_5(VAR_13, VAR_18->sin_addr.s_addr,
      VAR_17->sin_addr.s_addr);
  if (VAR_20 == VAR_1)
   break;
  if (VAR_20 == VAR_2) {

   VAR_20 = 0;
   break;
  }
  VAR_19 = FUNC_7(sizeof(*VAR_19), VAR_5, VAR_6 | VAR_7);
  VAR_19->ip_src.s_addr = VAR_18->sin_addr.s_addr;
  VAR_19->ip_dst.s_addr = VAR_17->sin_addr.s_addr;
  if (VAR_13->gif_family != 0) {

   FUNC_0(VAR_13, VAR_12);
   FUNC_0(VAR_13, VAR_10);
   FUNC_1();
   FUNC_2(VAR_13->gif_hdr, VAR_5);

  }
  VAR_13->gif_family = VAR_0;
  VAR_13->gif_iphdr = VAR_19;
  FUNC_4(VAR_13);
  FUNC_6(VAR_13);
  break;
 case 129:
 case 130:
  if (VAR_13->gif_family != VAR_0) {
   VAR_20 = VAR_1;
   break;
  }
  VAR_18 = (struct sockaddr_in *)&VAR_16->ifr_addr;
  FUNC_8(VAR_18, 0, sizeof(*VAR_18));
  VAR_18->sin_family = VAR_0;
  VAR_18->sin_len = sizeof(*VAR_18);
  VAR_18->sin_addr = (VAR_14 == 129) ?
      VAR_13->gif_iphdr->ip_src: VAR_13->gif_iphdr->ip_dst;
  VAR_20 = FUNC_9(VAR_11->td_ucred, (struct sockaddr *)VAR_18);
  if (VAR_20 != 0)
   FUNC_8(VAR_18, 0, sizeof(*VAR_18));
  break;
 }
 return (VAR_20);
}
