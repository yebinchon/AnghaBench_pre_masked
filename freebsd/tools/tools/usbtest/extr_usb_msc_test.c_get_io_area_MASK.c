
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_msc_params {int io_area; } ;







__attribute__((used)) static const char *
FUNC_0(const struct usb_msc_params *VAR_0)
{
 ;
 switch (VAR_0->io_area) {
 case 128:
  return ("Complete Disk");
 case 130:
  return ("First MegaByte");
 case 131:
  return ("First 16 MegaBytes");
 case 129:
  return ("First 256 MegaBytes");
 default:
  return ("Unknown");
 }
}
