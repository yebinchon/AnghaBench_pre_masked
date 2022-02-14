
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {int n_layers; int dimms; int layers; struct i5000_pvt* pvt_info; } ;
struct i5000_pvt {int maxdimmperch; int maxch; TYPE_1__** dimm_info; } ;
struct dimm_info {int grain; int nr_pages; int edac_mode; int dtype; int mtype; } ;
struct TYPE_2__ {int megabytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dimm_info* FUNC_0 (int ,int ,int ,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct i5000_pvt*,int,int) ;

__attribute__((used)) static int FUNC_4(struct mem_ctl_info *VAR_5)
{
 struct i5000_pvt *VAR_6;
 struct dimm_info *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_6 = VAR_5->pvt_info;
 VAR_9 = VAR_6->maxdimmperch * 2;

 VAR_8 = 1;
 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  for (VAR_12 = 0; VAR_12 < VAR_6->maxch; VAR_12++) {

   VAR_10 = FUNC_3(VAR_6, VAR_13, VAR_12);

   if (!FUNC_1(VAR_10))
    continue;

   VAR_7 = FUNC_0(VAR_5->layers, VAR_5->dimms, VAR_5->n_layers,
           VAR_12 / VAR_3,
           VAR_12 % VAR_3, VAR_13);

   VAR_11 = VAR_6->dimm_info[VAR_13][VAR_12].megabytes;
   VAR_7->grain = 8;


   VAR_7->mtype = VAR_4;


   if (FUNC_2(VAR_10) == 8)
    VAR_7->dtype = VAR_1;
   else
    VAR_7->dtype = VAR_0;

   VAR_7->edac_mode = VAR_2;
   VAR_7->nr_pages = VAR_11 << 8;
  }

  VAR_8 = 0;
 }

 return VAR_8;
}
