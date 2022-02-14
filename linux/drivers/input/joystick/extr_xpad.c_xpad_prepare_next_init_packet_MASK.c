
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xboxone_init_packet {scalar_t__ idVendor; scalar_t__ idProduct; int len; int data; } ;
struct usb_xpad {scalar_t__ xtype; scalar_t__ init_seq; int odata_serial; scalar_t__* odata; TYPE_3__* irq_out; TYPE_2__* dev; } ;
struct TYPE_6__ {int transfer_buffer_length; } ;
struct TYPE_4__ {scalar_t__ vendor; scalar_t__ product; } ;
struct TYPE_5__ {TYPE_1__ id; } ;


 scalar_t__ FUNC_0 (struct xboxone_init_packet*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__*,int ,int ) ;
 struct xboxone_init_packet* VAR_1 ;

__attribute__((used)) static bool FUNC_2(struct usb_xpad *VAR_2)
{
 const struct xboxone_init_packet *VAR_3;

 if (VAR_2->xtype != VAR_0)
  return 0;


 while (VAR_2->init_seq < FUNC_0(VAR_1)) {
  VAR_3 = &VAR_1[VAR_2->init_seq++];

  if (VAR_3->idVendor != 0 &&
      VAR_3->idVendor != VAR_2->dev->id.vendor)
   continue;

  if (VAR_3->idProduct != 0 &&
      VAR_3->idProduct != VAR_2->dev->id.product)
   continue;


  FUNC_1(VAR_2->odata, VAR_3->data, VAR_3->len);
  VAR_2->irq_out->transfer_buffer_length = VAR_3->len;


  VAR_2->odata[2] = VAR_2->odata_serial++;
  return 1;
 }

 return 0;
}
