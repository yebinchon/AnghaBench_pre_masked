
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct adf_etr_bank_data {int ring_mask; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct adf_etr_bank_data *VAR_0, uint32_t VAR_1)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->ring_mask &= ~(1 << VAR_1);
 FUNC_1(&VAR_0->lock);
}
