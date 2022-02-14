
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {void* s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,struct in_addr,struct in_addr,struct in_addr,char*,int,int ) ;

__attribute__((used)) static void
FUNC_2(int VAR_2, int VAR_3, int VAR_4)
{
 struct in_addr VAR_5, VAR_6, VAR_7;

 VAR_5.s_addr = FUNC_0("0.0.0.0");


 VAR_6.s_addr = FUNC_0("127.0.0.1");


 VAR_7.s_addr = FUNC_0("255.255.255.255");

 FUNC_1(VAR_0, "IP_MULTICAST_IF", VAR_5, VAR_6,
     VAR_7, "raw_sock", VAR_2, 0);
 FUNC_1(VAR_0, "IP_MULTICAST_IF", VAR_5, VAR_6,
     VAR_7, "tcp_sock", VAR_3, VAR_1);
 FUNC_1(VAR_0, "IP_MULTICAST_IF", VAR_5, VAR_6,
     VAR_7, "udp_sock", VAR_4, 0);
}
