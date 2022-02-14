
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int icc_path; } ;
struct adreno_gpu {struct msm_gpu base; } ;
struct a6xx_gmu {int hung; int dev; int gmu_irq; int gxpd; scalar_t__ nr_gpu_freqs; int hfi_irq; int clocks; int nr_clocks; int core_clk; int initialized; } ;
struct a6xx_gpu {struct a6xx_gmu gmu; struct adreno_gpu base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int,char*) ;
 int FUNC_3 (struct a6xx_gmu*,scalar_t__) ;
 int FUNC_4 (struct a6xx_gmu*,int) ;
 int FUNC_5 (struct a6xx_gmu*,int) ;
 int FUNC_6 (struct a6xx_gmu*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct a6xx_gmu*,int ) ;
 int FUNC_12 (struct a6xx_gmu*,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

int FUNC_17(struct a6xx_gpu *VAR_9)
{
 struct adreno_gpu *VAR_10 = &VAR_9->base;
 struct msm_gpu *VAR_11 = &VAR_10->base;
 struct a6xx_gmu *VAR_12 = &VAR_9->gmu;
 int VAR_13, VAR_14;

 if (FUNC_2(!VAR_12->initialized, "The GMU is not set up yet\n"))
  return 0;

 VAR_12->hung = 0;


 FUNC_15(VAR_12->dev);


 FUNC_8(VAR_12->core_clk, 200000000);
 VAR_14 = FUNC_7(VAR_12->nr_clocks, VAR_12->clocks);
 if (VAR_14) {
  FUNC_16(VAR_12->dev);
  return VAR_14;
 }


 FUNC_13(VAR_11->icc_path, 0, FUNC_1(3072));


 FUNC_12(VAR_12, VAR_4, ~0);
 FUNC_12(VAR_12, VAR_5, ~VAR_0);
 FUNC_10(VAR_12->gmu_irq);


 VAR_13 = FUNC_11(VAR_12, VAR_6) == 1 ?
  VAR_3 : VAR_2;

 VAR_14 = FUNC_4(VAR_12, VAR_13);
 if (VAR_14)
  goto out;

 VAR_14 = FUNC_5(VAR_12, VAR_13);
 if (VAR_14)
  goto out;





 FUNC_12(VAR_12, VAR_7, ~0);
 FUNC_12(VAR_12, VAR_8, ~VAR_1);
 FUNC_10(VAR_12->hfi_irq);


 FUNC_3(VAR_12, VAR_12->nr_gpu_freqs - 1);






 if (!FUNC_0(VAR_12->gxpd))
  FUNC_14(VAR_12->gxpd);

out:

 if (VAR_14) {
  FUNC_9(VAR_12->gmu_irq);
  FUNC_6(VAR_12);
  FUNC_16(VAR_12->dev);
 }

 return VAR_14;
}
