
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct adf_etr_bank_data {int irq_mask; int * rings; int bank_number; int csr_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct adf_etr_bank_data *VAR_1)
{
 uint32_t VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_1->csr_addr, VAR_1->bank_number);
 VAR_2 = ~VAR_2 & VAR_1->irq_mask;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  if (VAR_2 & (1 << VAR_3))
   FUNC_1(&VAR_1->rings[VAR_3]);
 }
}
