
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rank_info {int chan_idx; struct dimm_info* dimm; struct csrow_info* csrow; } ;
struct mem_ctl_info {unsigned int mc_idx; unsigned int tot_dimms; unsigned int n_layers; unsigned int nr_csrows; unsigned int num_cschannel; int csbased; int op_state; struct dimm_info** dimms; struct csrow_info** csrows; struct edac_mc_layer* layers; void* pvt_info; int ** ue_per_layer; int ** ce_per_layer; } ;
struct edac_mc_layer {unsigned int size; size_t type; scalar_t__ is_virt_csrow; } ;
struct dimm_info {unsigned int* location; int csrow; int cschannel; void* label; struct mem_ctl_info* mci; } ;
struct csrow_info {int csrow_idx; unsigned int nr_channels; struct rank_info** channels; struct mem_ctl_info* mci; } ;
typedef int pos ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct edac_mc_layer*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct mem_ctl_info*) ;
 void* FUNC_3 (void**,unsigned int,int) ;
 int FUNC_4 (int,char*,unsigned int,...) ;
 char** VAR_5 ;
 int FUNC_5 (struct mem_ctl_info*,int ,char*) ;
 void* FUNC_6 (unsigned int,int,int ) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (struct edac_mc_layer*,struct edac_mc_layer*,int) ;
 int FUNC_9 (unsigned int**,int ,int) ;
 int FUNC_10 (void*,int,char*,...) ;

