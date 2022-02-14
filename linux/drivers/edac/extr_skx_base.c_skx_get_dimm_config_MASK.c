
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct skx_pvt {struct skx_imc* imc; } ;
struct skx_imc {int mc; TYPE_1__* chan; } ;
struct mem_ctl_info {int n_layers; int dimms; int layers; struct skx_pvt* pvt_info; } ;
struct dimm_info {int dummy; } ;
struct TYPE_2__ {int cdev; } ;


 struct dimm_info* FUNC_0 (int ,int ,int ,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,struct dimm_info*,struct skx_imc*,int,int) ;
 scalar_t__ FUNC_6 (struct dimm_info*,struct skx_imc*,int,int,int ) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_8(struct mem_ctl_info *VAR_6)
{
 struct skx_pvt *VAR_7 = VAR_6->pvt_info;
 struct skx_imc *VAR_8 = VAR_7->imc;
 u32 VAR_9, VAR_10, VAR_11;
 struct dimm_info *VAR_12;
 int VAR_13, VAR_14;
 int VAR_15;

 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  VAR_15 = 0;
  FUNC_3(VAR_8->chan[VAR_13].cdev, 0x8C, &VAR_10);
  FUNC_3(VAR_8->chan[VAR_13].cdev, 0x400, &VAR_11);
  for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
   VAR_12 = FUNC_0(VAR_6->layers, VAR_6->dimms,
          VAR_6->n_layers, VAR_13, VAR_14, 0);
   FUNC_3(VAR_8->chan[VAR_13].cdev,
           0x80 + 4 * VAR_14, &VAR_9);
   if (FUNC_1(VAR_9)) {
    VAR_15 += FUNC_5(VAR_9, VAR_10, VAR_12, VAR_8, VAR_13, VAR_14);
   } else if (FUNC_2(VAR_11, VAR_14)) {
    VAR_15 += FUNC_6(VAR_12, VAR_8, VAR_13, VAR_14,
             VAR_0);
    VAR_5++;
   }
  }
  if (VAR_15 && !FUNC_4(VAR_8->chan[0].cdev)) {
   FUNC_7(VAR_2, "ECC is disabled on imc %d\n", VAR_8->mc);
   return -VAR_1;
  }
 }

 return 0;
}
