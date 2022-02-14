
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mem_ctl_info {struct dimm_info** dimms; struct axp_mc_drvdata* pvt_info; } ;
struct dimm_info {int nr_pages; int grain; int edac_mode; int mtype; int dtype; } ;
struct axp_mc_drvdata {int width; int* cs_addr_sel; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_7 (unsigned int) ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct mem_ctl_info *VAR_11)
{
 struct axp_mc_drvdata *VAR_12 = VAR_11->pvt_info;
 uint32_t VAR_13, VAR_14, VAR_15;
 unsigned int VAR_16, VAR_17, VAR_18;
 struct dimm_info *VAR_19;

 VAR_13 = FUNC_8(VAR_12->base + VAR_7);
 if (VAR_13 & VAR_6)

  VAR_12->width = 8;
 else

  VAR_12->width = 4;

 VAR_14 = FUNC_8(VAR_12->base + VAR_5);
 VAR_15 = FUNC_8(VAR_12->base + VAR_10);
 for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {
  VAR_19 = VAR_11->dimms[VAR_16];

  if (!(VAR_15 & FUNC_7(VAR_16)))
   continue;

  VAR_12->cs_addr_sel[VAR_16] =
   !!(VAR_14 & FUNC_0(VAR_16));

  VAR_17 = (VAR_14 & FUNC_5(VAR_16)) >> FUNC_6(VAR_16);
  VAR_18 = ((VAR_14 & FUNC_1(VAR_16)) >> (FUNC_2(VAR_16) - 2) |
       ((VAR_14 & FUNC_3(VAR_16)) >> FUNC_4(VAR_16)));

  switch (VAR_18) {
  case 0:
   VAR_19->nr_pages = 524288;
   break;
  case 1:
   VAR_19->nr_pages = 65536;
   break;
  case 2:
   VAR_19->nr_pages = 131072;
   break;
  case 3:
   VAR_19->nr_pages = 262144;
   break;
  case 4:
   VAR_19->nr_pages = 1048576;
   break;
  case 5:
   VAR_19->nr_pages = 2097152;
   break;
  }
  VAR_19->grain = 8;
  VAR_19->dtype = VAR_17 ? VAR_0 : VAR_1;
  VAR_19->mtype = (VAR_13 & VAR_8) ?
   VAR_4 : VAR_3;
  VAR_19->edac_mode = VAR_2;
 }
}
