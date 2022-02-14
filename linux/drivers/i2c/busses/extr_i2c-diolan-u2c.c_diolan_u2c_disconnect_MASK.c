
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct i2c_diolan_u2c {int adapter; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_diolan_u2c*) ;
 int FUNC_2 (int *) ;
 struct i2c_diolan_u2c* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_5(struct usb_interface *VAR_0)
{
 struct i2c_diolan_u2c *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(&VAR_1->adapter);
 FUNC_4(VAR_0, ((void*)0));
 FUNC_1(VAR_1);

 FUNC_0(&VAR_0->dev, "disconnected\n");
}
