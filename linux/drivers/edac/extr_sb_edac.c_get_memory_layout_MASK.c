
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int (* get_tolm ) (struct sbridge_pvt*) ;int (* get_tohm ) (struct sbridge_pvt*) ;int max_sad; int (* sad_limit ) (int) ;scalar_t__ type; int (* rir_limit ) (int) ;int interleave_pkg; int * interleave_list; int (* dram_attr ) (int) ;int * dram_rule; } ;
struct sbridge_pvt {int tolm; int tohm; TYPE_2__ info; int * pci_tad; TYPE_1__* channel; int pci_ha; int pci_sad0; } ;
struct mem_ctl_info {struct sbridge_pvt* pvt_info; } ;
struct TYPE_3__ {int dimms; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int,int,int*) ;
 int FUNC_14 (int ,char*,int,int,int,...) ;
 int FUNC_15 (int,scalar_t__) ;
 int FUNC_16 (int ,int ,int*) ;
 int ** VAR_4 ;
 int * VAR_5 ;
 int FUNC_17 (int ,int,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct sbridge_pvt*) ;
 int FUNC_20 (struct sbridge_pvt*) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int) ;
 int * VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static void FUNC_24(const struct mem_ctl_info *VAR_8)
{
 struct sbridge_pvt *VAR_9 = VAR_8->pvt_info;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u32 VAR_16;
 u64 VAR_17, VAR_18 = 0;
 u64 VAR_19;
 u32 VAR_20, VAR_21;
 u32 VAR_22;





 VAR_9->tolm = VAR_9->info.get_tolm(VAR_9);
 VAR_19 = (1 + VAR_9->tolm) >> 20;

 VAR_20 = FUNC_13(VAR_19, 1024, &VAR_21);
 FUNC_14(0, "TOLM: %u.%03u GB (0x%016Lx)\n",
  VAR_20, (VAR_21*1000)/1024, (u64)VAR_9->tolm);


 VAR_9->tohm = VAR_9->info.get_tohm(VAR_9);
 VAR_19 = (1 + VAR_9->tohm) >> 20;

 VAR_20 = FUNC_13(VAR_19, 1024, &VAR_21);
 FUNC_14(0, "TOHM: %u.%03u GB (0x%016Lx)\n",
  VAR_20, (VAR_21*1000)/1024, (u64)VAR_9->tohm);







 VAR_18 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_9->info.max_sad; VAR_13++) {

  FUNC_16(VAR_9->pci_sad0, VAR_9->info.dram_rule[VAR_13],
          &VAR_16);
  VAR_17 = VAR_9->info.sad_limit(VAR_16);

  if (!FUNC_0(VAR_16))
   continue;

  if (VAR_17 <= VAR_18)
   break;

  VAR_19 = (VAR_17 + 1) >> 20;
  VAR_20 = FUNC_13(VAR_19, 1024, &VAR_21);
  FUNC_14(0, "SAD#%d %s up to %u.%03u GB (0x%016Lx) Interleave: %s reg=0x%08x\n",
    VAR_13,
    FUNC_18(VAR_9->info.dram_attr(VAR_16)),
    VAR_20, (VAR_21*1000)/1024,
    ((u64)VAR_19) << 20L,
    FUNC_15(VAR_16, VAR_9->info.type),
    VAR_16);
  VAR_18 = VAR_17;

  FUNC_16(VAR_9->pci_sad0, VAR_9->info.interleave_list[VAR_13],
          &VAR_16);
  VAR_15 = FUNC_17(VAR_9->info.interleave_pkg, VAR_16, 0);
  for (VAR_11 = 0; VAR_11 < 8; VAR_11++) {
   u32 VAR_23 = FUNC_17(VAR_9->info.interleave_pkg, VAR_16, VAR_11);
   if (VAR_11 > 0 && VAR_15 == VAR_23)
    break;

   FUNC_14(0, "SAD#%d, interleave #%d: %d\n",
     VAR_13, VAR_11, VAR_23);
  }
 }

 if (VAR_9->info.type == VAR_0)
  return;




 VAR_18 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
  FUNC_16(VAR_9->pci_ha, VAR_7[VAR_14], &VAR_16);
  VAR_17 = FUNC_6(VAR_16);
  if (VAR_17 <= VAR_18)
   break;
  VAR_19 = (VAR_17 + 1) >> 20;

  VAR_20 = FUNC_13(VAR_19, 1024, &VAR_21);
  FUNC_14(0, "TAD#%d: up to %u.%03u GB (0x%016Lx), socket interleave %d, memory interleave %d, TGT: %d, %d, %d, %d, reg=0x%08x\n",
    VAR_14, VAR_20, (VAR_21*1000)/1024,
    ((u64)VAR_19) << 20L,
    (u32)(1 << FUNC_8(VAR_16)),
    (u32)FUNC_5(VAR_16) + 1,
    (u32)FUNC_9(VAR_16),
    (u32)FUNC_10(VAR_16),
    (u32)FUNC_11(VAR_16),
    (u32)FUNC_12(VAR_16),
    VAR_16);
  VAR_18 = VAR_17;
 }




 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (!VAR_9->channel[VAR_10].dimms)
   continue;
  for (VAR_11 = 0; VAR_11 < VAR_14; VAR_11++) {
   FUNC_16(VAR_9->pci_tad[VAR_10],
           VAR_6[VAR_11],
           &VAR_16);
   VAR_19 = FUNC_7(VAR_16) >> 20;
   VAR_20 = FUNC_13(VAR_19, 1024, &VAR_21);
   FUNC_14(0, "TAD CH#%d, offset #%d: %u.%03u GB (0x%016Lx), reg=0x%08x\n",
     VAR_10, VAR_11,
     VAR_20, (VAR_21*1000)/1024,
     ((u64)VAR_19) << 20L,
     VAR_16);
  }
 }




 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (!VAR_9->channel[VAR_10].dimms)
   continue;
  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
   FUNC_16(VAR_9->pci_tad[VAR_10],
           VAR_5[VAR_11],
           &VAR_16);

   if (!FUNC_1(VAR_16))
    continue;

   VAR_19 = VAR_9->info.rir_limit(VAR_16) >> 20;
   VAR_22 = 1 << FUNC_4(VAR_16);
   VAR_20 = FUNC_13(VAR_19, 1024, &VAR_21);
   FUNC_14(0, "CH#%d RIR#%d, limit: %u.%03u GB (0x%016Lx), way: %d, reg=0x%08x\n",
     VAR_10, VAR_11,
     VAR_20, (VAR_21*1000)/1024,
     ((u64)VAR_19) << 20L,
     VAR_22,
     VAR_16);

   for (VAR_12 = 0; VAR_12 < VAR_22; VAR_12++) {
    FUNC_16(VAR_9->pci_tad[VAR_10],
            VAR_4[VAR_11][VAR_12],
            &VAR_16);
    VAR_19 = FUNC_2(VAR_9->info.type, VAR_16) << 6;

    VAR_20 = FUNC_13(VAR_19, 1024, &VAR_21);
    FUNC_14(0, "CH#%d RIR#%d INTL#%d, offset %u.%03u GB (0x%016Lx), tgt: %d, reg=0x%08x\n",
      VAR_10, VAR_11, VAR_12,
      VAR_20, (VAR_21*1000)/1024,
      ((u64)VAR_19) << 20L,
      (u32)FUNC_3(VAR_9->info.type, VAR_16),
      VAR_16);
   }
  }
 }
}
