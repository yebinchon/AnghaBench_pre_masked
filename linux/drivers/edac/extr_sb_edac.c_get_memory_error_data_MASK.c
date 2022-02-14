
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef long long u64 ;
typedef int u32 ;
struct TYPE_4__ {int max_sad; long long (* sad_limit ) (int) ;int (* interleave_mode ) (int) ;scalar_t__ type; long long (* rir_limit ) (int) ;int interleave_pkg; int * interleave_list; int (* dram_attr ) (int) ;int * dram_rule; } ;
struct sbridge_pvt {scalar_t__ mirror_mode; int is_cur_addr_mirrored; TYPE_2__ info; struct pci_dev** pci_tad; scalar_t__ is_close_pg; scalar_t__ is_lockstep; scalar_t__ is_chan_hash; struct pci_dev* pci_ha; TYPE_1__* sbridge_dev; struct pci_dev* pci_sad0; scalar_t__ tohm; scalar_t__ tolm; } ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {struct sbridge_pvt* pvt_info; } ;
struct TYPE_3__ {int mc; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,int,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int) ;
 long long FUNC_7 (int) ;
 long long FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (long long,int,int*) ;
 int FUNC_15 (int ,char*,int,long long,...) ;
 struct mem_ctl_info* FUNC_16 (int,int) ;
 int FUNC_17 (int,long long) ;
 int FUNC_18 (struct pci_dev*,int ,int*) ;
 int ** VAR_10 ;
 int * VAR_11 ;
 int FUNC_19 (int ,int,int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 char* FUNC_22 (int ) ;
 int FUNC_23 (char*,char*,...) ;
 long long FUNC_24 (int) ;
 int FUNC_25 (int) ;
 int FUNC_26 (int) ;
 long long FUNC_27 (int) ;
 int * VAR_12 ;
 int * VAR_13 ;

__attribute__((used)) static int FUNC_28(struct mem_ctl_info *VAR_14,
     u64 VAR_15,
     u8 *VAR_16, u8 *VAR_17,
     long *VAR_18,
     u8 *VAR_19,
     char **VAR_20, char *VAR_21)
{
 struct mem_ctl_info *VAR_22;
 struct sbridge_pvt *VAR_23 = VAR_14->pvt_info;
 struct pci_dev *VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 int VAR_30, VAR_31, VAR_32;
 int VAR_33, VAR_34 = 0;
 unsigned int VAR_35[VAR_6];
 u32 VAR_36, VAR_37;
 u8 VAR_38, VAR_39, VAR_40, VAR_41 = 0;
 u32 VAR_42;
 u32 VAR_43;
 u32 VAR_44, VAR_45;
 u64 VAR_46, VAR_47, VAR_48 = 0, VAR_49 = 0;
 if ((VAR_15 > (u64) VAR_23->tolm) && (VAR_15 < (1LL << 32))) {
  FUNC_23(VAR_21, "Error at TOLM area, on addr 0x%08Lx", VAR_15);
  return -VAR_2;
 }
 if (VAR_15 >= (u64)VAR_23->tohm) {
  FUNC_23(VAR_21, "Error at MMIOH area, on addr 0x%016Lx", VAR_15);
  return -VAR_2;
 }




 for (VAR_26 = 0; VAR_26 < VAR_23->info.max_sad; VAR_26++) {
  FUNC_18(VAR_23->pci_sad0, VAR_23->info.dram_rule[VAR_26],
          &VAR_36);

  if (!FUNC_1(VAR_36))
   continue;

  VAR_48 = VAR_23->info.sad_limit(VAR_36);
  if (VAR_48 <= VAR_49) {
   FUNC_23(VAR_21, "Can't discover the memory socket");
   return -VAR_2;
  }
  if (VAR_15 <= VAR_48)
   break;
  VAR_49 = VAR_48;
 }
 if (VAR_26 == VAR_23->info.max_sad) {
  FUNC_23(VAR_21, "Can't discover the memory socket");
  return -VAR_2;
 }
 VAR_37 = VAR_36;
 *VAR_20 = FUNC_22(VAR_23->info.dram_attr(VAR_37));
 VAR_33 = VAR_23->info.interleave_mode(VAR_37);

 FUNC_18(VAR_23->pci_sad0, VAR_23->info.interleave_list[VAR_26],
         &VAR_36);

 if (VAR_23->info.type == VAR_9) {
  VAR_30 = FUNC_19(VAR_23->info.interleave_pkg, VAR_36, 0);
  for (VAR_28 = 0; VAR_28 < 8; VAR_28++) {
   u32 VAR_50 = FUNC_19(VAR_23->info.interleave_pkg, VAR_36, VAR_28);
   if (VAR_28 > 0 && VAR_30 == VAR_50)
    break;
   VAR_35[VAR_28] = VAR_50;
   FUNC_15(0, "SAD interleave #%d: %d\n",
     VAR_28, VAR_35[VAR_28]);
  }
  FUNC_15(0, "mc#%d: Error detected on SAD#%d: address 0x%016Lx < 0x%016Lx, Interleave [%d:6]%s\n",
    VAR_23->sbridge_dev->mc,
    VAR_26,
    VAR_15,
    VAR_48,
    VAR_28 + 7,
    !VAR_33 ? "" : "XOR[18:16]");
  if (VAR_33)
   VAR_31 = ((VAR_15 >> 6) ^ (VAR_15 >> 16)) & 7;
  else
   VAR_31 = (VAR_15 >> 6) & 7;
  switch (VAR_28) {
  case 1:
   VAR_31 = 0;
   break;
  case 2:
   VAR_31 = VAR_31 & 1;
   break;
  case 4:
   VAR_31 = VAR_31 & 3;
   break;
  case 8:
   break;
  default:
   FUNC_23(VAR_21, "Can't discover socket interleave");
   return -VAR_2;
  }
  *VAR_16 = VAR_35[VAR_31];
  FUNC_15(0, "SAD interleave index: %d (wayness %d) = CPU socket %d\n",
    VAR_31, VAR_28, *VAR_16);
 } else if (VAR_23->info.type == VAR_4 || VAR_23->info.type == VAR_1) {
  int VAR_51, VAR_52 = FUNC_0(VAR_37);

  if (VAR_52) {

   VAR_51 = FUNC_2(VAR_15, 7, 8) << 1;
   VAR_51 |= FUNC_2(VAR_15, 9, 9);
  } else
   VAR_51 = FUNC_2(VAR_15, 6, 8);

  if (VAR_33 == 0) {

   VAR_31 = FUNC_2(VAR_15, 16, 18);
   VAR_31 ^= VAR_51;
  } else
   VAR_31 = VAR_51;

  VAR_40 = FUNC_19(VAR_23->info.interleave_pkg, VAR_36, VAR_31);
  *VAR_16 = FUNC_21(VAR_40);
  VAR_41 = FUNC_20(VAR_40);

  if (VAR_52) {

   FUNC_18(VAR_23->pci_ha, VAR_5, &VAR_36);
   VAR_34 = FUNC_2(VAR_36, 22, 22);
  }

  FUNC_15(0, "SAD interleave package: %d = CPU socket %d, HA %i, shiftup: %i\n",
    VAR_31, *VAR_16, VAR_41, VAR_34);
 } else {

  VAR_31 = (VAR_15 >> 6) & 7;
  VAR_40 = FUNC_19(VAR_23->info.interleave_pkg, VAR_36, VAR_31);
  *VAR_16 = FUNC_21(VAR_40);
  VAR_41 = FUNC_20(VAR_40);
  FUNC_15(0, "SAD interleave package: %d = CPU socket %d, HA %d\n",
    VAR_31, *VAR_16, VAR_41);
 }

 *VAR_17 = VAR_41;





 VAR_22 = FUNC_16(*VAR_16, VAR_41);
 if (!VAR_22) {
  FUNC_23(VAR_21, "Struct for socket #%u wasn't initialized",
   *VAR_16);
  return -VAR_2;
 }
 VAR_14 = VAR_22;
 VAR_23 = VAR_14->pvt_info;




 VAR_49 = 0;
 VAR_24 = VAR_23->pci_ha;
 for (VAR_27 = 0; VAR_27 < VAR_8; VAR_27++) {
  FUNC_18(VAR_24, VAR_13[VAR_27], &VAR_36);
  VAR_48 = FUNC_7(VAR_36);
  if (VAR_48 <= VAR_49) {
   FUNC_23(VAR_21, "Can't discover the memory channel");
   return -VAR_2;
  }
  if (VAR_15 <= VAR_48)
   break;
  VAR_49 = VAR_48;
 }
 if (VAR_27 == VAR_8) {
  FUNC_23(VAR_21, "Can't discover the memory channel");
  return -VAR_2;
 }

 VAR_38 = FUNC_6(VAR_36) + 1;
 VAR_39 = FUNC_9(VAR_36);

 if (VAR_38 == 3)
  VAR_31 = VAR_15 >> 6;
 else {
  VAR_31 = (VAR_15 >> (6 + VAR_39 + VAR_34)) & 0x3;
  if (VAR_23->is_chan_hash)
   VAR_31 = FUNC_17(VAR_31, VAR_15);
 }
 VAR_31 = VAR_31 % VAR_38;




 switch (VAR_31) {
 case 0:
  VAR_32 = FUNC_10(VAR_36);
  break;
 case 1:
  VAR_32 = FUNC_11(VAR_36);
  break;
 case 2:
  VAR_32 = FUNC_12(VAR_36);
  break;
 case 3:
  VAR_32 = FUNC_13(VAR_36);
  break;
 default:
  FUNC_23(VAR_21, "Can't discover the TAD target");
  return -VAR_2;
 }
 *VAR_18 = 1 << VAR_32;

 FUNC_18(VAR_23->pci_tad[VAR_32], VAR_12[VAR_27], &VAR_42);

 if (VAR_23->mirror_mode == VAR_3 ||
     (VAR_23->mirror_mode == VAR_0 && VAR_27 == 0)) {
  *VAR_18 |= 1 << ((VAR_32 + 2) % 4);
  switch(VAR_38) {
  case 2:
  case 4:
   VAR_29 = (1 << VAR_39) * (VAR_38 >> 1);
   break;
  default:
   FUNC_23(VAR_21, "Invalid mirror set. Can't decode addr");
   return -VAR_2;
  }

  VAR_23->is_cur_addr_mirrored = 1;
 } else {
  VAR_29 = (1 << VAR_39) * VAR_38;
  VAR_23->is_cur_addr_mirrored = 0;
 }

 if (VAR_23->is_lockstep)
  *VAR_18 |= 1 << ((VAR_32 + 1) % 4);

 VAR_47 = FUNC_8(VAR_42);

 FUNC_15(0, "TAD#%d: address 0x%016Lx < 0x%016Lx, socket interleave %d, channel interleave %d (offset 0x%08Lx), index %d, base ch: %d, ch mask: 0x%02lx\n",
   VAR_27,
   VAR_15,
   VAR_48,
   VAR_39,
   VAR_38,
   VAR_47,
   VAR_31,
   VAR_32,
   *VAR_18);




 if (VAR_47 > VAR_15) {
  FUNC_23(VAR_21, "Can't calculate ch addr: TAD offset 0x%08Lx is too high for addr 0x%08Lx!",
   VAR_47, VAR_15);
  return -VAR_2;
 }

 VAR_46 = VAR_15 - VAR_47;
 VAR_46 >>= (6 + VAR_34);
 VAR_46 /= VAR_29;
 VAR_46 <<= (6 + VAR_34);
 VAR_46 |= VAR_15 & ((1 << (6 + VAR_34)) - 1);




 for (VAR_25 = 0; VAR_25 < VAR_7; VAR_25++) {
  FUNC_18(VAR_23->pci_tad[VAR_32], VAR_11[VAR_25], &VAR_36);

  if (!FUNC_3(VAR_36))
   continue;

  VAR_48 = VAR_23->info.rir_limit(VAR_36);
  VAR_45 = FUNC_14(VAR_48 >> 20, 1024, &VAR_44);
  FUNC_15(0, "RIR#%d, limit: %u.%03u GB (0x%016Lx), way: %d\n",
    VAR_25,
    VAR_45, (VAR_44*1000)/1024,
    VAR_48,
    1 << FUNC_5(VAR_36));
  if (VAR_46 <= VAR_48)
   break;
 }
 if (VAR_25 == VAR_7) {
  FUNC_23(VAR_21, "Can't discover the memory rank for ch addr 0x%08Lx",
   VAR_46);
  return -VAR_2;
 }
 VAR_43 = FUNC_5(VAR_36);

 if (VAR_23->is_close_pg)
  VAR_31 = (VAR_46 >> 6);
 else
  VAR_31 = (VAR_46 >> 13);
 VAR_31 %= 1 << VAR_43;

 FUNC_18(VAR_23->pci_tad[VAR_32], VAR_10[VAR_25][VAR_31], &VAR_36);
 *VAR_19 = FUNC_4(VAR_23->info.type, VAR_36);

 FUNC_15(0, "RIR#%d: channel address 0x%08Lx < 0x%08Lx, RIR interleave %d, index %d\n",
   VAR_25,
   VAR_46,
   VAR_48,
   VAR_43,
   VAR_31);

 return 0;
}
