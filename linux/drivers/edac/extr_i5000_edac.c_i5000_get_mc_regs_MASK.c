
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mem_ctl_info {struct i5000_pvt* pvt_info; } ;
struct TYPE_2__ {int ambase_top; int ambase_bottom; } ;
struct i5000_pvt {scalar_t__ maxch; int tolm; int mir0; int mir1; int mir2; int* b0_mtr; int* b1_mtr; int b0_ambpresent0; int b0_ambpresent1; int b1_ambpresent0; int b1_ambpresent1; int branch_1; int branch_0; int branchmap_werrors; int maxdimmperch; scalar_t__ ambase; TYPE_1__ u; int system_address; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct i5000_pvt*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ,scalar_t__,int *) ;
 int FUNC_4 (int ,int,int*) ;

__attribute__((used)) static void FUNC_5(struct mem_ctl_info *VAR_10)
{
 struct i5000_pvt *VAR_11;
 u32 VAR_12;
 u16 VAR_13;
 int VAR_14;
 int VAR_15, VAR_16;

 VAR_11 = VAR_10->pvt_info;

 FUNC_3(VAR_11->system_address, VAR_0,
   &VAR_11->u.ambase_bottom);
 FUNC_3(VAR_11->system_address, VAR_0 + sizeof(u32),
   &VAR_11->u.ambase_top);

 FUNC_2(2, "AMBASE= 0x%lx  MAXCH= %d  MAX-DIMM-Per-CH= %d\n",
   (long unsigned int)VAR_11->ambase, VAR_11->maxch, VAR_11->maxdimmperch);


 FUNC_4(VAR_11->branchmap_werrors, VAR_9, &VAR_11->tolm);
 VAR_11->tolm >>= 12;
 FUNC_2(2, "TOLM (number of 256M regions) =%u (0x%x)\n",
   VAR_11->tolm, VAR_11->tolm);

 VAR_12 = VAR_11->tolm << 28;
 FUNC_2(2, "Actual TOLM byte addr=%u (0x%x)\n",
   VAR_12, VAR_12);

 FUNC_4(VAR_11->branchmap_werrors, VAR_4, &VAR_11->mir0);
 FUNC_4(VAR_11->branchmap_werrors, VAR_5, &VAR_11->mir1);
 FUNC_4(VAR_11->branchmap_werrors, VAR_6, &VAR_11->mir2);


 VAR_13 = (VAR_11->mir0 >> 4) & 0x0FFF;
 VAR_15 = VAR_11->mir0 & 0x1;
 VAR_16 = VAR_11->mir0 & 0x2;
 FUNC_2(2, "MIR0: limit= 0x%x  WAY1= %u  WAY0= %x\n",
   VAR_13, VAR_16, VAR_15);
 VAR_13 = (VAR_11->mir1 >> 4) & 0x0FFF;
 VAR_15 = VAR_11->mir1 & 0x1;
 VAR_16 = VAR_11->mir1 & 0x2;
 FUNC_2(2, "MIR1: limit= 0x%x  WAY1= %u  WAY0= %x\n",
   VAR_13, VAR_16, VAR_15);
 VAR_13 = (VAR_11->mir2 >> 4) & 0x0FFF;
 VAR_15 = VAR_11->mir2 & 0x1;
 VAR_16 = VAR_11->mir2 & 0x2;
 FUNC_2(2, "MIR2: limit= 0x%x  WAY1= %u  WAY0= %x\n",
   VAR_13, VAR_16, VAR_15);


 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  int VAR_17 = VAR_7 + (VAR_14 * sizeof(u32));

  FUNC_4(VAR_11->branch_0, VAR_17,
    &VAR_11->b0_mtr[VAR_14]);

  FUNC_2(2, "MTR%d where=0x%x B0 value=0x%x\n",
    VAR_14, VAR_17, VAR_11->b0_mtr[VAR_14]);

  if (VAR_11->maxch >= VAR_3) {
   FUNC_4(VAR_11->branch_1, VAR_17,
     &VAR_11->b1_mtr[VAR_14]);
   FUNC_2(2, "MTR%d where=0x%x B1 value=0x%x\n",
     VAR_14, VAR_17, VAR_11->b1_mtr[VAR_14]);
  } else {
   VAR_11->b1_mtr[VAR_14] = 0;
  }
 }


 FUNC_2(2, "Memory Technology Registers:\n");
 FUNC_2(2, "   Branch 0:\n");
 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  FUNC_1(VAR_14, VAR_11->b0_mtr[VAR_14]);
 }
 FUNC_4(VAR_11->branch_0, VAR_1,
   &VAR_11->b0_ambpresent0);
 FUNC_2(2, "\t\tAMB-Branch 0-present0 0x%x:\n", VAR_11->b0_ambpresent0);
 FUNC_4(VAR_11->branch_0, VAR_2,
   &VAR_11->b0_ambpresent1);
 FUNC_2(2, "\t\tAMB-Branch 0-present1 0x%x:\n", VAR_11->b0_ambpresent1);


 if (VAR_11->maxch < VAR_3) {
  VAR_11->b1_ambpresent0 = 0;
  VAR_11->b1_ambpresent1 = 0;
 } else {

  FUNC_2(2, "   Branch 1:\n");
  for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
   FUNC_1(VAR_14, VAR_11->b1_mtr[VAR_14]);
  }
  FUNC_4(VAR_11->branch_1, VAR_1,
    &VAR_11->b1_ambpresent0);
  FUNC_2(2, "\t\tAMB-Branch 1-present0 0x%x:\n",
    VAR_11->b1_ambpresent0);
  FUNC_4(VAR_11->branch_1, VAR_2,
    &VAR_11->b1_ambpresent1);
  FUNC_2(2, "\t\tAMB-Branch 1-present1 0x%x:\n",
    VAR_11->b1_ambpresent1);
 }



 FUNC_0(VAR_11);
}
