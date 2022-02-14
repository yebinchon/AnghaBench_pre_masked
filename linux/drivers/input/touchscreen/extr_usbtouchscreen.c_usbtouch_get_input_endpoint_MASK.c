
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 scalar_t__ FUNC_0 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static struct usb_endpoint_descriptor *
FUNC_1(struct usb_host_interface *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->desc.bNumEndpoints; VAR_1++)
  if (FUNC_0(&VAR_0->endpoint[VAR_1].desc))
   return &VAR_0->endpoint[VAR_1].desc;

 return ((void*)0);
}
