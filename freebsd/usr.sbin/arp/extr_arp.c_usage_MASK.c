
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(VAR_0, "%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
     "usage: arp [-n] [-i interface] hostname",
     "       arp [-n] [-i interface] -a",
     "       arp -d hostname [pub]",
     "       arp -d [-i interface] -a",
     "       arp -s hostname ether_addr [temp] [reject | blackhole] [pub [only]]",
     "       arp -S hostname ether_addr [temp] [reject | blackhole] [pub [only]]",
     "       arp -f filename");
 FUNC_0(1);
}
