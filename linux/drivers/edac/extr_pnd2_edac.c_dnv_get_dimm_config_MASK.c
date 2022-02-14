
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct mem_ctl_info {int n_layers; int dimms; int layers; } ;
struct dimm_info {int grain; int mtype; int label; int edac_mode; int dtype; int nr_pages; } ;
struct d_cr_drp {int rken0; int rken1; int rken2; int rken3; size_t dimmdwid0; size_t dimmdwid1; } ;
struct TYPE_6__ {int ca11; } ;
struct TYPE_5__ {int row14; int row15; int row16; int row17; } ;
struct TYPE_4__ {scalar_t__ ddr4en; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dimm_info* FUNC_0 (int ,int ,int ,int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 TYPE_3__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 int * VAR_7 ;
 struct d_cr_drp* VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_2 (int ,char*,int,int,...) ;
 int FUNC_3 (int ,int,char*,int,int) ;

__attribute__((used)) static void FUNC_4(struct mem_ctl_info *VAR_10)
{
 int VAR_11, VAR_12, VAR_13[VAR_0], VAR_14, VAR_15, VAR_16, VAR_17;
 struct dimm_info *VAR_18;
 struct d_cr_drp *VAR_19;
 u64 VAR_20;

 if (VAR_9.ddr4en) {
  VAR_17 = VAR_4;
  VAR_14 = 16;
  VAR_16 = 10;
 } else {
  VAR_17 = VAR_3;
  VAR_14 = 8;
 }

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  if (VAR_6[VAR_11].row14 == 31)
   VAR_15 = 14;
  else if (VAR_6[VAR_11].row15 == 31)
   VAR_15 = 15;
  else if (VAR_6[VAR_11].row16 == 31)
   VAR_15 = 16;
  else if (VAR_6[VAR_11].row17 == 31)
   VAR_15 = 17;
  else
   VAR_15 = 18;

  if (VAR_17 == VAR_3) {
   if (VAR_5[VAR_11].ca11 != 0x3f)
    VAR_16 = 12;
   else
    VAR_16 = 10;
  }

  VAR_19 = &VAR_8[VAR_11];

  VAR_13[0] = VAR_19->rken0 + VAR_19->rken1;

  VAR_13[1] = VAR_19->rken2 + VAR_19->rken3;

  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
   if (!VAR_13[VAR_12])
    continue;

   VAR_18 = FUNC_0(VAR_10->layers, VAR_10->dimms, VAR_10->n_layers, VAR_11, VAR_12, 0);
   if (!VAR_18) {
    FUNC_2(0, "No allocated DIMM for channel %d DIMM %d\n", VAR_11, VAR_12);
    continue;
   }

   VAR_20 = VAR_13[VAR_12] * VAR_14 * (1ul << VAR_15) * (1ul << VAR_16);
   FUNC_2(0, "Channel %d DIMM %d: %lld MByte DIMM\n", VAR_11, VAR_12, VAR_20 >> (20 - 3));
   VAR_18->nr_pages = FUNC_1(VAR_20 >> (20 - 3));
   VAR_18->grain = 32;
   VAR_18->dtype = VAR_7[VAR_12 ? VAR_19->dimmdwid0 : VAR_19->dimmdwid1];
   VAR_18->mtype = VAR_17;
   VAR_18->edac_mode = VAR_2;
   FUNC_3(VAR_18->label, sizeof(VAR_18->label), "Chan#%d_DIMM#%d", VAR_11, VAR_12);
  }
 }
}
