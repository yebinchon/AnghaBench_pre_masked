
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct sockaddr_dl {int sdl_alen; } ;
struct sockaddr {int dummy; } ;
struct in_addr {int s_addr; } ;
struct bundle {int dummy; } ;
struct TYPE_3__ {int sa_len; int sa_data; int sa_family; } ;
struct arpreq {int arp_flags; int arp_pa; TYPE_1__ arp_ha; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct sockaddr_dl*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct in_addr,struct sockaddr_dl*,int) ;
 int VAR_7 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct arpreq*,char,int) ;
 int FUNC_7 (int ) ;

int
FUNC_8(struct bundle *VAR_8, struct in_addr VAR_9, int VAR_10)
{
  struct arpreq VAR_11;
  struct {
    struct sockaddr_dl sdl;
    char space[128];
  } VAR_12;

  FUNC_6(&VAR_11, '\0', sizeof VAR_11);





  if (!FUNC_3(VAR_9, &VAR_12.sdl, 1)) {
    FUNC_4(VAR_4, "Cannot determine ethernet address for "
               "proxy ARP\n");
    return 0;
  }
  VAR_11.arp_ha.sa_len = sizeof(struct sockaddr);
  VAR_11.arp_ha.sa_family = VAR_1;
  FUNC_5(VAR_11.arp_ha.sa_data, FUNC_1(&VAR_12.sdl), VAR_12.sdl.sdl_alen);
  FUNC_2(VAR_11.arp_pa, VAR_0);
  ((struct sockaddr_in *)&VAR_11.arp_pa)->sin_addr.s_addr = VAR_9.s_addr;
  VAR_11.arp_flags = VAR_2 | VAR_3;
  if (FUNC_0(VAR_10, VAR_6, (caddr_t) & VAR_11) < 0) {
    FUNC_4(VAR_5, "arp_SetProxy: ioctl(SIOCSARP): %s\n",
               FUNC_7(VAR_7));
    return 0;
  }
  return 1;
}
