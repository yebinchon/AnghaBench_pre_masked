
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct powermate_device {int configcr; int data_dma; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct usb_device *VAR_1, struct powermate_device *VAR_2)
{
 FUNC_1(VAR_1, VAR_0,
     VAR_2->data, VAR_2->data_dma);
 FUNC_0(VAR_2->configcr);
}
