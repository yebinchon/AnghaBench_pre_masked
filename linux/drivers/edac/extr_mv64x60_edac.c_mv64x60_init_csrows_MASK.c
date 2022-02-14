
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mv64x60_mc_pdata {int total_mem; scalar_t__ mc_vbase; } ;
struct mem_ctl_info {struct csrow_info** csrows; } ;
struct dimm_info {int nr_pages; int grain; int edac_mode; int dtype; int mtype; } ;
struct csrow_info {TYPE_1__** channels; } ;
struct TYPE_2__ {struct dimm_info* dimm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct mv64x60_mc_pdata*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_10,
    struct mv64x60_mc_pdata *VAR_11)
{
 struct csrow_info *VAR_12;
 struct dimm_info *VAR_13;

 u32 VAR_14;
 u32 VAR_15;

 FUNC_0(VAR_11);

 VAR_15 = FUNC_1(VAR_11->mc_vbase + VAR_7);

 VAR_12 = VAR_10->csrows[0];
 VAR_13 = VAR_12->channels[0]->dimm;

 VAR_13->nr_pages = VAR_11->total_mem >> VAR_9;
 VAR_13->grain = 8;

 VAR_13->mtype = (VAR_15 & VAR_8) ? VAR_6 : VAR_5;

 VAR_14 = (VAR_15 >> 20) & 0x3;
 switch (VAR_14) {
 case 0x0:
  VAR_13->dtype = VAR_2;
  break;
 case 0x2:
  VAR_13->dtype = VAR_1;
  break;
 case 0x3:
  VAR_13->dtype = VAR_3;
  break;
 default:
  VAR_13->dtype = VAR_0;
  break;
 }

 VAR_13->edac_mode = VAR_4;
}
