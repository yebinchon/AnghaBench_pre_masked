
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct irq_source_info {int enable_reg; int enable_mask; int* enable_value; } ;
struct irq_service {int ctx; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;

void FUNC_2(
 struct irq_service *VAR_0,
 const struct irq_source_info *VAR_1,
 bool VAR_2)
{
 uint32_t VAR_3 = VAR_1->enable_reg;
 uint32_t VAR_4 = FUNC_0(VAR_0->ctx, VAR_3);

 VAR_4 = (VAR_4 & ~VAR_1->enable_mask) |
  (VAR_1->enable_value[VAR_2 ? 0 : 1] & VAR_1->enable_mask);
 FUNC_1(VAR_0->ctx, VAR_3, VAR_4);
}
