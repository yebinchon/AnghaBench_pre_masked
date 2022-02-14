
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct icside_state {int channel; scalar_t__ irq_port; scalar_t__ enabled; } ;
struct expansion_card {int dummy; } ;
struct TYPE_4__ {int channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 struct expansion_card* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct icside_state* FUNC_1 (struct expansion_card*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(ide_drive_t *VAR_2, int VAR_3)
{
 ide_hwif_t *VAR_4 = VAR_2->hwif;
 struct expansion_card *VAR_5 = FUNC_0(VAR_4->dev);
 struct icside_state *VAR_6 = FUNC_1(VAR_5);
 unsigned long VAR_7;

 FUNC_3(VAR_7);

 VAR_6->channel = VAR_4->channel;

 if (VAR_6->enabled && !VAR_3) {
  switch (VAR_4->channel) {
  case 0:
   FUNC_5(0, VAR_6->irq_port + VAR_0);
   FUNC_4(VAR_6->irq_port + VAR_1);
   break;
  case 1:
   FUNC_5(0, VAR_6->irq_port + VAR_1);
   FUNC_4(VAR_6->irq_port + VAR_0);
   break;
  }
 } else {
  FUNC_4(VAR_6->irq_port + VAR_1);
  FUNC_4(VAR_6->irq_port + VAR_0);
 }

 FUNC_2(VAR_7);
}
