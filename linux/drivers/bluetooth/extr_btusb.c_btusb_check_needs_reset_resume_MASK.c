
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_2__ {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_2(struct usb_interface *VAR_2)
{
 if (FUNC_0(VAR_1))
  FUNC_1(VAR_2)->quirks |= VAR_0;
}
