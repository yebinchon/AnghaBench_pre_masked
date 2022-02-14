
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_device {int dummy; } ;
struct gtco {int buf_dma; int buffer; int urbinfo; int inputdevice; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct gtco*) ;
 int FUNC_4 (struct usb_device*,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 struct gtco* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_1)
{

 struct gtco *VAR_2 = FUNC_6(VAR_1);
 struct usb_device *VAR_3 = FUNC_2(VAR_1);


 if (VAR_2) {
  FUNC_1(VAR_2->inputdevice);
  FUNC_7(VAR_2->urbinfo);
  FUNC_5(VAR_2->urbinfo);
  FUNC_4(VAR_3, VAR_0,
      VAR_2->buffer, VAR_2->buf_dma);
  FUNC_3(VAR_2);
 }

 FUNC_0(&VAR_1->dev, "gtco driver disconnected\n");
}
