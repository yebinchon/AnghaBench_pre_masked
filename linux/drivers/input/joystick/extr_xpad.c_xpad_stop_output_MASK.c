
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_xpad {scalar_t__ xtype; int irq_out_anchor; TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct usb_xpad *VAR_1)
{
 if (VAR_1->xtype != VAR_0) {
  if (!FUNC_2(&VAR_1->irq_out_anchor,
         5000)) {
   FUNC_0(&VAR_1->intf->dev,
     "timed out waiting for output URB to complete, killing\n");
   FUNC_1(&VAR_1->irq_out_anchor);
  }
 }
}
