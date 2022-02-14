
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adreno_gpu {scalar_t__* reg_offsets; } ;
typedef enum adreno_regs { ____Placeholder_adreno_regs } adreno_regs ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_1(struct adreno_gpu *VAR_2,
  enum adreno_regs VAR_3)
{
 if (VAR_3 >= VAR_0 ||
   !VAR_2->reg_offsets[VAR_3]) {
  FUNC_0();
 }







 if (VAR_2->reg_offsets[VAR_3] == VAR_1)
  return 0;

 return 1;
}
