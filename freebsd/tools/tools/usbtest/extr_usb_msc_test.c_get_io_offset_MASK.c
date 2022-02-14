
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_msc_params {int io_offset; } ;





__attribute__((used)) static const char *
FUNC_0(const struct usb_msc_params *VAR_0)
{
 ;
 switch (VAR_0->io_offset) {
 case 128:
  return ("Start Of Disk");
 case 129:
  return ("Random Offset");
 default:
  return ("Unknown");
 }
}
