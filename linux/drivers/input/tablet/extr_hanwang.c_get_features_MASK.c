
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int idProduct; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct hanwang {TYPE_2__* features; } ;
struct TYPE_5__ {scalar_t__ pid; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct usb_device *VAR_1, struct hanwang *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (FUNC_1(VAR_1->descriptor.idProduct) ==
    VAR_0[VAR_3].pid) {
   VAR_2->features = &VAR_0[VAR_3];
   return 1;
  }
 }

 return 0;
}
