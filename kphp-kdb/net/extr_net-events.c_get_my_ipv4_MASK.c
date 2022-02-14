
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct ifaddrs {char* ifa_name; scalar_t__ ifa_netmask; TYPE_1__* ifa_addr; struct ifaddrs* ifa_next; } ;
struct TYPE_3__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct ifaddrs*) ;
 scalar_t__ FUNC_2 (struct ifaddrs**) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int,char*,unsigned int,unsigned int,unsigned int,unsigned int,int ,char*) ;

unsigned FUNC_7 (void) {
  struct ifaddrs *VAR_1, *VAR_2;
  unsigned VAR_3 = 0, VAR_4 = -1;
  char *VAR_5 = 0;
  if (FUNC_2 (&VAR_1) < 0) {
    FUNC_4 ("getifaddrs()");
    return 0;
  }
  for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->ifa_next) {
    if (VAR_2->ifa_addr->sa_family != VAR_0) {
      continue;
    }
    if (!FUNC_5 (VAR_2->ifa_name, "lo", 2)) {
      continue;
    }
    unsigned VAR_6 = FUNC_3 (((struct sockaddr_in *) VAR_2->ifa_addr)->sin_addr.s_addr);
    unsigned VAR_7 = FUNC_3 (((struct sockaddr_in *) VAR_2->ifa_netmask)->sin_addr.s_addr);

    if ((VAR_6 & (-1 << 24)) == (10 << 24) && VAR_7 < VAR_4) {
      VAR_3 = VAR_6;
      VAR_4 = VAR_7;
      VAR_5 = VAR_2->ifa_name;
    }
  }
  FUNC_6 (1, "using main IP %d.%d.%d.%d/%d at interface %s\n", (VAR_3 >> 24), (VAR_3 >> 16) & 255, (VAR_3 >> 8) & 255, VAR_3 & 255,
     FUNC_0 (~VAR_4), VAR_5 ?: "(none)");
  FUNC_1 (VAR_1);
  return VAR_3;
}
