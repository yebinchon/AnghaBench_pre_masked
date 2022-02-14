
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mv_cesa_engine {scalar_t__ int_mask; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct mv_cesa_engine *VAR_1,
     u32 VAR_2)
{
 if (VAR_2 == VAR_1->int_mask)
  return;

 FUNC_0(VAR_2, VAR_1->regs + VAR_0);
 VAR_1->int_mask = VAR_2;
}
