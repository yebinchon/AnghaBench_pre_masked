
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct libusb_device_descriptor {scalar_t__ idProduct; scalar_t__ idVendor; } ;
struct TYPE_3__ {scalar_t__ product_id; scalar_t__ vendor_id; } ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(struct libusb_device_descriptor *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < (int) FUNC_1(VAR_0); VAR_2++) {
  if ((VAR_0[VAR_2].product_id == VAR_1->idProduct) &&
      (VAR_0[VAR_2].vendor_id == VAR_1->idVendor)) {
   FUNC_0("found 8260/8265");
   return (1);
  }
 }


 return (0);
}
