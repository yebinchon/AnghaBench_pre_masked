
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct if_info {int ii_ifname; int ii_fd; int ii_ipaddr; scalar_t__ ii_eaddr; } ;
struct ether_header {int ether_shost; int ether_dhost; int ether_type; } ;
struct ether_arp {int arp_tha; scalar_t__ arp_spa; scalar_t__ arp_tpa; int arp_sha; int arp_op; } ;
typedef int in_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,scalar_t__,scalar_t__,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_8 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_9(struct if_info *VAR_5, struct ether_header *VAR_6, in_addr_t VAR_7,
  u_int VAR_8)
{
 u_int VAR_9;
 struct ether_arp *VAR_10 = (struct ether_arp *)(VAR_6 + 1);

 FUNC_7((u_char *)&VAR_10->arp_sha, VAR_7);




 VAR_10->arp_op = FUNC_3(VAR_3);




 FUNC_0((char *)&VAR_10->arp_sha, (char *)&VAR_6->ether_dhost, 6);
 FUNC_0((char *)VAR_5->ii_eaddr, (char *)&VAR_6->ether_shost, 6);
 FUNC_0((char *)VAR_5->ii_eaddr, (char *)&VAR_10->arp_sha, 6);

 FUNC_0((char *)&VAR_7, (char *)VAR_10->arp_tpa, 4);

 FUNC_0((char *)&VAR_5->ii_ipaddr, (char *)VAR_10->arp_spa, 4);


 FUNC_1((char *)VAR_6 + (sizeof(*VAR_6) + sizeof(*VAR_10)),
   VAR_8 - (sizeof(*VAR_6) + sizeof(*VAR_10)));
 VAR_9 = FUNC_8(VAR_5->ii_fd, (char *)VAR_6, VAR_8);
 if (VAR_9 != VAR_8)
  FUNC_5(VAR_1, "write: only %d of %d bytes written", VAR_9, VAR_8);
 if (VAR_4)
  FUNC_5(VAR_2, "%s %s at %s REPLIED", VAR_5->ii_ifname,
      FUNC_2(VAR_10->arp_tha),
      FUNC_4(FUNC_6(VAR_7)));
}