struct mem_ctl_info *FUNC_11(unsigned int VAR_6,
       unsigned int VAR_7,
       struct edac_mc_layer *VAR_8,
       unsigned int VAR_9)
{
 struct mem_ctl_info *VAR_10;
 struct edac_mc_layer *VAR_11;
 struct csrow_info *VAR_12;
 struct rank_info *VAR_13;
 struct dimm_info *VAR_14;
 u32 *VAR_15[VAR_0], *VAR_16[VAR_0];
 unsigned int VAR_17[VAR_0];
 unsigned int VAR_18, VAR_19 = 1, VAR_20 = 1;
 unsigned int VAR_21 = 1, VAR_22 = 1, VAR_23 = 0;
 void *VAR_24, *VAR_25, *VAR_26 = ((void*)0);
 int VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 bool VAR_34 = 0;

 FUNC_0(VAR_7 > VAR_0 || VAR_7 == 0);




 for (VAR_27 = 0; VAR_27 < VAR_7; VAR_27++) {
  VAR_19 *= VAR_8[VAR_27].size;
  if (VAR_8[VAR_27].is_virt_csrow)
   VAR_21 *= VAR_8[VAR_27].size;
  else
   VAR_22 *= VAR_8[VAR_27].size;

  if (VAR_8[VAR_27].type == VAR_1)
   VAR_34 = 1;
 }






 VAR_10 = FUNC_3(&VAR_26, sizeof(*VAR_10), 1);
 VAR_11 = FUNC_3(&VAR_26, sizeof(*VAR_11), VAR_7);
 for (VAR_27 = 0; VAR_27 < VAR_7; VAR_27++) {
  VAR_20 *= VAR_8[VAR_27].size;
  FUNC_4(4, "errcount layer %d size %d\n", VAR_27, VAR_20);
  VAR_15[VAR_27] = FUNC_3(&VAR_26, sizeof(u32), VAR_20);
  VAR_16[VAR_27] = FUNC_3(&VAR_26, sizeof(u32), VAR_20);
  VAR_23 += 2 * VAR_20;
 }

 FUNC_4(4, "allocating %d error counters\n", VAR_23);
 VAR_24 = FUNC_3(&VAR_26, VAR_9, 1);
 VAR_18 = ((unsigned long)VAR_24) + VAR_9;

 FUNC_4(1, "allocating %u bytes for mci data (%d %s, %d csrows/channels)\n",
   VAR_18,
   VAR_19,
   VAR_34 ? "ranks" : "dimms",
   VAR_21 * VAR_22);

 VAR_10 = FUNC_7(VAR_18, VAR_2);
 if (VAR_10 == ((void*)0))
  return ((void*)0);




 VAR_11 = (struct edac_mc_layer *)(((char *)VAR_10) + ((unsigned long)VAR_11));
 for (VAR_27 = 0; VAR_27 < VAR_7; VAR_27++) {
  VAR_10->ce_per_layer[VAR_27] = (u32 *)((char *)VAR_10 + ((unsigned long)VAR_15[VAR_27]));
  VAR_10->ue_per_layer[VAR_27] = (u32 *)((char *)VAR_10 + ((unsigned long)VAR_16[VAR_27]));
 }
 VAR_24 = VAR_9 ? (((char *)VAR_10) + ((unsigned long)VAR_24)) : ((void*)0);


 VAR_10->mc_idx = VAR_6;
 VAR_10->tot_dimms = VAR_19;
 VAR_10->pvt_info = VAR_24;
 VAR_10->n_layers = VAR_7;
 VAR_10->layers = VAR_11;
 FUNC_8(VAR_10->layers, VAR_8, sizeof(*VAR_11) * VAR_7);
 VAR_10->nr_csrows = VAR_21;
 VAR_10->num_cschannel = VAR_22;
 VAR_10->csbased = VAR_34;




 VAR_10->csrows = FUNC_6(VAR_21, sizeof(*VAR_10->csrows), VAR_2);
 if (!VAR_10->csrows)
  goto error;
 for (VAR_29 = 0; VAR_29 < VAR_21; VAR_29++) {
  VAR_12 = FUNC_7(sizeof(**VAR_10->csrows), VAR_2);
  if (!VAR_12)
   goto error;
  VAR_10->csrows[VAR_29] = VAR_12;
  VAR_12->csrow_idx = VAR_29;
  VAR_12->mci = VAR_10;
  VAR_12->nr_channels = VAR_22;
  VAR_12->channels = FUNC_6(VAR_22, sizeof(*VAR_12->channels),
     VAR_2);
  if (!VAR_12->channels)
   goto error;

  for (VAR_30 = 0; VAR_30 < VAR_22; VAR_30++) {
   VAR_13 = FUNC_7(sizeof(**VAR_12->channels), VAR_2);
   if (!VAR_13)
    goto error;
   VAR_12->channels[VAR_30] = VAR_13;
   VAR_13->chan_idx = VAR_30;
   VAR_13->csrow = VAR_12;
  }
 }




 VAR_10->dimms = FUNC_6(VAR_19, sizeof(*VAR_10->dimms), VAR_2);
 if (!VAR_10->dimms)
  goto error;

 FUNC_9(&VAR_17, 0, sizeof(VAR_17));
 VAR_29 = 0;
 VAR_30 = 0;
 for (VAR_27 = 0; VAR_27 < VAR_19; VAR_27++) {
  VAR_13 = VAR_10->csrows[VAR_29]->channels[VAR_30];
  VAR_33 = FUNC_1(VAR_11, VAR_7, VAR_17[0], VAR_17[1], VAR_17[2]);
  if (VAR_33 < 0 || VAR_33 >= VAR_19) {
   FUNC_5(VAR_10, VAR_3, "EDAC core bug: EDAC_DIMM_OFF is trying to do an illegal data access\n");
   goto error;
  }

  VAR_14 = FUNC_7(sizeof(**VAR_10->dimms), VAR_2);
  if (!VAR_14)
   goto error;
  VAR_10->dimms[VAR_33] = VAR_14;
  VAR_14->mci = VAR_10;




  VAR_32 = sizeof(VAR_14->label);
  VAR_25 = VAR_14->label;
  VAR_31 = FUNC_10(VAR_25, VAR_32, "mc#%u", VAR_6);
  VAR_25 += VAR_31;
  VAR_32 -= VAR_31;
  for (VAR_28 = 0; VAR_28 < VAR_7; VAR_28++) {
   VAR_31 = FUNC_10(VAR_25, VAR_32, "%s#%u",
         VAR_5[VAR_8[VAR_28].type],
         VAR_17[VAR_28]);
   VAR_25 += VAR_31;
   VAR_32 -= VAR_31;
   VAR_14->location[VAR_28] = VAR_17[VAR_28];

   if (VAR_32 <= 0)
    break;
  }


  VAR_13->dimm = VAR_14;
  VAR_14->csrow = VAR_29;
  VAR_14->cschannel = VAR_30;


  if (VAR_8[0].is_virt_csrow) {
   VAR_30++;
   if (VAR_30 == VAR_22) {
    VAR_30 = 0;
    VAR_29++;
   }
  } else {
   VAR_29++;
   if (VAR_29 == VAR_21) {
    VAR_29 = 0;
    VAR_30++;
   }
  }


  for (VAR_28 = VAR_7 - 1; VAR_28 >= 0; VAR_28--) {
   VAR_17[VAR_28]++;
   if (VAR_17[VAR_28] < VAR_8[VAR_28].size)
    break;
   VAR_17[VAR_28] = 0;
  }
 }

 VAR_10->op_state = VAR_4;

 return VAR_10;

error:
 FUNC_2(VAR_10);

 return ((void*)0);
}
