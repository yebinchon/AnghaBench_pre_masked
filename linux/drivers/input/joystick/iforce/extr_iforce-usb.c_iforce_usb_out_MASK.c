
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; struct iforce_usb* context; } ;
struct iforce {int wait; int xmit_flags; } ;
struct iforce_usb {TYPE_1__* intf; struct iforce iforce; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct iforce*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_1)
{
 struct iforce_usb *VAR_2 = VAR_1->context;
 struct iforce *VAR_3 = &VAR_2->iforce;

 if (VAR_1->status) {
  FUNC_1(VAR_0, VAR_3->xmit_flags);
  FUNC_2(&VAR_2->intf->dev, "urb->status %d, exiting\n",
   VAR_1->status);
  return;
 }

 FUNC_0(VAR_3);

 FUNC_3(&VAR_3->wait);
}
