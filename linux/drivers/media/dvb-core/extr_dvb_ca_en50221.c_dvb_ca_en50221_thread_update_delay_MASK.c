
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_ca_slot {int slot_state; int da_irq_supported; } ;
struct dvb_ca_private {int slot_count; int flags; int delay; int open; struct dvb_ca_slot* slot_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct dvb_ca_private *VAR_3)
{
 int VAR_4;
 int VAR_5 = 100000000;
 int VAR_6;





 for (VAR_6 = 0; VAR_6 < VAR_3->slot_count; VAR_6++) {
  struct dvb_ca_slot *VAR_7 = &VAR_3->slot_info[VAR_6];

  switch (VAR_7->slot_state) {
  default:
  case 133:
   VAR_4 = VAR_2 * 60;
   if (!(VAR_3->flags & VAR_0))
    VAR_4 = VAR_2 * 5;
   break;
  case 135:
   VAR_4 = VAR_2 * 60;
   if (!(VAR_3->flags & VAR_0))
    VAR_4 = VAR_2 / 10;
   break;

  case 131:
  case 128:
  case 130:
  case 129:
  case 134:
   VAR_4 = VAR_2 / 10;
   break;

  case 132:
   VAR_4 = VAR_2 * 60;
   if (!(VAR_3->flags & VAR_0))
    VAR_4 = VAR_2 / 10;
   if (VAR_3->open) {
    if ((!VAR_7->da_irq_supported) ||
        (!(VAR_3->flags & VAR_1)))
     VAR_4 = VAR_2 / 10;
   }
   break;
  }

  if (VAR_4 < VAR_5)
   VAR_5 = VAR_4;
 }

 VAR_3->delay = VAR_5;
}
