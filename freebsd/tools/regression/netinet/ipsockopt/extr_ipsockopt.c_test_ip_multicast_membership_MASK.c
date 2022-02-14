
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {void* s_addr; } ;
struct TYPE_3__ {void* s_addr; } ;
struct ip_mreq {TYPE_2__ imr_multiaddr; TYPE_1__ imr_interface; } ;
typedef int sotype ;
typedef int socklen_t ;
typedef int mreq ;
typedef int addrbuf ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int,int ,int ,int*,int*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ,TYPE_2__*,char*,int) ;
 int VAR_9 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int,int ,int ,struct ip_mreq*,int) ;
 int FUNC_7 () ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void
FUNC_8(int VAR_12, const char *VAR_13)
{
    char VAR_14[16];
    struct ip_mreq VAR_15;
    uint32_t VAR_16;
    uint16_t VAR_17;
    int VAR_18;
    socklen_t VAR_19;

    VAR_19 = sizeof(VAR_18);
    if (FUNC_2(VAR_12, VAR_6, VAR_7, &VAR_18, &VAR_19) < 0)
 FUNC_0(-1, "test_ip_multicast_membership(%s): so_type getsockopt()",
     VAR_13);




    if (VAR_18 == VAR_5)
 return;
    if (VAR_8) {

 FUNC_7();
 VAR_16 = 0xEE000000;
 VAR_16 |= ((FUNC_5() % ((1 << 11) - 1)) << 16);
    } else {

 VAR_16 = 0xEE010100;
    }





    for (VAR_17 = 1; VAR_17 < VAR_9+1; VAR_17++) {
 VAR_15.imr_multiaddr.s_addr = FUNC_3((VAR_16 + VAR_17));
 VAR_15.imr_interface.s_addr = VAR_1;
 FUNC_4(VAR_0, &VAR_15.imr_multiaddr, VAR_14, sizeof(VAR_14));
 if (VAR_11)
  FUNC_1(VAR_10, "IP_ADD_MEMBERSHIP %s INADDR_ANY\n", VAR_14);
 if (FUNC_6(VAR_12, VAR_2, VAR_3, &VAR_15,
         sizeof(VAR_15)) < 0) {
  FUNC_0(-1,
"test_ip_multicast_membership(%d, %s): failed IP_ADD_MEMBERSHIP (%s, %s)",
      VAR_12, VAR_13, VAR_14, "INADDR_ANY");
 }
    }
    for (VAR_17 = 1; VAR_17 < VAR_9+1; VAR_17++) {
 VAR_15.imr_multiaddr.s_addr = FUNC_3((VAR_16 + VAR_17));
 VAR_15.imr_interface.s_addr = VAR_1;
 FUNC_4(VAR_0, &VAR_15.imr_multiaddr, VAR_14, sizeof(VAR_14));
 if (VAR_11)
  FUNC_1(VAR_10, "IP_DROP_MEMBERSHIP %s INADDR_ANY\n", VAR_14);
 if (FUNC_6(VAR_12, VAR_2, VAR_4, &VAR_15,
         sizeof(VAR_15)) < 0) {
  FUNC_0(-1,
"test_ip_multicast_membership(%d, %s): failed IP_DROP_MEMBERSHIP (%s, %s)",
      VAR_12, VAR_13, VAR_14, "INADDR_ANY");
 }
    }
}
