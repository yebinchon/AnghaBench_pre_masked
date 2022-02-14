
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct synps_platform_data {int (* get_dtype ) (int ) ;int (* get_mtype ) (int ) ;} ;
struct synps_edac_priv {int baseaddr; struct synps_platform_data* p_data; } ;
struct mem_ctl_info {size_t nr_csrows; struct csrow_info** csrows; struct synps_edac_priv* pvt_info; } ;
struct dimm_info {size_t nr_pages; int dtype; int grain; int mtype; int edac_mode; } ;
struct csrow_info {int nr_channels; TYPE_1__** channels; } ;
struct TYPE_2__ {struct dimm_info* dimm; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mem_ctl_info *VAR_3)
{
 struct synps_edac_priv *VAR_4 = VAR_3->pvt_info;
 const struct synps_platform_data *VAR_5;
 struct csrow_info *VAR_6;
 struct dimm_info *VAR_7;
 u32 VAR_8, VAR_9;
 int VAR_10;

 VAR_5 = VAR_4->p_data;

 for (VAR_9 = 0; VAR_9 < VAR_3->nr_csrows; VAR_9++) {
  VAR_6 = VAR_3->csrows[VAR_9];
  VAR_8 = FUNC_0();

  for (VAR_10 = 0; VAR_10 < VAR_6->nr_channels; VAR_10++) {
   VAR_7 = VAR_6->channels[VAR_10]->dimm;
   VAR_7->edac_mode = VAR_0;
   VAR_7->mtype = VAR_5->get_mtype(VAR_4->baseaddr);
   VAR_7->nr_pages = (VAR_8 >> VAR_1) / VAR_6->nr_channels;
   VAR_7->grain = VAR_2;
   VAR_7->dtype = VAR_5->get_dtype(VAR_4->baseaddr);
  }
 }
}
