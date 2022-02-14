
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_chip_generic {TYPE_1__* chip_types; } ;
struct al_fic {int state; scalar_t__ base; } ;
typedef int irq_flow_handler_t ;
typedef enum al_fic_state { ____Placeholder_al_fic_state } al_fic_state ;
struct TYPE_2__ {int handler; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct al_fic *VAR_5,
          struct irq_chip_generic *VAR_6,
          enum al_fic_state VAR_7)
{
 irq_flow_handler_t VAR_8;
 u32 VAR_9 = FUNC_0(VAR_5->base + VAR_1);

 if (VAR_7 == VAR_0) {
  VAR_8 = VAR_4;
  VAR_9 &= ~VAR_2;
 } else {
  VAR_8 = VAR_3;
  VAR_9 |= VAR_2;
 }
 VAR_6->chip_types->handler = VAR_8;
 VAR_5->state = VAR_7;
 FUNC_1(VAR_9, VAR_5->base + VAR_1);
}
