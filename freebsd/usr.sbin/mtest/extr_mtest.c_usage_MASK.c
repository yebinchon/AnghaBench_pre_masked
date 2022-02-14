
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(void)
{

 FUNC_0("j mcast-addr ifname [src-addr] - join IP multicast group\n");
 FUNC_0("l mcast-addr ifname [src-addr] - leave IP multicast group\n");
 FUNC_0(
"i mcast-addr ifname n          - set n include mode src filter\n");
 FUNC_0(
"e mcast-addr ifname n          - set n exclude mode src filter\n");
 FUNC_0("t mcast-addr ifname src-addr  - allow traffic from src\n");
 FUNC_0("b mcast-addr ifname src-addr  - block traffic from src\n");
 FUNC_0("g mcast-addr ifname n        - get and show n src filters\n");
 FUNC_0("a ifname mac-addr          - add link multicast filter\n");
 FUNC_0("d ifname mac-addr          - delete link multicast filter\n");
 FUNC_0("m ifname 1/0               - set/clear ether allmulti flag\n");
 FUNC_0("p ifname 1/0               - set/clear ether promisc flag\n");
 FUNC_0("f filename                 - read command(s) from file\n");
 FUNC_0("s seconds                  - sleep for some time\n");
 FUNC_0("q                          - quit\n");
}
