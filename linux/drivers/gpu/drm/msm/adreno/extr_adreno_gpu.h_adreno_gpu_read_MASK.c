
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct adreno_gpu {int base; scalar_t__* reg_offsets; } ;
typedef enum adreno_regs { ____Placeholder_adreno_regs } adreno_regs ;


 scalar_t__ FUNC_0 (struct adreno_gpu*,int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(struct adreno_gpu *VAR_0,
  enum adreno_regs VAR_1)
{
 u32 VAR_2 = VAR_0->reg_offsets[VAR_1];
 u32 VAR_3 = 0;
 if(FUNC_0(VAR_0,VAR_1))
  VAR_3 = FUNC_1(&VAR_0->base, VAR_2 - 1);
 return VAR_3;
}
