
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_diolan_u2c {TYPE_1__* interface; int ibuffer; int ep_in; int usb_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int ,int,int*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct i2c_diolan_u2c *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 10; VAR_2++) {
  int VAR_3 = 0;
  int VAR_4;

  VAR_4 = FUNC_1(VAR_1->usb_dev,
       FUNC_2(VAR_1->usb_dev, VAR_1->ep_in),
       VAR_1->ibuffer, sizeof(VAR_1->ibuffer), &VAR_3,
       VAR_0);
  if (VAR_4 < 0 || VAR_3 == 0)
   break;
 }
 if (VAR_2 == 10)
  FUNC_0(&VAR_1->interface->dev, "Failed to flush input buffer\n");
}
