
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_keyspan {int* in_buffer; TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_2(struct usb_keyspan* VAR_1)
{
 char VAR_2[4 * VAR_0];
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_1(VAR_2 + VAR_3 * 3, 4, "%02x ", VAR_1->in_buffer[VAR_3]);

 FUNC_0(&VAR_1->udev->dev, "%s\n", VAR_2);
}
