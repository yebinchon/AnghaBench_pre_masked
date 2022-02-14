
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
typedef int u_char ;
struct ether_header {int ether_shost; int ether_type; } ;
struct ether_arp {int arp_hln; int arp_pln; int arp_tha; int arp_sha; int arp_pro; int arp_op; int arp_hrd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(u_char *VAR_6, u_int VAR_7)
{
 struct ether_header *VAR_8 = (struct ether_header *)VAR_6;
 struct ether_arp *VAR_9 = (struct ether_arp *)(VAR_6 + sizeof(*VAR_8));

 if (VAR_7 < sizeof(*VAR_8) + sizeof(*VAR_9)) {
  FUNC_1(VAR_4, "truncated request, got %u, expected %lu",
    VAR_7, (u_long)(sizeof(*VAR_8) + sizeof(*VAR_9)));
  return 0;
 }



 if (FUNC_2(VAR_8->ether_type) != VAR_2 ||
     FUNC_2(VAR_9->arp_hrd) != VAR_0 ||
     FUNC_2(VAR_9->arp_op) != VAR_5 ||
     FUNC_2(VAR_9->arp_pro) != VAR_1 ||
     VAR_9->arp_hln != 6 || VAR_9->arp_pln != 4) {
  FUNC_1(VAR_3, "request fails sanity check");
  return 0;
 }
 if (FUNC_0((char *)&VAR_8->ether_shost, (char *)&VAR_9->arp_sha, 6) != 0) {
  FUNC_1(VAR_3, "ether/arp sender address mismatch");
  return 0;
 }
 if (FUNC_0((char *)&VAR_9->arp_sha, (char *)&VAR_9->arp_tha, 6) != 0) {
  FUNC_1(VAR_3, "ether/arp target address mismatch");
  return 0;
 }
 return 1;
}
