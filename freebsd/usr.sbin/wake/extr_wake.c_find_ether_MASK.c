
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_dl {scalar_t__ sdl_type; } ;
struct ifaddrs {int ifa_flags; int ifa_name; TYPE_1__* ifa_addr; struct ifaddrs* ifa_next; } ;
struct TYPE_2__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ifaddrs*) ;
 scalar_t__ FUNC_1 (struct ifaddrs**) ;
 int FUNC_2 (char*,int ,size_t) ;

__attribute__((used)) static int
FUNC_3(char *VAR_4, size_t VAR_5)
{
 struct ifaddrs *VAR_6, *VAR_7;
 struct sockaddr_dl *VAR_8 = ((void*)0);
 int VAR_9;

 if (VAR_4 == ((void*)0) || VAR_5 == 0)
  return (0);

 if (FUNC_1(&VAR_6) != 0)
  return (-1);


 for (VAR_9 = 0, VAR_7 = VAR_6; VAR_7; VAR_7 = VAR_7->ifa_next)
  if (VAR_7->ifa_addr->sa_family == VAR_0 &&
      VAR_7->ifa_flags & VAR_2 && VAR_7->ifa_flags & VAR_1) {
   VAR_8 = (struct sockaddr_dl *)VAR_7->ifa_addr;
   if (VAR_8->sdl_type == VAR_3) {
    FUNC_2(VAR_4, VAR_7->ifa_name, VAR_5);
    VAR_9++;
   }
  }

 FUNC_0(VAR_6);
 return (VAR_9 == 1 ? 0 : -1);
}
