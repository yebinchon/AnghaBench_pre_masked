
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {int n_layers; int dimms; int layers; struct i7core_pvt* pvt_info; } ;
struct TYPE_5__ {int mc_control; int mc_status; int max_dod; int ch_map; } ;
struct i7core_pvt {TYPE_1__* i7core_dev; TYPE_3__* channel; TYPE_2__ info; struct pci_dev*** pci_ch; struct pci_dev** pci_mcr; } ;
struct dimm_info {int nr_pages; int grain; int edac_mode; int mtype; int label; int dtype; } ;
typedef enum mem_type { ____Placeholder_mem_type } mem_type ;
typedef enum edac_type { ____Placeholder_edac_type } edac_type ;
struct TYPE_6__ {int is_3dimms_present; int is_single_4rank; int has_4rank; } ;
struct TYPE_4__ {int socket; } ;


 int FUNC_0 (struct i7core_pvt*,int) ;
 scalar_t__ FUNC_1 (struct i7core_pvt*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct i7core_pvt*) ;
 scalar_t__ FUNC_4 (struct i7core_pvt*) ;
 struct dimm_info* FUNC_5 (int ,int ,int ,int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_10 (int) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int,char*,...) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (struct pci_dev*,int ,int*) ;
 int FUNC_21 (int ,int,char*,int,int,int) ;

