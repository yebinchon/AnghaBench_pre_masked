
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mem_ctl_info {int nr_csrows; struct csrow_info** csrows; struct fsl_mc_pdata* pvt_info; } ;
struct fsl_mc_pdata {scalar_t__ mc_vbase; } ;
struct dimm_info {int nr_pages; int grain; int mtype; int edac_mode; int dtype; } ;
struct csrow_info {int first_page; int last_page; TYPE_1__** channels; } ;
typedef enum mem_type { ____Placeholder_mem_type } mem_type ;
struct TYPE_2__ {struct dimm_info* dimm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mem_ctl_info *VAR_19)
{
 struct fsl_mc_pdata *VAR_20 = VAR_19->pvt_info;
 struct csrow_info *VAR_21;
 struct dimm_info *VAR_22;
 u32 VAR_23;
 u32 VAR_24;
 enum mem_type VAR_25;
 u32 VAR_26;
 int VAR_27;

 VAR_23 = FUNC_0(VAR_20->mc_vbase + VAR_8);

 VAR_24 = VAR_23 & VAR_3;
 if (VAR_23 & VAR_2) {
  switch (VAR_24) {
  case 0x02000000:
   VAR_25 = VAR_13;
   break;
  case 0x03000000:
   VAR_25 = VAR_14;
   break;
  case 0x07000000:
   VAR_25 = VAR_15;
   break;
  case 0x05000000:
   VAR_25 = VAR_16;
   break;
  default:
   VAR_25 = VAR_17;
   break;
  }
 } else {
  switch (VAR_24) {
  case 0x02000000:
   VAR_25 = VAR_9;
   break;
  case 0x03000000:
   VAR_25 = VAR_10;
   break;
  case 0x07000000:
   VAR_25 = VAR_11;
   break;
  case 0x05000000:
   VAR_25 = VAR_12;
   break;
  default:
   VAR_25 = VAR_17;
   break;
  }
 }

 for (VAR_27 = 0; VAR_27 < VAR_19->nr_csrows; VAR_27++) {
  u32 VAR_28;
  u32 VAR_29;

  VAR_21 = VAR_19->csrows[VAR_27];
  VAR_22 = VAR_21->channels[0]->dimm;

  VAR_26 = FUNC_0(VAR_20->mc_vbase + VAR_6 +
       (VAR_27 * VAR_7));

  VAR_28 = (VAR_26 & 0xffff0000) >> 16;
  VAR_29 = (VAR_26 & 0x0000ffff);

  if (VAR_28 == VAR_29)
   continue;

  VAR_28 <<= (24 - VAR_18);
  VAR_29 <<= (24 - VAR_18);
  VAR_29 |= (1 << (24 - VAR_18)) - 1;

  VAR_21->first_page = VAR_28;
  VAR_21->last_page = VAR_29;

  VAR_22->nr_pages = VAR_29 + 1 - VAR_28;
  VAR_22->grain = 8;
  VAR_22->mtype = VAR_25;
  VAR_22->dtype = VAR_0;
  if (VAR_23 & VAR_4)
   VAR_22->dtype = VAR_1;
  VAR_22->edac_mode = VAR_5;
 }
}
