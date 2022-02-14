
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int name; int set; } ;
struct TYPE_7__ {int flags; int plat_plen; int plat_prefix; } ;
struct nat64lsn_cfg {TYPE_3__ no; TYPE_2__ base; int plen4; int prefix4; int st_icmp_ttl; int st_udp_ttl; int st_estab_ttl; int st_close_ttl; int st_syn_ttl; int pg_delete_delay; int host_delete_delay; int jmaxlen; int states_chunks; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_9__ {int flags; int name; int set; int plen6; int plen4; int prefix6; TYPE_1__ prefix4; int st_icmp_ttl; int st_udp_ttl; int st_estab_ttl; int st_close_ttl; int st_syn_ttl; int pg_delete_delay; int nh_delete_delay; int jmaxlen; int states_chunks; } ;
typedef TYPE_4__ ipfw_nat64lsn_cfg ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ip_fw_chain *VAR_1, struct nat64lsn_cfg *VAR_2,
    ipfw_nat64lsn_cfg *VAR_3)
{

 VAR_3->flags = VAR_2->base.flags & VAR_0;
 VAR_3->states_chunks = VAR_2->states_chunks;
 VAR_3->jmaxlen = VAR_2->jmaxlen;
 VAR_3->nh_delete_delay = VAR_2->host_delete_delay;
 VAR_3->pg_delete_delay = VAR_2->pg_delete_delay;
 VAR_3->st_syn_ttl = VAR_2->st_syn_ttl;
 VAR_3->st_close_ttl = VAR_2->st_close_ttl;
 VAR_3->st_estab_ttl = VAR_2->st_estab_ttl;
 VAR_3->st_udp_ttl = VAR_2->st_udp_ttl;
 VAR_3->st_icmp_ttl = VAR_2->st_icmp_ttl;
 VAR_3->prefix4.s_addr = FUNC_0(VAR_2->prefix4);
 VAR_3->prefix6 = VAR_2->base.plat_prefix;
 VAR_3->plen4 = VAR_2->plen4;
 VAR_3->plen6 = VAR_2->base.plat_plen;
 VAR_3->set = VAR_2->no.set;
 FUNC_1(VAR_3->name, VAR_2->no.name, sizeof(VAR_3->name));
}
