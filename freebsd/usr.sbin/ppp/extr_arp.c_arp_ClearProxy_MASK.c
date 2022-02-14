
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct in_addr {int s_addr; } ;
struct bundle {int dummy; } ;
struct arpreq {int arp_pa; } ;
typedef int caddr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct arpreq*,char,int) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct bundle *VAR_4, struct in_addr VAR_5, int VAR_6)
{
  struct arpreq VAR_7;

  FUNC_3(&VAR_7, '\0', sizeof VAR_7);
  FUNC_1(VAR_7.arp_pa, VAR_0);
  ((struct sockaddr_in *)&VAR_7.arp_pa)->sin_addr.s_addr = VAR_5.s_addr;
  if (FUNC_0(VAR_6, VAR_2, (caddr_t) & VAR_7) < 0) {
    FUNC_2(VAR_1, "arp_ClearProxy: ioctl(SIOCDARP): %s\n",
               FUNC_4(VAR_3));
    return 0;
  }
  return 1;
}
