
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_mscm_ir_chip_data {scalar_t__ mscm_ir_base; int * saved_irsprc; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct vf610_mscm_ir_chip_data *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->saved_irsprc[VAR_2] = FUNC_1(VAR_1->mscm_ir_base + FUNC_0(VAR_2));
}
