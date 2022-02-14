
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct mpic {unsigned int isu_shift; unsigned int isu_mask; unsigned int* isu_reg0_shadow; int * isus; int reg_type; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (int ,int *,unsigned int) ;

__attribute__((used)) static inline u32 FUNC_2(struct mpic *VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_4 >> VAR_3->isu_shift;
 unsigned int VAR_7 = VAR_4 & VAR_3->isu_mask;
 unsigned int VAR_8;

 VAR_8 = FUNC_1(VAR_3->reg_type, &VAR_3->isus[VAR_6],
    VAR_5 + (VAR_7 * FUNC_0(VAR_0)));





 return VAR_8;
}
