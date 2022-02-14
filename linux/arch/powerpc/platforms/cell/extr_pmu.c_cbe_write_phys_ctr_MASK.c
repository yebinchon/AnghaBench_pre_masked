
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct cbe_pmd_shadow_regs {int counter_value_in_latch; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,size_t) ;
 struct cbe_pmd_shadow_regs* FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t,int ) ;
 int FUNC_3 (size_t,int ,size_t) ;
 int VAR_2 ;
 int * VAR_3 ;

void FUNC_4(u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct cbe_pmd_shadow_regs *VAR_7;
 u32 VAR_8;

 if (VAR_5 < VAR_1) {




  FUNC_0(VAR_3[VAR_5], VAR_6);

  VAR_8 = FUNC_2(VAR_4, VAR_2);
  if (VAR_8 & VAR_0) {




   FUNC_3(VAR_4, VAR_2, VAR_8);
  } else {
   VAR_7 = FUNC_1(VAR_4);
   VAR_7->counter_value_in_latch |= (1 << VAR_5);
  }
 }
}
