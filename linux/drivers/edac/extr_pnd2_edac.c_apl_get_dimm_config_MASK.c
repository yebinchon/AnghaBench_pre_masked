
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct pnd2_pvt {int* dimm_geom; } ;
struct mem_ctl_info {int n_layers; int dimms; int layers; struct pnd2_pvt* pvt_info; } ;
struct dimm_info {int grain; int label; int edac_mode; int mtype; int dtype; int nr_pages; } ;
struct d_cr_drp0 {scalar_t__ addrdec; scalar_t__ dden; scalar_t__ dwid; int rken0; int rken1; } ;
struct TYPE_3__ {scalar_t__ addrdec; scalar_t__ dden; scalar_t__ dwid; unsigned long rowbits; unsigned long colbits; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dimm_info* FUNC_2 (int ,int ,int ,int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 struct d_cr_drp0* VAR_7 ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int ,int,char*,int,int) ;

__attribute__((used)) static void FUNC_6(struct mem_ctl_info *VAR_8)
{
 struct pnd2_pvt *VAR_9 = VAR_8->pvt_info;
 struct dimm_info *VAR_10;
 struct d_cr_drp0 *VAR_11;
 u64 VAR_12;
 int VAR_13, VAR_14;

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  if (!(VAR_5 & FUNC_1(VAR_13)))
   continue;

  VAR_10 = FUNC_2(VAR_8->layers, VAR_8->dimms, VAR_8->n_layers, VAR_13, 0, 0);
  if (!VAR_10) {
   FUNC_4(0, "No allocated DIMM for channel %d\n", VAR_13);
   continue;
  }

  VAR_11 = &VAR_7[VAR_13];
  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_6); VAR_14++)
   if (VAR_6[VAR_14].addrdec == VAR_11->addrdec &&
       VAR_6[VAR_14].dden == VAR_11->dden &&
       VAR_6[VAR_14].dwid == VAR_11->dwid)
    break;

  if (VAR_14 == FUNC_0(VAR_6)) {
   FUNC_4(0, "Channel %d: unrecognized DIMM\n", VAR_13);
   continue;
  }

  VAR_9->dimm_geom[VAR_13] = VAR_14;
  VAR_12 = (VAR_11->rken0 + VAR_11->rken1) * 8 * (1ul << VAR_6[VAR_14].rowbits) *
       (1ul << VAR_6[VAR_14].colbits);
  FUNC_4(0, "Channel %d: %lld MByte DIMM\n", VAR_13, VAR_12 >> (20 - 3));
  VAR_10->nr_pages = FUNC_3(VAR_12 >> (20 - 3));
  VAR_10->grain = 32;
  VAR_10->dtype = (VAR_11->dwid == 0) ? VAR_2 : VAR_1;
  VAR_10->mtype = VAR_4;
  VAR_10->edac_mode = VAR_3;
  FUNC_5(VAR_10->label, sizeof(VAR_10->label), "Slice#%d_Chan#%d", VAR_13 / 2, VAR_13 % 2);
 }
}
