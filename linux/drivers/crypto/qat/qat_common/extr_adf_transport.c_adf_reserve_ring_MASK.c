
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct adf_etr_bank_data {int ring_mask; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct adf_etr_bank_data *VAR_1, uint32_t VAR_2)
{
 FUNC_0(&VAR_1->lock);
 if (VAR_1->ring_mask & (1 << VAR_2)) {
  FUNC_1(&VAR_1->lock);
  return -VAR_0;
 }
 VAR_1->ring_mask |= (1 << VAR_2);
 FUNC_1(&VAR_1->lock);
 return 0;
}
