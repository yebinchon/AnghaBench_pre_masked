
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_msc_params {int io_pattern; } ;






__attribute__((used)) static const char *
FUNC_0(const struct usb_msc_params *VAR_0)
{
 ;
 switch (VAR_0->io_pattern) {
 case 130:
  return ("Fixed");
 case 128:
  return ("Random");
 case 129:
  return ("Preserve");
 default:
  return ("Unknown");
 }
}
