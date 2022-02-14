
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_long ;
struct TYPE_8__ {int s_addr; } ;
struct sockaddr_in {void* sin_family; int sin_len; TYPE_3__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct ip {TYPE_2__ ip_dst; TYPE_1__ ip_src; } ;
struct in_aliasreq {struct sockaddr_in ifra_dstaddr; struct sockaddr_in ifra_addr; } ;
struct ifreq {int ifr_addr; } ;
struct greudp {int dummy; } ;
struct TYPE_9__ {TYPE_3__ ip_dst; TYPE_3__ ip_src; } ;
struct gre_softc {void* gre_family; TYPE_4__ gre_oip; struct ip* gre_hdr; int gre_iseq; int gre_oseq; int gre_options; } ;
struct gre_sockets {int dummy; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_10__ {int td_ucred; } ;


 void* VAR_0 ;
 int FUNC_0 (struct gre_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int * VAR_9 ;
 struct gre_sockets* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 TYPE_5__* VAR_13 ;
 int FUNC_2 (struct ip*,int ) ;
 void* FUNC_3 () ;
 int FUNC_4 (struct gre_softc*) ;
 int FUNC_5 (struct gre_softc*,int ,int ,int ) ;
 struct ip* FUNC_6 (int,int ,int) ;
 int FUNC_7 (struct sockaddr_in*,int ,int) ;
 int FUNC_8 (int ,struct sockaddr*) ;
 int VAR_14 ;

int
FUNC_9(struct gre_softc *VAR_15, u_long VAR_16, caddr_t VAR_17)
{
 struct ifreq *VAR_18 = (struct ifreq *)VAR_17;
 struct sockaddr_in *VAR_19, *VAR_20;
 struct ip *VAR_21;
 int VAR_22;


 VAR_22 = VAR_3;
 switch (VAR_16) {
 case 128:
  VAR_20 = &((struct in_aliasreq *)VAR_17)->ifra_addr;
  VAR_19 = &((struct in_aliasreq *)VAR_17)->ifra_dstaddr;


  if (VAR_20->sin_family != VAR_19->sin_family ||
      VAR_20->sin_family != VAR_0 ||
      VAR_20->sin_len != VAR_19->sin_len ||
      VAR_20->sin_len != sizeof(*VAR_20))
   break;
  if (VAR_20->sin_addr.s_addr == VAR_4 ||
      VAR_19->sin_addr.s_addr == VAR_4) {
   VAR_22 = VAR_1;
   break;
  }
  if (VAR_9 == ((void*)0)) {
   VAR_9 = FUNC_3();
   VAR_11 = FUNC_3();
   VAR_10 = (struct gre_sockets *)FUNC_3();
  }
  VAR_22 = FUNC_5(VAR_15, VAR_20->sin_addr.s_addr,
      VAR_19->sin_addr.s_addr, VAR_15->gre_options);
  if (VAR_22 == VAR_1)
   break;
  if (VAR_22 == VAR_2) {

   VAR_22 = 0;
   break;
  }
  VAR_21 = FUNC_6(sizeof(struct greudp) + 3 * sizeof(uint32_t),
      VAR_5, VAR_6 | VAR_7);
  VAR_21->ip_src.s_addr = VAR_20->sin_addr.s_addr;
  VAR_21->ip_dst.s_addr = VAR_19->sin_addr.s_addr;
  if (VAR_15->gre_family != 0) {

   FUNC_0(VAR_15, VAR_12);
   FUNC_0(VAR_15, VAR_14);
   FUNC_1();
   FUNC_2(VAR_15->gre_hdr, VAR_5);

  }
  VAR_15->gre_family = VAR_0;
  VAR_15->gre_hdr = VAR_21;
  VAR_15->gre_oseq = 0;
  VAR_15->gre_iseq = VAR_8;
  VAR_22 = FUNC_4(VAR_15);
  if (VAR_22 != 0) {
   VAR_15->gre_family = 0;
   FUNC_2(VAR_15->gre_hdr, VAR_5);
  }
  break;
 case 129:
 case 130:
  if (VAR_15->gre_family != VAR_0) {
   VAR_22 = VAR_1;
   break;
  }
  VAR_20 = (struct sockaddr_in *)&VAR_18->ifr_addr;
  FUNC_7(VAR_20, 0, sizeof(*VAR_20));
  VAR_20->sin_family = VAR_0;
  VAR_20->sin_len = sizeof(*VAR_20);
  VAR_20->sin_addr = (VAR_16 == 129) ?
      VAR_15->gre_oip.ip_src: VAR_15->gre_oip.ip_dst;
  VAR_22 = FUNC_8(VAR_13->td_ucred, (struct sockaddr *)VAR_20);
  if (VAR_22 != 0)
   FUNC_7(VAR_20, 0, sizeof(*VAR_20));
  break;
 }
 return (VAR_22);
}
