
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int dummy; } ;
struct a6xx_gpu_state {int nr_clusters; int * clusters; } ;
struct a6xx_crashdumper {int dummy; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (struct msm_gpu*,struct a6xx_gpu_state*,int *,int *,struct a6xx_crashdumper*) ;
 int * FUNC_2 (struct a6xx_gpu_state*,int,int) ;

__attribute__((used)) static void FUNC_3(struct msm_gpu *VAR_1,
  struct a6xx_gpu_state *VAR_2,
  struct a6xx_crashdumper *VAR_3)
{
 int VAR_4;

 VAR_2->clusters = FUNC_2(VAR_2,
  FUNC_0(VAR_0), sizeof(*VAR_2->clusters));

 if (!VAR_2->clusters)
  return;

 VAR_2->nr_clusters = FUNC_0(VAR_0);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  FUNC_1(VAR_1, VAR_2, &VAR_0[VAR_4],
   &VAR_2->clusters[VAR_4], VAR_3);
}
