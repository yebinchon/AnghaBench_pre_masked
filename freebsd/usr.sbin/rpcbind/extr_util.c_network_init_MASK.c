
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
typedef struct sockaddr_in6 sockaddr_in ;
struct ipv6_mreq {unsigned int ipv6mr_interface; int ipv6mr_multiaddr; } ;
struct ifaddrs {int ifa_flags; int ifa_name; TYPE_1__* ifa_addr; struct ifaddrs* ifa_next; } ;
struct addrinfo {int ai_addr; scalar_t__ ai_family; } ;
struct TYPE_2__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (struct ifaddrs*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int *,char*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_6 (struct ifaddrs**) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int ,int *) ;
 struct sockaddr_in6* VAR_9 ;
 struct sockaddr_in6* VAR_10 ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct sockaddr_in6*,int ,int) ;
 int FUNC_11 (struct addrinfo*,int ,int) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int,int ,int ,struct ipv6_mreq*,int) ;
 int FUNC_14 (scalar_t__,int ,int ) ;
 int VAR_11 ;

void
FUNC_15(void)
{






 int VAR_12;
 struct addrinfo VAR_13, *VAR_14;

 FUNC_11(&VAR_13, 0, sizeof VAR_13);
 VAR_13.ai_family = VAR_0;
 if ((VAR_12 = FUNC_5(((void*)0), "sunrpc", &VAR_13, &VAR_14))) {
  if (VAR_8)
   FUNC_1(VAR_11, "can't get local ip4 address: %s\n",
       FUNC_4(VAR_12));
 } else {
  VAR_9 = (struct sockaddr_in *)FUNC_9(sizeof *VAR_9);
  if (VAR_9 == ((void*)0)) {
   if (VAR_8)
    FUNC_1(VAR_11, "can't alloc local ip4 addr\n");
   FUNC_0(1);
  }
  FUNC_10(VAR_9, VAR_14->ai_addr, sizeof *VAR_9);
  FUNC_2(VAR_14);
 }
}
