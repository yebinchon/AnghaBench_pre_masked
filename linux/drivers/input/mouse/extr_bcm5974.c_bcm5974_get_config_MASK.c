
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int idProduct; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct bcm5974_config {scalar_t__ ansi; scalar_t__ iso; scalar_t__ jis; } ;


 struct bcm5974_config const* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static const struct bcm5974_config *FUNC_1(struct usb_device *VAR_1)
{
 u16 VAR_2 = FUNC_0(VAR_1->descriptor.idProduct);
 const struct bcm5974_config *VAR_3;

 for (VAR_3 = VAR_0; VAR_3->ansi; ++VAR_3)
  if (VAR_3->ansi == VAR_2 || VAR_3->iso == VAR_2 || VAR_3->jis == VAR_2)
   return VAR_3;

 return VAR_0;
}
