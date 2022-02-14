
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vprbrd_gpioa_msg {int clk; unsigned int offset; int t1; int t2; int invert; int pwmlevel; int outval; int risefall; int answer; int __fill; int cmd; } ;
struct vprbrd_gpio {int gpioa_out; int gpioa_val; struct vprbrd* vb; } ;
struct vprbrd {int lock; int usb_dev; scalar_t__ buf; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vprbrd_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ,int,int,struct vprbrd_gpioa_msg*,int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_6,
  unsigned int VAR_7)
{
 int VAR_8, VAR_9, VAR_10 = 0;
 struct vprbrd_gpio *VAR_11 = FUNC_0(VAR_6);
 struct vprbrd *VAR_12 = VAR_11->vb;
 struct vprbrd_gpioa_msg *VAR_13 = (struct vprbrd_gpioa_msg *)VAR_12->buf;


 if (VAR_11->gpioa_out & (1 << VAR_7))
  return !!(VAR_11->gpioa_val & (1 << VAR_7));

 FUNC_1(&VAR_12->lock);

 VAR_13->cmd = VAR_1;
 VAR_13->clk = 0x00;
 VAR_13->offset = VAR_7;
 VAR_13->t1 = 0x00;
 VAR_13->t2 = 0x00;
 VAR_13->invert = 0x00;
 VAR_13->pwmlevel = 0x00;
 VAR_13->outval = 0x00;
 VAR_13->risefall = 0x00;
 VAR_13->answer = 0x00;
 VAR_13->__fill = 0x00;

 VAR_8 = FUNC_3(VAR_12->usb_dev, FUNC_5(VAR_12->usb_dev, 0),
  VAR_2, VAR_5, 0x0000,
  0x0000, VAR_13, sizeof(struct vprbrd_gpioa_msg),
  VAR_3);
 if (VAR_8 != sizeof(struct vprbrd_gpioa_msg))
  VAR_10 = -VAR_0;

 VAR_8 = FUNC_3(VAR_12->usb_dev, FUNC_4(VAR_12->usb_dev, 0),
  VAR_2, VAR_4, 0x0000,
  0x0000, VAR_13, sizeof(struct vprbrd_gpioa_msg),
  VAR_3);
 VAR_9 = VAR_13->answer & 0x01;

 FUNC_2(&VAR_12->lock);

 if (VAR_8 != sizeof(struct vprbrd_gpioa_msg))
  VAR_10 = -VAR_0;

 if (VAR_10)
  return VAR_10;

 return VAR_9;
}
