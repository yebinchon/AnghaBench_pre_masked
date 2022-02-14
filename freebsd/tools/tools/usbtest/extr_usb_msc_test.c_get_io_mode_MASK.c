
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_msc_params {int io_mode; } ;







__attribute__((used)) static const char *
FUNC_0(const struct usb_msc_params *VAR_0)
{
 ;
 switch (VAR_0->io_mode) {
 case 131:
  return ("Read Only");
 case 129:
  return ("Write Once, Read Only");
 case 128:
  return ("Write Only");
 case 130:
  return ("Read and Write");
 default:
  return ("Unknown");
 }
}
