
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hub_irq_data {int cpu; void** irq_mask; } ;
struct cpumask {int dummy; } ;
typedef int nasid_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct cpumask const*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct hub_irq_data *VAR_5, const struct cpumask *VAR_6)
{
 nasid_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_6, VAR_4);
 VAR_7 = FUNC_0(FUNC_2(VAR_8));
 VAR_5->cpu = VAR_8;
 if (!FUNC_4(VAR_8)) {
  VAR_5->irq_mask[0] = FUNC_1(VAR_7, VAR_0);
  VAR_5->irq_mask[1] = FUNC_1(VAR_7, VAR_2);
 } else {
  VAR_5->irq_mask[0] = FUNC_1(VAR_7, VAR_1);
  VAR_5->irq_mask[1] = FUNC_1(VAR_7, VAR_3);
 }
}
