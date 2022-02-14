
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_ctl_info {int mc_idx; int edac_cap; struct dimm_info** dimms; struct bluefield_edac_priv* pvt_info; } ;
struct dimm_info {int nr_pages; int dtype; int grain; int mtype; int edac_mode; } ;
struct bluefield_edac_priv {int dimm_per_mc; int* dimm_ranks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_22)
{
 struct bluefield_edac_priv *VAR_23 = VAR_22->pvt_info;
 int VAR_24 = VAR_22->mc_idx;
 struct dimm_info *VAR_25;
 u64 VAR_26, VAR_27;
 int VAR_28 = 1, VAR_29;

 for (VAR_29 = 0; VAR_29 < VAR_23->dimm_per_mc; VAR_29++) {
  VAR_25 = VAR_22->dimms[VAR_29];

  VAR_27 = VAR_24 << 16 | VAR_29;
  VAR_26 = FUNC_1(VAR_12, VAR_27);

  if (!FUNC_0(VAR_18, VAR_26)) {
   VAR_25->mtype = VAR_8;
   continue;
  }

  VAR_28 = 0;

  VAR_25->edac_mode = VAR_6;

  if (FUNC_0(VAR_14, VAR_26))
   VAR_25->mtype = VAR_10;
  else if (FUNC_0(VAR_13, VAR_26))
   VAR_25->mtype = VAR_9;
  else if (FUNC_0(VAR_15, VAR_26))
   VAR_25->mtype = VAR_11;
  else
   VAR_25->mtype = VAR_7;

  VAR_25->nr_pages =
   FUNC_0(VAR_18, VAR_26) *
   (VAR_21 / VAR_20);
  VAR_25->grain = VAR_19;


  switch (FUNC_0(VAR_16, VAR_26)) {
  case 4:
   VAR_25->dtype = VAR_2;
   break;
  case 8:
   VAR_25->dtype = VAR_3;
   break;
  case 16:
   VAR_25->dtype = VAR_1;
   break;
  default:
   VAR_25->dtype = VAR_0;
  }

  VAR_23->dimm_ranks[VAR_29] =
   FUNC_0(VAR_17, VAR_26);
 }

 if (VAR_28)
  VAR_22->edac_cap = VAR_4;
 else
  VAR_22->edac_cap = VAR_5;
}
