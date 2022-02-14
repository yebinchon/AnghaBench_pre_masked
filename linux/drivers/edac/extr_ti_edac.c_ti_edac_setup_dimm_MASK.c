
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ti_edac {int dummy; } ;
struct mem_ctl_info {int n_layers; int dimms; int layers; struct ti_edac* pvt_info; } ;
struct dimm_info {int grain; int edac_mode; int mtype; scalar_t__ nr_pages; void* dtype; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 struct dimm_info* FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ FUNC_1 (struct ti_edac*,int ) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_29, u32 VAR_30)
{
 struct dimm_info *VAR_31;
 struct ti_edac *VAR_32 = VAR_29->pvt_info;
 int VAR_33;
 u32 VAR_34;
 u32 VAR_35;

 VAR_31 = FUNC_0(VAR_29->layers, VAR_29->dimms, VAR_29->n_layers, 0, 0, 0);

 VAR_34 = FUNC_1(VAR_32, VAR_7);

 if (VAR_30 == VAR_8) {
  VAR_33 = ((VAR_34 & VAR_23) >> VAR_24) + 8;
  VAR_33 += ((VAR_34 & VAR_25) >> VAR_26) + 9;
  VAR_33 += (VAR_34 & VAR_12) >> VAR_13;

  if (VAR_34 & VAR_22) {
   VAR_33++;
   VAR_31->dtype = VAR_0;
  } else {
   VAR_33 += 2;
   VAR_31->dtype = VAR_1;
  }
 } else {
  VAR_33 = 16;
  VAR_33 += ((VAR_34 & VAR_20) >>
   VAR_21) + 8;
  VAR_33 += (VAR_34 & VAR_16) >> VAR_17;
  VAR_33 += (VAR_34 & VAR_14) >> VAR_15;

  VAR_34 = (VAR_34 & VAR_18) >>
   VAR_19;
  switch (VAR_34) {
  case 0:
   VAR_33 += 3;
   VAR_31->dtype = VAR_2;
   break;
  case 1:
   VAR_33 += 2;
   VAR_31->dtype = VAR_1;
   break;
  case 2:
   VAR_33++;
   VAR_31->dtype = VAR_0;
   break;
  }
 }

 VAR_35 = 1 << VAR_33;

 VAR_31->nr_pages = VAR_35 >> VAR_11;
 VAR_31->grain = 4;
 if ((VAR_34 & VAR_28) == VAR_27)
  VAR_31->mtype = VAR_9;
 else
  VAR_31->mtype = VAR_10;

 VAR_34 = FUNC_1(VAR_32, VAR_6);
 if (VAR_34 & VAR_3)
  VAR_31->edac_mode = VAR_5;
 else
  VAR_31->edac_mode = VAR_4;
}
