
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_3__ sin_addr; void* sin_port; void* sin_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_5__ {void* s_addr; } ;
struct TYPE_4__ {void* s_addr; } ;
struct ip_mreq {TYPE_2__ imr_interface; TYPE_1__ imr_multiaddr; } ;
struct in_addr {void* s_addr; } ;
typedef int ssize_t ;
typedef int sin ;
typedef int message ;
typedef int if_addr ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (struct sockaddr_in*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,char*,char,...) ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 void* FUNC_6 (int ) ;
 void* FUNC_7 (char*) ;
 int FUNC_8 (int,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_9 (int,char*,int,int ,struct sockaddr*,int) ;
 scalar_t__ FUNC_10 (int,int ,int ,struct in_addr*,int) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int,char*,struct ip_mreq,int ) ;
 int FUNC_13 (int,char*,struct ip_mreq,int ) ;

__attribute__((used)) static void
FUNC_14(void)
{
 struct sockaddr_in VAR_9;
 struct ip_mreq VAR_10;
 struct in_addr VAR_11;
 char VAR_12;
 ssize_t VAR_13;
 int VAR_14;

 VAR_14 = FUNC_11(VAR_5, VAR_6, 0);
 if (VAR_14 < 0)
  FUNC_3(-1, "FAIL: test_udp: socket(PF_INET, SOCK_DGRAM)");

 if (FUNC_5(VAR_14, VAR_1, VAR_4) < 0)
  FUNC_3(-1, "FAIL: test_udp: fcntl(F_SETFL, O_NONBLOCK)");

 FUNC_1(&VAR_9, sizeof(VAR_9));
 VAR_9.sin_len = sizeof(VAR_9);
 VAR_9.sin_family = VAR_0;
 VAR_9.sin_port = FUNC_6(VAR_8);
 VAR_9.sin_addr.s_addr = FUNC_7(VAR_7);

 if (FUNC_0(VAR_14, (struct sockaddr *)&VAR_9, sizeof(VAR_9)) < 0)
  FUNC_3(-1, "FAIL: test_udp: bind(udp_sock, 127.0.0.1:%d",
      VAR_8);


 VAR_10.imr_multiaddr.s_addr = FUNC_7(VAR_7);


 VAR_10.imr_interface.s_addr = FUNC_7("127.0.0.1");




 VAR_11.s_addr = FUNC_7("127.0.0.1");
 if (FUNC_10(VAR_14, VAR_2, VAR_3, &VAR_11,
     sizeof(VAR_11)) < 0)
  FUNC_3(-1, "test_udp: setsockopt(IPPROTO_IP, IP_MULTICAST_IF)");

 FUNC_12(VAR_14, "udp_sock", VAR_10, 0);

 FUNC_1(&VAR_9, sizeof(VAR_9));
 VAR_9.sin_len = sizeof(VAR_9);
 VAR_9.sin_family = VAR_0;
 VAR_9.sin_port = FUNC_6(VAR_8);
 VAR_9.sin_addr.s_addr = FUNC_7(VAR_7);

 VAR_12 = 'A';
 VAR_13 = sizeof(VAR_12);
 VAR_13 = FUNC_9(VAR_14, &VAR_12, VAR_13, 0, (struct sockaddr *)&VAR_9,
     sizeof(VAR_9));
 if (VAR_13 < 0)
  FUNC_3(-1, "test_udp: sendto");

 if (VAR_13 != sizeof(VAR_12))
  FUNC_4(-1, "test_udp: sendto: expected to send %d, instead %d",
      sizeof(VAR_12), VAR_13);

 VAR_12 = 'B';
 VAR_13 = sizeof(VAR_9);
 VAR_13 = FUNC_8(VAR_14, &VAR_12, sizeof(VAR_12), 0,
     (struct sockaddr *)&VAR_9, &VAR_13);
 if (VAR_13 < 0)
  FUNC_3(-1, "test_udp: recvfrom");

 if (VAR_13 != sizeof(VAR_12))
  FUNC_4(-1, "test_udp: recvfrom: len %d != message len %d",
      VAR_13, sizeof(VAR_12));

 if (VAR_12 != 'A')
  FUNC_4(-1, "test_udp: recvfrom: expected 'A', got '%c'",
      VAR_12);

 FUNC_13(VAR_14, "udp_sock", VAR_10, 0);

 FUNC_2(VAR_14);
}
