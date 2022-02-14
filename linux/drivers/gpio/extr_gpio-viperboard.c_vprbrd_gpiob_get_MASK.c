
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vprbrd_gpiob_msg {int val; } ;
struct vprbrd_gpio {int gpiob_out; int gpiob_val; struct vprbrd* vb; } ;
struct vprbrd {int lock; int usb_dev; scalar_t__ buf; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct vprbrd_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int ,int,int,struct vprbrd_gpiob_msg*,int,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_3,
  unsigned int VAR_4)
{
 int VAR_5;
 u16 VAR_6;
 struct vprbrd_gpio *VAR_7 = FUNC_1(VAR_3);
 struct vprbrd *VAR_8 = VAR_7->vb;
 struct vprbrd_gpiob_msg *VAR_9 = (struct vprbrd_gpiob_msg *)VAR_8->buf;


 if (VAR_7->gpiob_out & (1 << VAR_4))
  return VAR_7->gpiob_val & (1 << VAR_4);

 FUNC_2(&VAR_8->lock);

 VAR_5 = FUNC_4(VAR_8->usb_dev, FUNC_5(VAR_8->usb_dev, 0),
  VAR_0, VAR_2, 0x0000,
  0x0000, VAR_9, sizeof(struct vprbrd_gpiob_msg),
  VAR_1);
 VAR_6 = VAR_9->val;

 FUNC_3(&VAR_8->lock);

 if (VAR_5 != sizeof(struct vprbrd_gpiob_msg))
  return VAR_5;


 VAR_7->gpiob_val = FUNC_0(VAR_6);

 return (VAR_7->gpiob_val >> VAR_4) & 0x1;
}
