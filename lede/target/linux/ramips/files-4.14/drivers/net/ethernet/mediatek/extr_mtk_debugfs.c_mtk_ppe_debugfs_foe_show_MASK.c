
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {int vlan2; int vlan1; int info_blk2; int info_blk1; int etype; int new_dport; int new_sport; int dport; int sport; int dmac_lo; int dmac_hi; int smac_lo; int smac_hi; int new_dip; int new_sip; int dip; int sip; } ;
struct mtk_foe_entry {TYPE_1__ ipv4_hnapt; } ;
struct mtk_eth {struct mtk_foe_entry* foe_table; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mtk_foe_entry*) ;
 int VAR_1 ;
 struct mtk_eth* VAR_2 ;
 int FUNC_1 (struct mtk_foe_entry*,struct mtk_foe_entry*) ;
 int FUNC_2 (struct mtk_foe_entry*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mtk_foe_entry*) ;
 int FUNC_6 (struct seq_file*,char*,int,int ,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct seq_file *VAR_3, void *VAR_4)
{
 struct mtk_eth *VAR_5 = VAR_2;
 struct mtk_foe_entry *VAR_6, *VAR_7;
 int VAR_8 = 0;

 VAR_6 = VAR_5->foe_table;
 VAR_7 = VAR_5->foe_table + VAR_1;

 while (VAR_6 < VAR_7) {
  if (FUNC_0(VAR_6)) {
   __be32 VAR_9 = FUNC_3(VAR_6->ipv4_hnapt.sip);
   __be32 VAR_10 = FUNC_3(VAR_6->ipv4_hnapt.dip);
   __be32 VAR_11 = FUNC_3(VAR_6->ipv4_hnapt.new_sip);
   __be32 VAR_12 = FUNC_3(VAR_6->ipv4_hnapt.new_dip);
   unsigned char VAR_13[VAR_0];
   unsigned char VAR_14[VAR_0];

   *((u32*) VAR_14) = FUNC_8(VAR_6->ipv4_hnapt.smac_hi);
   *((u16*) &VAR_14[4]) = FUNC_7(VAR_6->ipv4_hnapt.smac_lo);
   *((u32*) VAR_13) = FUNC_8(VAR_6->ipv4_hnapt.dmac_hi);
   *((u16*) &VAR_13[4]) = FUNC_7(VAR_6->ipv4_hnapt.dmac_lo);
   FUNC_6(VAR_3,
       "(%x)0x%05x|state=%s|type=%s|"
       "%pI4:%d->%pI4:%d=>%pI4:%d->%pI4:%d|%pM=>%pM|"
       "etype=0x%04x|info1=0x%x|info2=0x%x|"
       "vlan1=%d|vlan2=%d\n",
       VAR_8,
       FUNC_1(VAR_6, VAR_7), FUNC_2(VAR_6), FUNC_5(VAR_6),
       &VAR_9, VAR_6->ipv4_hnapt.sport,
       &VAR_10, VAR_6->ipv4_hnapt.dport,
       &VAR_11, VAR_6->ipv4_hnapt.new_sport,
       &VAR_12, VAR_6->ipv4_hnapt.new_dport, VAR_14,
       VAR_13, FUNC_4(VAR_6->ipv4_hnapt.etype),
       VAR_6->ipv4_hnapt.info_blk1,
       VAR_6->ipv4_hnapt.info_blk2,
       VAR_6->ipv4_hnapt.vlan1,
       VAR_6->ipv4_hnapt.vlan2);
  } else
   FUNC_6(VAR_3, "0x%05x state=%s\n",
       FUNC_1(VAR_6, VAR_7), FUNC_2(VAR_6));
  VAR_6++;
  VAR_8++;
 }

 return 0;
}
