
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int name; int set; } ;
struct TYPE_5__ {int flags; int plat_plen; int plat_prefix; } ;
struct nat64stl_cfg {int map46; int map64; TYPE_2__ no; TYPE_1__ base; } ;
struct named_object {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_7__ {int flags; int ntlv4; int ntlv6; int name; int set; int plen6; int prefix6; } ;
typedef TYPE_3__ ipfw_nat64stl_cfg ;


 int VAR_0 ;
 int FUNC_0 (struct named_object*,int *) ;
 struct named_object* FUNC_1 (struct ip_fw_chain*,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ip_fw_chain *VAR_1, struct nat64stl_cfg *VAR_2,
    ipfw_nat64stl_cfg *VAR_3)
{
 struct named_object *VAR_4;

 VAR_3->prefix6 = VAR_2->base.plat_prefix;
 VAR_3->plen6 = VAR_2->base.plat_plen;
 VAR_3->flags = VAR_2->base.flags & VAR_0;
 VAR_3->set = VAR_2->no.set;
 FUNC_2(VAR_3->name, VAR_2->no.name, sizeof(VAR_3->name));

 VAR_4 = FUNC_1(VAR_1, VAR_2->map64);
 FUNC_0(VAR_4, &VAR_3->ntlv6);
 VAR_4 = FUNC_1(VAR_1, VAR_2->map46);
 FUNC_0(VAR_4, &VAR_3->ntlv4);
}
