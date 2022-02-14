
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct bpf_jit {int* seen_reg; } ;


 size_t* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct bpf_jit *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = VAR_0[VAR_2];

 if (!VAR_1->seen_reg[VAR_3] && VAR_3 >= 6 && VAR_3 <= 15)
  VAR_1->seen_reg[VAR_3] = 1;
}
