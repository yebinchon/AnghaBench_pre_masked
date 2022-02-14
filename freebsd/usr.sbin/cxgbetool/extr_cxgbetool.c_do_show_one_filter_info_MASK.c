
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int fcoe; int iport; int pfvf_vld; int vnic; int ovlan_vld; int vlan_vld; int vlan; int tos; int proto; int ethtype; int macidx; int matchtype; int frag; int dport; int sport; int sip; int dip; } ;
struct TYPE_4__ {int fcoe; int iport; int pfvf_vld; int vnic; int ovlan_vld; int vlan_vld; int vlan; int tos; int proto; int ethtype; int macidx; int matchtype; int frag; int dport; int sport; int sip; int dip; } ;
struct TYPE_6__ {scalar_t__ action; int eport; int* dmac; int* smac; scalar_t__ newvlan; int vlan; scalar_t__ dirsteer; int iq; scalar_t__ dirsteerhash; scalar_t__ rpttid; scalar_t__ prio; scalar_t__ maskhash; scalar_t__ newsmac; scalar_t__ newdmac; TYPE_2__ mask; TYPE_1__ val; int type; } ;
struct t4_filter {int idx; int l2tidx; int smtidx; TYPE_3__ fs; int hits; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct t4_filter *VAR_8, uint32_t VAR_9)
{
 uint32_t VAR_10;

 FUNC_1("%4d", VAR_8->idx);
 if (VAR_8->hits == VAR_3)
  FUNC_1(" %8s", "-");
 else
  FUNC_1(" %8ju", VAR_8->hits);




 for (VAR_10 = 136; VAR_10 <= 135; VAR_10 <<= 1) {
  switch (VAR_9 & VAR_10) {
  case 136:
   FUNC_1("  %1d/%1d", VAR_8->fs.val.fcoe, VAR_8->fs.mask.fcoe);
   break;

  case 130:
   FUNC_1("  %1d/%1d", VAR_8->fs.val.iport, VAR_8->fs.mask.iport);
   break;

  case 128:
   if (VAR_9 & VAR_2) {
    FUNC_1(" %1d:%1x:%02x/%1d:%1x:%02x",
        VAR_8->fs.val.pfvf_vld,
        (VAR_8->fs.val.vnic >> 13) & 0x7,
        VAR_8->fs.val.vnic & 0x1fff,
        VAR_8->fs.mask.pfvf_vld,
        (VAR_8->fs.mask.vnic >> 13) & 0x7,
        VAR_8->fs.mask.vnic & 0x1fff);
   } else {
    FUNC_1(" %1d:%04x/%1d:%04x",
        VAR_8->fs.val.ovlan_vld, VAR_8->fs.val.vnic,
        VAR_8->fs.mask.ovlan_vld, VAR_8->fs.mask.vnic);
   }
   break;

  case 129:
   FUNC_1(" %1d:%04x/%1d:%04x",
       VAR_8->fs.val.vlan_vld, VAR_8->fs.val.vlan,
       VAR_8->fs.mask.vlan_vld, VAR_8->fs.mask.vlan);
   break;

  case 133:
   FUNC_1(" %02x/%02x", VAR_8->fs.val.tos, VAR_8->fs.mask.tos);
   break;

  case 134:
   FUNC_1(" %02x/%02x", VAR_8->fs.val.proto, VAR_8->fs.mask.proto);
   break;

  case 137:
   FUNC_1(" %04x/%04x", VAR_8->fs.val.ethtype,
       VAR_8->fs.mask.ethtype);
   break;

  case 132:
   FUNC_1(" %03x/%03x", VAR_8->fs.val.macidx,
       VAR_8->fs.mask.macidx);
   break;

  case 131:
   FUNC_1(" %1x/%1x", VAR_8->fs.val.matchtype,
       VAR_8->fs.mask.matchtype);
   break;

  case 135:
   FUNC_1("  %1d/%1d", VAR_8->fs.val.frag, VAR_8->fs.mask.frag);
   break;

  default:

   break;
  }
 }




 FUNC_0(VAR_8->fs.type, VAR_8->fs.val.dip, VAR_8->fs.mask.dip);
 FUNC_0(VAR_8->fs.type, VAR_8->fs.val.sip, VAR_8->fs.mask.sip);
 FUNC_1(" %04x/%04x %04x/%04x",
   VAR_8->fs.val.dport, VAR_8->fs.mask.dport,
   VAR_8->fs.val.sport, VAR_8->fs.mask.sport);




 if (VAR_8->fs.action == VAR_0)
  FUNC_1(" Drop");
 else if (VAR_8->fs.action == VAR_1) {
  FUNC_1(" Switch: port=%d", VAR_8->fs.eport);
 if (VAR_8->fs.newdmac)
  FUNC_1(
   ", dmac=%02x:%02x:%02x:%02x:%02x:%02x "
   ", l2tidx=%d",
   VAR_8->fs.dmac[0], VAR_8->fs.dmac[1],
   VAR_8->fs.dmac[2], VAR_8->fs.dmac[3],
   VAR_8->fs.dmac[4], VAR_8->fs.dmac[5],
   VAR_8->l2tidx);
 if (VAR_8->fs.newsmac)
  FUNC_1(
   ", smac=%02x:%02x:%02x:%02x:%02x:%02x "
   ", smtidx=%d",
   VAR_8->fs.smac[0], VAR_8->fs.smac[1],
   VAR_8->fs.smac[2], VAR_8->fs.smac[3],
   VAR_8->fs.smac[4], VAR_8->fs.smac[5],
   VAR_8->smtidx);
 if (VAR_8->fs.newvlan == VAR_5)
  FUNC_1(", vlan=none");
 else if (VAR_8->fs.newvlan == VAR_4)
  FUNC_1(", vlan=insert(%x)", VAR_8->fs.vlan);
 else if (VAR_8->fs.newvlan == VAR_6)
  FUNC_1(", vlan=rewrite(%x)", VAR_8->fs.vlan);
 } else {
  FUNC_1(" Pass: Q=");
  if (VAR_8->fs.dirsteer == 0) {
   FUNC_1("RSS");
   if (VAR_8->fs.maskhash)
    FUNC_1("(region %d)", VAR_8->fs.iq << 1);
  } else {
   FUNC_1("%d", VAR_8->fs.iq);
   if (VAR_8->fs.dirsteerhash == 0)
    FUNC_1("(QID)");
   else
    FUNC_1("(hash)");
  }
 }
 if (VAR_7 <= 5 && VAR_8->fs.prio)
  FUNC_1(" Prio");
 if (VAR_8->fs.rpttid)
  FUNC_1(" RptTID");
 FUNC_1("\n");
}
