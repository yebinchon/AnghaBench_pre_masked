
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ether_addr {int dummy; } ;
struct mac_range {struct ether_addr start; int name; struct ether_addr end; } ;
struct TYPE_6__ {struct ether_addr* ether_dhost; struct ether_addr* ether_shost; } ;
struct TYPE_5__ {void* dst_mac_range; TYPE_1__* g; struct ether_addr* dst_mac; void* src_mac_range; struct ether_addr* src_mac; } ;
struct TYPE_4__ {int dst_mac; int src_mac; } ;


 int FUNC_0 (char*,int ,...) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ether_addr*,struct ether_addr*,int) ;
 TYPE_3__* VAR_0 ;
 struct ether_addr* FUNC_3 (int ) ;
 int FUNC_4 (struct ether_addr*) ;
 scalar_t__ FUNC_5 (int ,char) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_6(struct mac_range *VAR_4)
{
 struct ether_addr *VAR_5;
 if (VAR_3)
     FUNC_0("extract MAC range from %s", VAR_4->name);

 VAR_5 = FUNC_3(VAR_4->name);
 if (VAR_5 == ((void*)0)) {
  FUNC_0("invalid MAC address '%s'", VAR_4->name);
  return 1;
 }
 FUNC_2(VAR_5, &VAR_4->start, 6);
 FUNC_2(VAR_5, &VAR_4->end, 6);
 if (VAR_3)
  FUNC_0("%s starts at %s", VAR_4->name, FUNC_4(&VAR_4->start));
 return 0;
}
