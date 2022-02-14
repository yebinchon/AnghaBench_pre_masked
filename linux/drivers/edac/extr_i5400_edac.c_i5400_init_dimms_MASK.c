
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mem_ctl_info {TYPE_3__** dimms; int n_layers; TYPE_2__* layers; struct i5400_pvt* pvt_info; } ;
struct i5400_pvt {int maxch; int maxdimmperch; TYPE_1__** dimm_info; } ;
struct dimm_info {int nr_pages; int grain; int edac_mode; int mtype; int dtype; } ;
struct TYPE_6__ {int edac_mode; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_4__ {int megabytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dimm_info* FUNC_0 (TYPE_2__*,TYPE_3__**,int ,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct i5400_pvt*,int,int) ;
 int FUNC_4 (int,char*,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct mem_ctl_info *VAR_6)
{
 struct i5400_pvt *VAR_7;
 struct dimm_info *VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;

 VAR_7 = VAR_6->pvt_info;

 VAR_10 = VAR_7->maxch;
 VAR_11 = VAR_7->maxdimmperch;

 VAR_9 = 0;





 for (VAR_14 = 0; VAR_14 < VAR_6->layers[0].size * VAR_6->layers[1].size;
      VAR_14++) {
  for (VAR_15 = 0; VAR_15 < VAR_6->layers[2].size; VAR_15++) {
   VAR_12 = FUNC_3(VAR_7, VAR_15, VAR_14);


   if (!FUNC_1(VAR_12))
    continue;

   VAR_8 = FUNC_0(VAR_6->layers, VAR_6->dimms, VAR_6->n_layers,
           VAR_14 / 2, VAR_14 % 2, VAR_15);

   VAR_13 = VAR_7->dimm_info[VAR_15][VAR_14].megabytes;

   FUNC_4(2, "dimm (branch %d channel %d slot %d): %d.%03d GB\n",
     VAR_14 / 2, VAR_14 % 2, VAR_15,
     VAR_13 / 1000, VAR_13 % 1000);

   VAR_8->nr_pages = VAR_13 << 8;
   VAR_8->grain = 8;
   VAR_8->dtype = FUNC_2(VAR_12) == 8 ?
          VAR_1 : VAR_0;
   VAR_8->mtype = VAR_5;




   VAR_8->edac_mode = FUNC_2(VAR_12) == 8 ?
       VAR_3 : VAR_2;
   VAR_9++;
  }
 }





 if (VAR_9 == 1)
  VAR_6->dimms[0]->edac_mode = VAR_4;

 return (VAR_9 == 0);
}
