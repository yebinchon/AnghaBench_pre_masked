
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skx_pvt {struct skx_imc* imc; } ;
struct skx_imc {int mc; int mbase; } ;
struct mem_ctl_info {int n_layers; int dimms; int layers; struct skx_pvt* pvt_info; } ;
struct dimm_info {int dummy; } ;


 struct dimm_info* FUNC_0 (int ,int ,int ,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct skx_imc*,int,int) ;
 int FUNC_2 (struct skx_imc*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int VAR_4 ;
 int FUNC_5 (int,char*,int ,int ,int ,int,int) ;
 int FUNC_6 (struct skx_imc*,int) ;
 int FUNC_7 (int ,char*,int ,int) ;
 scalar_t__ FUNC_8 (int ,int ,struct dimm_info*,struct skx_imc*,int,int) ;
 scalar_t__ FUNC_9 (struct dimm_info*,struct skx_imc*,int,int,int ) ;

__attribute__((used)) static int FUNC_10(struct mem_ctl_info *VAR_5)
{
 struct skx_pvt *VAR_6 = VAR_5->pvt_info;
 struct skx_imc *VAR_7 = VAR_6->imc;
 struct dimm_info *VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (!VAR_7->mbase)
   continue;

  VAR_13 = 0;
  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   VAR_8 = FUNC_0(VAR_5->layers, VAR_5->dimms,
          VAR_5->n_layers, VAR_11, VAR_12, 0);
   VAR_9 = FUNC_1(VAR_7, VAR_11, VAR_12);
   VAR_10 = FUNC_2(VAR_7, VAR_11, VAR_12);
   FUNC_5(1, "dimmmtr 0x%x mcddrtcfg 0x%x (mc%d ch%d dimm%d)\n",
     VAR_9, VAR_10, VAR_7->mc, VAR_11, VAR_12);

   if (FUNC_3(VAR_9))
    VAR_13 += FUNC_8(VAR_9, 0, VAR_8,
           VAR_7, VAR_11, VAR_12);
   else if (FUNC_4(VAR_10, VAR_12))
    VAR_13 += FUNC_9(VAR_8, VAR_7, VAR_11, VAR_12,
             VAR_0);
  }
  if (VAR_13 && !FUNC_6(VAR_7, VAR_11)) {
   FUNC_7(VAR_4, "ECC is disabled on imc %d channel %d\n",
         VAR_7->mc, VAR_11);
   return -VAR_1;
  }
 }

 return 0;
}
