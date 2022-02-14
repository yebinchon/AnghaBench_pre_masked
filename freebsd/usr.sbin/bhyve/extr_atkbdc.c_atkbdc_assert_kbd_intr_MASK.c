
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_active; int irq; } ;
struct atkbdc_softc {int* ram; TYPE_1__ kbd; int ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct atkbdc_softc *VAR_1)
{
 if ((VAR_1->ram[0] & VAR_0) != 0) {
  VAR_1->kbd.irq_active = 1;
  FUNC_0(VAR_1->ctx, VAR_1->kbd.irq, VAR_1->kbd.irq);
 }
}
