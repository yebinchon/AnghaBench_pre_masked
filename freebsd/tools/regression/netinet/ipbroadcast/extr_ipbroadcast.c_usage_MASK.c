
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 char* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_2(void)
{

 FUNC_1(VAR_5, "IPv4 broadcast test program. Sends a %d byte UDP "
         "datagram to <dest>:<port>.\n\n", VAR_0);
 FUNC_1(VAR_5,
"usage: %s [-1] [-A laddr] [-b] [-B] [-d] [-i iface] [-l len]\n"
"                   [-p port] [-R] [-s srcaddr] [-t ttl] <dest>\n",
     VAR_4);
 FUNC_1(VAR_5, "-1: Set IP_ONESBCAST\n");
 FUNC_1(VAR_5, "-A: specify laddr (default: INADDR_ANY)\n");
 FUNC_1(VAR_5, "-b: bind socket to <laddr>:<lport>\n");
 FUNC_1(VAR_5, "-B: Set SO_BROADCAST\n");
 FUNC_1(VAR_5, "-d: Set SO_DONTROUTE\n");
 FUNC_1(VAR_5, "-i: Set IP_SENDIF <iface> (if supported)\n");
 FUNC_1(VAR_5, "-l: Set payload size to <len>\n");
 FUNC_1(VAR_5, "-p: Set local and remote port (default: %d)\n",
     VAR_1);
 FUNC_1(VAR_5, "-R: Use raw IP (protocol %d)\n", VAR_3);



 FUNC_1(VAR_5, "-s: Set IP_SENDSRCADDR to <srcaddr>\n");
 FUNC_1(VAR_5, "-t: Set IP_TTL to <ttl>\n");

 FUNC_0(VAR_2);
}
