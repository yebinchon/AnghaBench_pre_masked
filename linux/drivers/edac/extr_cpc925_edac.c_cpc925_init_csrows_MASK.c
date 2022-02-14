
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mem_ctl_info {int nr_csrows; struct csrow_info** csrows; struct cpc925_mc_pdata* pvt_info; } ;
struct dimm_info {unsigned long nr_pages; int grain; int dtype; int edac_mode; int mtype; } ;
struct csrow_info {unsigned long first_page; unsigned long last_page; int nr_channels; TYPE_1__** channels; } ;
struct cpc925_mc_pdata {scalar_t__ vbase; } ;
typedef enum dev_type { ____Placeholder_dev_type } dev_type ;
struct TYPE_2__ {struct dimm_info* dimm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct cpc925_mc_pdata*) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_14)
{
 struct cpc925_mc_pdata *VAR_15 = VAR_14->pvt_info;
 struct csrow_info *VAR_16;
 struct dimm_info *VAR_17;
 enum dev_type VAR_18;
 int VAR_19, VAR_20;
 u32 VAR_21, VAR_22, VAR_23, VAR_24;
 unsigned long VAR_25, VAR_26, VAR_27 = 0;

 FUNC_1(VAR_15);

 for (VAR_19 = 0; VAR_19 < VAR_14->nr_csrows; VAR_19++) {
  VAR_21 = FUNC_0(VAR_15->vbase + VAR_13 +
       0x20 * VAR_19);
  VAR_22 = FUNC_0(VAR_15->vbase + VAR_12 +
       0x20 + VAR_19);
  VAR_23 = (((VAR_21 & VAR_6) >> VAR_7) << 8) |
         ((VAR_22 & VAR_4) >> VAR_5);

  if (VAR_23 == 0)
   continue;

  VAR_16 = VAR_14->csrows[VAR_19];

  VAR_25 = VAR_23 * (1UL << 28);
  VAR_16->first_page = VAR_27;
  VAR_26 = VAR_25 >> VAR_11;
  VAR_16->last_page = VAR_16->first_page + VAR_26 - 1;
  VAR_27 = VAR_16->last_page + 1;

  switch (VAR_16->nr_channels) {
  case 1:
   VAR_24 = 32;
   break;
  case 2:
  default:
   VAR_24 = 64;
   break;
  }
  switch ((VAR_21 & VAR_8) >> VAR_9) {
  case 6:
  case 5:
  case 8:
   VAR_18 = VAR_1;
   break;
  case 7:
  case 9:
   VAR_18 = VAR_2;
   break;
  default:
   VAR_18 = VAR_0;
  break;
  }
  for (VAR_20 = 0; VAR_20 < VAR_16->nr_channels; VAR_20++) {
   VAR_17 = VAR_16->channels[VAR_20]->dimm;
   VAR_17->nr_pages = VAR_26 / VAR_16->nr_channels;
   VAR_17->mtype = VAR_10;
   VAR_17->edac_mode = VAR_3;
   VAR_17->grain = VAR_24;
   VAR_17->dtype = VAR_18;
  }
 }
}
