
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddrs {int ifa_flags; int ifa_netmask; int ifa_addr; int ifa_name; struct ifaddrs* ifa_next; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct ifaddrs*) ;
 scalar_t__ FUNC_5 (struct ifaddrs**) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_6(void)
{
 struct ifaddrs *VAR_2, *VAR_3;

 VAR_1 = 0;

 if(FUNC_5(&VAR_2))
  FUNC_0("NET_GetLocalAddress: Unable to get list of network interfaces: %s\n", FUNC_2());
 else
 {
  for(VAR_3 = VAR_2; VAR_3; VAR_3 = VAR_3->ifa_next)
  {

   if(VAR_2->ifa_flags & VAR_0)
    FUNC_1(VAR_3->ifa_name, VAR_3->ifa_addr, VAR_3->ifa_netmask);
  }

  FUNC_4(VAR_2);

  FUNC_3();
 }
}
