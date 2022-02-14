
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct intel_engine_execlists {scalar_t__ submit_reg; scalar_t__ ctrl_reg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct intel_engine_execlists *VAR_0, u64 VAR_1, u32 VAR_2)
{
 if (VAR_0->ctrl_reg) {
  FUNC_2(FUNC_0(VAR_1), VAR_0->submit_reg + VAR_2 * 2);
  FUNC_2(FUNC_1(VAR_1), VAR_0->submit_reg + VAR_2 * 2 + 1);
 } else {
  FUNC_2(FUNC_1(VAR_1), VAR_0->submit_reg);
  FUNC_2(FUNC_0(VAR_1), VAR_0->submit_reg);
 }
}
