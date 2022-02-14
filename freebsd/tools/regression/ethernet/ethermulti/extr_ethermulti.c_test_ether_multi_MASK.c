
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct sockaddr_dl {int sdl_len; int sdl_alen; scalar_t__ sdl_family; int ifr_addr; int * ifr_name; } ;
struct ifreq {int sdl_len; int sdl_alen; scalar_t__ sdl_family; int ifr_addr; int * ifr_name; } ;
struct ifmaddrs {int * ifma_name; scalar_t__ ifma_addr; struct ifmaddrs* ifma_next; } ;
struct ether_addr {int* octet; } ;
struct TYPE_3__ {scalar_t__ sa_family; } ;
struct TYPE_4__ {struct sockaddr_dl sdl; TYPE_1__ sa; } ;
typedef TYPE_2__ sockunion_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_5 ;
 struct ether_addr* FUNC_2 (char*) ;
 int FUNC_3 (struct ether_addr*) ;
 int FUNC_4 (struct ifmaddrs*) ;
 scalar_t__ FUNC_5 (struct ifmaddrs**) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int,int ,struct sockaddr_dl*) ;
 int FUNC_7 (int ,struct ether_addr*,int) ;
 int FUNC_8 (struct sockaddr_dl*,int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int ) ;

__attribute__((used)) static void
FUNC_14(int VAR_7)
{
 struct ifreq VAR_8;
 struct sockaddr_dl *VAR_9;
 struct ether_addr VAR_10;
 struct ifmaddrs *VAR_11, *VAR_12;
 int VAR_13;


 if (VAR_5) {
  uint32_t VAR_14;

  FUNC_10();
  VAR_14 = FUNC_9();
  VAR_10.octet[0] = 0x01;
  VAR_10.octet[1] = 0x80;
  VAR_10.octet[2] = ((VAR_14 >> 24 & 0xFF));
  VAR_10.octet[3] = ((VAR_14 >> 16 & 0xFF));
  VAR_10.octet[4] = ((VAR_14 >> 8 & 0xFF));
  VAR_10.octet[5] = (VAR_14 & 0xFF);
 } else {
  struct ether_addr *VAR_15 = FUNC_2("01:80:DE:FA:CA:7E");
  VAR_10 = *VAR_15;
 }


 FUNC_8(&VAR_8, 0, sizeof(struct ifreq));
 FUNC_11(&VAR_8.ifr_name[0], VAR_6, VAR_2);
 VAR_9 = (struct sockaddr_dl *)&VAR_8.ifr_addr;
 FUNC_8(VAR_9, 0, sizeof(struct sockaddr_dl));
 VAR_9->sdl_len = sizeof(struct sockaddr_dl);
 VAR_9->sdl_family = VAR_0;
 VAR_9->sdl_alen = sizeof(struct ether_addr);
 FUNC_7(FUNC_0(VAR_9), &VAR_10, sizeof(struct ether_addr));


 if (FUNC_6(VAR_7, VAR_3, &VAR_8) < 0) {
  FUNC_12("can't add ethernet multicast membership");
  return;
 }


 VAR_13 = 0;
 if (FUNC_5(&VAR_12) != 0) {
  FUNC_12("getifmaddrs()");
 } else {
  for (VAR_11 = VAR_12; VAR_11; VAR_11 = VAR_11->ifma_next) {
   sockunion_t *VAR_16 = (sockunion_t *)VAR_11->ifma_addr;
   if (VAR_11->ifma_name == ((void*)0) || VAR_16 == ((void*)0))
    continue;

   if (VAR_16->sa.sa_family != VAR_0 ||
       VAR_16->sdl.sdl_alen != VAR_1)
    continue;

   if (FUNC_1(FUNC_0(&VAR_16->sdl), FUNC_0(VAR_9),
       VAR_1) == 0) {
    VAR_13 = 1;
    break;
   }
  }
  FUNC_4(VAR_12);
 }
 if (!VAR_13) {
  FUNC_13("group membership for %s not returned by getifmaddrs()",
     FUNC_3(&VAR_10));
 }


 FUNC_8(&VAR_8, 0, sizeof(struct ifreq));
 FUNC_11(&VAR_8.ifr_name[0], VAR_6, VAR_2);
 VAR_9 = (struct sockaddr_dl *)&VAR_8.ifr_addr;
 FUNC_8(VAR_9, 0, sizeof(struct sockaddr_dl));
 VAR_9->sdl_len = sizeof(struct sockaddr_dl);
 VAR_9->sdl_family = VAR_0;
 VAR_9->sdl_alen = sizeof(struct ether_addr);
 FUNC_7(FUNC_0(VAR_9), &VAR_10, sizeof(struct ether_addr));


 if (FUNC_6(VAR_7, VAR_4, &VAR_8) < 0)
  FUNC_12("can't delete ethernet multicast membership");

}
