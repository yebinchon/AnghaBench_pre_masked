
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* s_addr; } ;
struct TYPE_4__ {void* s_addr; } ;
struct ip_mreq {TYPE_1__ imr_interface; TYPE_2__ imr_multiaddr; } ;
typedef int imr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ip_mreq*,int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int ,int ,struct ip_mreq*,int) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (char*,char const*,...) ;

__attribute__((used)) static int
FUNC_6(int *VAR_5, int VAR_6, const char *VAR_7)
{
 struct ip_mreq VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_4, VAR_6, 0);
 if (VAR_9 < 0) {
  FUNC_5("multicast_test: socket(PF_INET, %s, 0)", VAR_7);
  return (-1);
 }

 FUNC_0(&VAR_8, sizeof(VAR_8));
 VAR_8.imr_multiaddr.s_addr = FUNC_2(VAR_3);
 VAR_8.imr_interface.s_addr = FUNC_2(VAR_0);

 if (FUNC_3(VAR_9, VAR_1, VAR_2, &VAR_8,
     sizeof(VAR_8)) < 0) {
  FUNC_5("multicast_test: setsockopt(IPPROTO_IP, "
      "IP_ADD_MEMBERSHIP, {%s, %s})", VAR_3, VAR_0);
  FUNC_1(VAR_9);
  return (-1);
 }

 *VAR_5 = VAR_9;
 return (0);
}
