
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ifr_name; } ;
struct wlanstatfoo_p {int mac; TYPE_1__ ifr; } ;
struct sockaddr_dl {int dummy; } ;
struct ifaddrs {TYPE_2__* ifa_addr; int ifa_name; struct ifaddrs* ifa_next; } ;
struct TYPE_4__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sockaddr_dl const*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 (struct ifaddrs*) ;
 scalar_t__ FUNC_5 (struct ifaddrs**) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct wlanstatfoo_p *VAR_1)
{
 const struct sockaddr_dl *VAR_2;
 struct ifaddrs *VAR_3, *VAR_4;

 if (FUNC_5(&VAR_3) != 0)
  FUNC_2(1, "getifaddrs");
 for (VAR_4 = VAR_3; VAR_4 != ((void*)0); VAR_4 = VAR_4->ifa_next)
  if (FUNC_6(VAR_4->ifa_name, VAR_1->ifr.ifr_name) == 0 &&
      VAR_4->ifa_addr->sa_family == VAR_0)
   break;
 if (VAR_4 == ((void*)0))
  FUNC_3(1, "did not find link layer address for interface %s",
   VAR_1->ifr.ifr_name);
 VAR_2 = (const struct sockaddr_dl *) VAR_4->ifa_addr;
 FUNC_0(VAR_1->mac, FUNC_1(VAR_2));
 FUNC_4(VAR_3);
}
