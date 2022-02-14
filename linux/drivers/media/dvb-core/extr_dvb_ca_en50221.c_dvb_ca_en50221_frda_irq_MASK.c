
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_ca_slot {int slot_state; int da_irq_supported; } ;
struct dvb_ca_private {int open; TYPE_1__* pub; struct dvb_ca_slot* slot_info; } ;
struct dvb_ca_en50221 {struct dvb_ca_private* private; } ;
struct TYPE_2__ {int (* read_cam_control ) (struct dvb_ca_en50221*,int,int ) ;} ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct dvb_ca_private*) ;
 int FUNC_2 (struct dvb_ca_en50221*,int,int ) ;

void FUNC_3(struct dvb_ca_en50221 *VAR_2, int VAR_3)
{
 struct dvb_ca_private *VAR_4 = VAR_2->private;
 struct dvb_ca_slot *VAR_5 = &VAR_4->slot_info[VAR_3];
 int VAR_6;

 FUNC_0("FR/DA IRQ slot:%i\n", VAR_3);

 switch (VAR_5->slot_state) {
 case 129:
  VAR_6 = VAR_4->pub->read_cam_control(VAR_2, VAR_3, VAR_0);
  if (VAR_6 & VAR_1) {
   FUNC_0("CAM supports DA IRQ\n");
   VAR_5->da_irq_supported = 1;
  }
  break;

 case 128:
  if (VAR_4->open)
   FUNC_1(VAR_4);
  break;
 }
}
