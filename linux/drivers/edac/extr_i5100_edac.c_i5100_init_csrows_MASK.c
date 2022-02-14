
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {int tot_dimms; int n_layers; int dimms; int layers; struct i5100_priv* pvt_info; } ;
struct i5100_priv {TYPE_1__** mtr; } ;
struct dimm_info {unsigned long nr_pages; int grain; int label; int edac_mode; int mtype; int dtype; } ;
struct TYPE_2__ {int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dimm_info* FUNC_0 (int ,int ,int ,unsigned int const,unsigned int const,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (unsigned long const) ;
 int FUNC_2 (int,char*,unsigned int const,unsigned int const,long) ;
 unsigned int FUNC_3 (struct mem_ctl_info*,int) ;
 unsigned int FUNC_4 (struct mem_ctl_info*,int) ;
 unsigned long FUNC_5 (struct mem_ctl_info*,int) ;
 int FUNC_6 (struct mem_ctl_info*,unsigned int const,unsigned int const) ;
 int FUNC_7 (int ,int,char*,int) ;

__attribute__((used)) static void FUNC_8(struct mem_ctl_info *VAR_4)
{
 int VAR_5;
 struct i5100_priv *VAR_6 = VAR_4->pvt_info;

 for (VAR_5 = 0; VAR_5 < VAR_4->tot_dimms; VAR_5++) {
  struct dimm_info *VAR_7;
  const unsigned long VAR_8 = FUNC_5(VAR_4, VAR_5);
  const unsigned int VAR_9 = FUNC_3(VAR_4, VAR_5);
  const unsigned int VAR_10 = FUNC_4(VAR_4, VAR_5);

  if (!VAR_8)
   continue;

  VAR_7 = FUNC_0(VAR_4->layers, VAR_4->dimms, VAR_4->n_layers,
          VAR_9, VAR_10, 0);

  VAR_7->nr_pages = VAR_8;
  VAR_7->grain = 32;
  VAR_7->dtype = (VAR_6->mtr[VAR_9][VAR_10].width == 4) ?
    VAR_0 : VAR_1;
  VAR_7->mtype = VAR_3;
  VAR_7->edac_mode = VAR_2;
  FUNC_7(VAR_7->label, sizeof(VAR_7->label), "DIMM%u",
    FUNC_6(VAR_4, VAR_9, VAR_10));

  FUNC_2(2, "dimm channel %d, rank %d, size %ld\n",
    VAR_9, VAR_10, (long)FUNC_1(VAR_8));
 }
}
