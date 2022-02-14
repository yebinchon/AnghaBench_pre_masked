
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct msm_gpu {int aspace; } ;
struct a5xx_gpu_state {int hlsqregs; } ;
struct a5xx_crashdumper {int* ptr; int iova; int bo; int member_0; } ;
struct TYPE_3__ {int count; int type; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct msm_gpu*,struct a5xx_crashdumper*) ;
 scalar_t__ FUNC_2 (struct msm_gpu*,struct a5xx_crashdumper*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void FUNC_7(struct msm_gpu *VAR_5,
  struct a5xx_gpu_state *VAR_6)
{
 struct a5xx_crashdumper VAR_7 = { 0 };
 u32 VAR_8, VAR_9 = 0;
 u64 *VAR_10;
 int VAR_11;

 if (FUNC_1(VAR_5, &VAR_7))
  return;


 VAR_10 = VAR_7.ptr;


 VAR_8 = VAR_7.iova + (256 * VAR_3);


 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++)
  VAR_9 += VAR_4[VAR_11].count;

 VAR_6->hlsqregs = FUNC_3(VAR_9, sizeof(u32), VAR_0);
 if (!VAR_6->hlsqregs)
  return;


 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++) {
  u32 VAR_12 = VAR_4[VAR_11].type;
  u32 VAR_13 = VAR_4[VAR_11].count;


  *VAR_10++ = ((u64) VAR_12 << 8);
  *VAR_10++ = (((u64) VAR_2) << 44) |
   (1 << 21) | 1;

  *VAR_10++ = VAR_8;
  *VAR_10++ = (((u64) VAR_1) << 44)
   | VAR_13;

  VAR_8 += VAR_13 * sizeof(u32);
 }


 *VAR_10++ = 0;
 *VAR_10++ = 0;

 if (FUNC_2(VAR_5, &VAR_7)) {
  FUNC_4(VAR_6->hlsqregs);
  FUNC_6(VAR_7.bo, VAR_5->aspace, 1);
  return;
 }


 FUNC_5(VAR_6->hlsqregs, VAR_7.ptr + (256 * VAR_3),
  VAR_9 * sizeof(u32));

 FUNC_6(VAR_7.bo, VAR_5->aspace, 1);
}
