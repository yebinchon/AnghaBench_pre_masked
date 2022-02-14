
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int n_layers; int dimms; int layers; struct i7300_pvt* pvt_info; } ;
struct i7300_pvt {struct i7300_dimm_info** dimm_info; int ** mtr; int * pci_dev_2x_0_fbd_branch; int * ambpresent; int mc_settings_a; } ;
struct i7300_dimm_info {int dummy; } ;
struct dimm_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dimm_info* FUNC_0 (int ,int ,int ,int,int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct i7300_pvt*,int,int,int,struct i7300_dimm_info*,struct dimm_info*) ;
 int FUNC_4 (int,char*,...) ;
 int* VAR_6 ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct mem_ctl_info *VAR_7)
{
 struct i7300_pvt *VAR_8;
 struct i7300_dimm_info *VAR_9;
 int VAR_10 = -VAR_2;
 int VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 struct dimm_info *VAR_18;

 VAR_8 = VAR_7->pvt_info;

 FUNC_4(2, "Memory Technology Registers:\n");

 if (FUNC_1(VAR_8->mc_settings_a)) {
  VAR_17 = 1;
  VAR_16 = 1;
 } else {
  VAR_17 = VAR_3;
  VAR_16 = VAR_4;
 }


 for (VAR_13 = 0; VAR_13 < VAR_17; VAR_13++) {

  VAR_15 = FUNC_6(0, VAR_13);
  FUNC_5(VAR_8->pci_dev_2x_0_fbd_branch[VAR_13],
         VAR_0,
    &VAR_8->ambpresent[VAR_15]);
  FUNC_4(2, "\t\tAMB-present CH%d = 0x%x:\n",
    VAR_15, VAR_8->ambpresent[VAR_15]);

  if (VAR_16 == 1)
   continue;

  VAR_15 = FUNC_6(1, VAR_13);
  FUNC_5(VAR_8->pci_dev_2x_0_fbd_branch[VAR_13],
         VAR_1,
    &VAR_8->ambpresent[VAR_15]);
  FUNC_4(2, "\t\tAMB-present CH%d = 0x%x:\n",
    VAR_15, VAR_8->ambpresent[VAR_15]);
 }


 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  int VAR_19 = VAR_6[VAR_14];
  for (VAR_13 = 0; VAR_13 < VAR_17; VAR_13++) {
   FUNC_5(VAR_8->pci_dev_2x_0_fbd_branch[VAR_13],
     VAR_19,
     &VAR_8->mtr[VAR_14][VAR_13]);
   for (VAR_12 = 0; VAR_12 < VAR_16; VAR_12++) {
    int VAR_20 = FUNC_6(VAR_12, VAR_13);

    VAR_18 = FUNC_0(VAR_7->layers, VAR_7->dimms,
            VAR_7->n_layers, VAR_13, VAR_12, VAR_14);

    VAR_9 = &VAR_8->dimm_info[VAR_14][VAR_20];

    VAR_11 = FUNC_3(VAR_8, VAR_14, VAR_12, VAR_13,
       VAR_9, VAR_18);


    if (!FUNC_2(VAR_11))
     continue;

    VAR_10 = 0;

   }
  }
 }

 return VAR_10;
}
