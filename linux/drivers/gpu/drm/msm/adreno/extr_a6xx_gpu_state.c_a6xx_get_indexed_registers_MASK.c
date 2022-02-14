
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct msm_gpu {int dummy; } ;
struct a6xx_gpu_state {int nr_indexed_regs; TYPE_1__* indexed_regs; } ;
struct TYPE_3__ {int * data; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct msm_gpu*,struct a6xx_gpu_state*,int *,TYPE_1__*) ;
 int * VAR_2 ;
 int FUNC_2 (struct msm_gpu*,int ) ;
 int FUNC_3 (struct msm_gpu*,int ,int ) ;
 TYPE_1__* FUNC_4 (struct a6xx_gpu_state*,int,int) ;

__attribute__((used)) static void FUNC_5(struct msm_gpu *VAR_3,
  struct a6xx_gpu_state *VAR_4)
{
 u32 VAR_5;
 int VAR_6 = FUNC_0(VAR_2) + 1;
 int VAR_7;

 VAR_4->indexed_regs = FUNC_4(VAR_4, VAR_6,
  sizeof(VAR_4->indexed_regs));
 if (!VAR_4->indexed_regs)
  return;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++)
  FUNC_1(VAR_3, VAR_4, &VAR_2[VAR_7],
   &VAR_4->indexed_regs[VAR_7]);


 VAR_5 = FUNC_2(VAR_3, VAR_0);
 FUNC_3(VAR_3, VAR_0, 0);


 FUNC_1(VAR_3, VAR_4, &VAR_1,
  &VAR_4->indexed_regs[VAR_7]);





 VAR_4->indexed_regs[VAR_7].data[0x2000] = VAR_5;


 FUNC_3(VAR_3, VAR_0, VAR_5);

 VAR_4->nr_indexed_regs = VAR_6;
}
