
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; int set; } ;
struct TYPE_6__ {int flags; int clat_plen; int clat_prefix; int plat_plen; int plat_prefix; } ;
struct nat64clat_cfg {TYPE_1__ no; TYPE_2__ base; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_7__ {int flags; int name; int set; int clat_plen; int clat_prefix; int plat_plen; int plat_prefix; } ;
typedef TYPE_3__ ipfw_nat64clat_cfg ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct ip_fw_chain *VAR_1, struct nat64clat_cfg *VAR_2,
    ipfw_nat64clat_cfg *VAR_3)
{
 VAR_3->plat_prefix = VAR_2->base.plat_prefix;
 VAR_3->plat_plen = VAR_2->base.plat_plen;
 VAR_3->clat_prefix = VAR_2->base.clat_prefix;
 VAR_3->clat_plen = VAR_2->base.clat_plen;
 VAR_3->flags = VAR_2->base.flags & VAR_0;
 VAR_3->set = VAR_2->no.set;
 FUNC_0(VAR_3->name, VAR_2->no.name, sizeof(VAR_3->name));
}
