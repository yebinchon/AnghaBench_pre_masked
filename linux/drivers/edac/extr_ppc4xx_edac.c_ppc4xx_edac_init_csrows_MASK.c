
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ppc4xx_edac_pdata {int dcr_host; } ;
struct mem_ctl_info {int edac_cap; int nr_csrows; struct csrow_info** csrows; struct ppc4xx_edac_pdata* pvt_info; } ;
struct dimm_info {int nr_pages; int grain; int mtype; int dtype; int edac_mode; } ;
struct csrow_info {int nr_channels; TYPE_1__** channels; } ;
typedef enum mem_type { ____Placeholder_mem_type } mem_type ;
typedef enum edac_type { ____Placeholder_edac_type } edac_type ;
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
 int FUNC_0 (int) ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,struct mem_ctl_info*,char*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct mem_ctl_info *VAR_10, u32 VAR_11)
{
 const struct ppc4xx_edac_pdata *VAR_12 = VAR_10->pvt_info;
 int VAR_13 = 0;
 enum mem_type VAR_14;
 enum dev_type VAR_15;
 enum edac_type VAR_16;
 int VAR_17, VAR_18;
 u32 VAR_19, VAR_20, VAR_21;



 VAR_14 = FUNC_5(VAR_11);
 VAR_15 = FUNC_4(VAR_11);



 if (VAR_10->edac_cap & VAR_2)
  VAR_16 = VAR_4;
 else if (VAR_10->edac_cap & VAR_1)
  VAR_16 = VAR_0;
 else
  VAR_16 = VAR_3;






 for (VAR_17 = 0; VAR_17 < VAR_10->nr_csrows; VAR_17++) {
  struct csrow_info *VAR_22 = VAR_10->csrows[VAR_17];






  VAR_19 = FUNC_3(&VAR_12->dcr_host, FUNC_2(VAR_17));

  if ((VAR_19 & VAR_8) != VAR_7)
   continue;



  VAR_20 = VAR_19 & VAR_9;

  switch (VAR_20) {
  case 132:
  case 128:
  case 138:
  case 134:
  case 130:
  case 139:
  case 136:
  case 131:
  case 137:
  case 135:
  case 133:
  case 129:
   VAR_21 = FUNC_1(VAR_20);
   break;
  default:
   FUNC_6(VAR_6, VAR_10,
           "Unrecognized memory bank %d "
           "size 0x%08x\n",
           VAR_17, FUNC_0(VAR_20));
   VAR_13 = -VAR_5;
   goto done;
  }
  for (VAR_18 = 0; VAR_18 < VAR_22->nr_channels; VAR_18++) {
   struct dimm_info *VAR_23 = VAR_22->channels[VAR_18]->dimm;

   VAR_23->nr_pages = VAR_21 / VAR_22->nr_channels;
   VAR_23->grain = 1;

   VAR_23->mtype = VAR_14;
   VAR_23->dtype = VAR_15;

   VAR_23->edac_mode = VAR_16;
  }
 }

 done:
 return VAR_13;
}