__attribute__((used)) static int FUNC_22(struct mem_ctl_info *VAR_31)
{
 struct i7core_pvt *VAR_32 = VAR_31->pvt_info;
 struct pci_dev *VAR_33;
 int VAR_34, VAR_35;
 enum edac_type VAR_36;
 enum mem_type VAR_37;
 struct dimm_info *VAR_38;


 VAR_33 = VAR_32->pci_mcr[0];
 if (!VAR_33)
  return -VAR_7;


 FUNC_20(VAR_33, VAR_10, &VAR_32->info.mc_control);
 FUNC_20(VAR_33, VAR_23, &VAR_32->info.mc_status);
 FUNC_20(VAR_33, VAR_14, &VAR_32->info.max_dod);
 FUNC_20(VAR_33, VAR_9, &VAR_32->info.ch_map);

 FUNC_14(0, "QPI %d control=0x%08x status=0x%08x dod=0x%08x map=0x%08x\n",
   VAR_32->i7core_dev->socket, VAR_32->info.mc_control,
   VAR_32->info.mc_status, VAR_32->info.max_dod, VAR_32->info.ch_map);

 if (FUNC_3(VAR_32)) {
  FUNC_14(0, "ECC enabled with x%d SDCC\n", FUNC_4(VAR_32) ? 8 : 4);
  if (FUNC_4(VAR_32))
   VAR_36 = VAR_6;
  else
   VAR_36 = VAR_5;
 } else {
  FUNC_14(0, "ECC disabled\n");
  VAR_36 = VAR_4;
 }


 FUNC_14(0, "DOD Max limits: DIMMS: %d, %d-ranked, %d-banked x%x x 0x%x\n",
   FUNC_17(VAR_32->info.max_dod),
   FUNC_18(VAR_32->info.max_dod >> 2),
   FUNC_15(VAR_32->info.max_dod >> 4),
   FUNC_19(VAR_32->info.max_dod >> 6),
   FUNC_16(VAR_32->info.max_dod >> 9));

 for (VAR_34 = 0; VAR_34 < VAR_26; VAR_34++) {
  u32 VAR_39, VAR_40[3], VAR_41[8];

  if (!VAR_32->pci_ch[VAR_34][0])
   continue;

  if (!FUNC_0(VAR_32, VAR_34)) {
   FUNC_14(0, "Channel %i is not active\n", VAR_34);
   continue;
  }
  if (FUNC_1(VAR_32, VAR_34)) {
   FUNC_14(0, "Channel %i is disabled\n", VAR_34);
   continue;
  }


  FUNC_20(VAR_32->pci_ch[VAR_34][0],
    VAR_8, &VAR_39);


  if (VAR_39 & VAR_30)
   VAR_32->channel[VAR_34].is_3dimms_present = 1;

  if (VAR_39 & VAR_29)
   VAR_32->channel[VAR_34].is_single_4rank = 1;

  if (VAR_39 & VAR_27)
   VAR_32->channel[VAR_34].has_4rank = 1;

  if (VAR_39 & VAR_28)
   VAR_37 = VAR_25;
  else
   VAR_37 = VAR_24;


  FUNC_20(VAR_32->pci_ch[VAR_34][1],
    VAR_11, &VAR_40[0]);
  FUNC_20(VAR_32->pci_ch[VAR_34][1],
    VAR_12, &VAR_40[1]);
  FUNC_20(VAR_32->pci_ch[VAR_34][1],
    VAR_13, &VAR_40[2]);

  FUNC_14(0, "Ch%d phy rd%d, wr%d (0x%08x): %s%s%s%cDIMMs\n",
    VAR_34,
    FUNC_12(VAR_32->info.ch_map, VAR_34), FUNC_13(VAR_32->info.ch_map, VAR_34),
    VAR_39,
    VAR_32->channel[VAR_34].is_3dimms_present ? "3DIMMS " : "",
    VAR_32->channel[VAR_34].is_3dimms_present ? "SINGLE_4R " : "",
    VAR_32->channel[VAR_34].has_4rank ? "HAS_4R " : "",
    (VAR_39 & VAR_28) ? 'R' : 'U');

  for (VAR_35 = 0; VAR_35 < 3; VAR_35++) {
   u32 VAR_42, VAR_43, VAR_44, VAR_45;
   u32 VAR_46, VAR_47;

   if (!FUNC_2(VAR_40[VAR_35]))
    continue;

   VAR_38 = FUNC_5(VAR_31->layers, VAR_31->dimms, VAR_31->n_layers,
           VAR_34, VAR_35, 0);
   VAR_42 = FUNC_15(FUNC_6(VAR_40[VAR_35]));
   VAR_43 = FUNC_18(FUNC_8(VAR_40[VAR_35]));
   VAR_44 = FUNC_19(FUNC_9(VAR_40[VAR_35]));
   VAR_45 = FUNC_16(FUNC_7(VAR_40[VAR_35]));


   VAR_46 = (VAR_44 * VAR_45 * VAR_42 * VAR_43) >> (20 - 3);

   FUNC_14(0, "\tdimm %d %d MiB offset: %x, bank: %d, rank: %d, row: %#x, col: %#x\n",
     VAR_35, VAR_46,
     FUNC_11(VAR_40[VAR_35]),
     VAR_42, VAR_43, VAR_44, VAR_45);

   VAR_47 = FUNC_10(VAR_46);

   VAR_38->nr_pages = VAR_47;

   switch (VAR_42) {
   case 4:
    VAR_38->dtype = VAR_2;
    break;
   case 8:
    VAR_38->dtype = VAR_3;
    break;
   case 16:
    VAR_38->dtype = VAR_1;
    break;
   default:
    VAR_38->dtype = VAR_0;
   }

   FUNC_21(VAR_38->label, sizeof(VAR_38->label),
     "CPU#%uChannel#%u_DIMM#%u",
     VAR_32->i7core_dev->socket, VAR_34, VAR_35);
   VAR_38->grain = 8;
   VAR_38->edac_mode = VAR_36;
   VAR_38->mtype = VAR_37;
  }

  FUNC_20(VAR_33, VAR_15, &VAR_41[0]);
  FUNC_20(VAR_33, VAR_16, &VAR_41[1]);
  FUNC_20(VAR_33, VAR_17, &VAR_41[2]);
  FUNC_20(VAR_33, VAR_18, &VAR_41[3]);
  FUNC_20(VAR_33, VAR_19, &VAR_41[4]);
  FUNC_20(VAR_33, VAR_20, &VAR_41[5]);
  FUNC_20(VAR_33, VAR_21, &VAR_41[6]);
  FUNC_20(VAR_33, VAR_22, &VAR_41[7]);
  FUNC_14(1, "\t[%i] DIVBY3\tREMOVED\tOFFSET\n", VAR_34);
  for (VAR_35 = 0; VAR_35 < 8; VAR_35++)
   FUNC_14(1, "\t\t%#x\t%#x\t%#x\n",
     (VAR_41[VAR_35] >> 27) & 0x1,
     (VAR_41[VAR_35] >> 24) & 0x7,
     (VAR_41[VAR_35] & ((1 << 24) - 1)));
 }

 return 0;
}
