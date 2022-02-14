
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct adf_etr_bank_data {scalar_t__ irq_coalesc_timer; int accel_dev; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,char const*,int ,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(struct adf_etr_bank_data *VAR_4,
      const char *VAR_5,
      uint32_t VAR_6)
{
 if (FUNC_0(VAR_4->accel_dev, VAR_5,
       VAR_3,
       VAR_6, &VAR_4->irq_coalesc_timer))
  VAR_4->irq_coalesc_timer = VAR_0;

 if (VAR_1 < VAR_4->irq_coalesc_timer ||
     VAR_2 > VAR_4->irq_coalesc_timer)
  VAR_4->irq_coalesc_timer = VAR_0;
}
