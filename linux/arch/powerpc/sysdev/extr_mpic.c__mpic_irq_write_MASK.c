
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpic {unsigned int isu_shift; unsigned int isu_mask; int* isu_reg0_shadow; int * isus; int reg_type; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,unsigned int,int) ;

__attribute__((used)) static inline void FUNC_2(struct mpic *VAR_3, unsigned int VAR_4,
       unsigned int VAR_5, u32 VAR_6)
{
 unsigned int VAR_7 = VAR_4 >> VAR_3->isu_shift;
 unsigned int VAR_8 = VAR_4 & VAR_3->isu_mask;

 FUNC_1(VAR_3->reg_type, &VAR_3->isus[VAR_7],
      VAR_5 + (VAR_8 * FUNC_0(VAR_0)), VAR_6);






}
