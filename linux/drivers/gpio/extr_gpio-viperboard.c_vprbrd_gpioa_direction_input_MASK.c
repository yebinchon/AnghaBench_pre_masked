
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vprbrd_gpioa_msg {unsigned int offset; int t1; int t2; int invert; int pwmlevel; int outval; int risefall; int answer; int __fill; int clk; int cmd; } ;
struct vprbrd_gpio {int gpioa_out; struct vprbrd* vb; } ;
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

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_6,
   unsigned int VAR_7)
{
 int VAR_8;
 struct vprbrd_gpio *VAR_9 = FUNC_0(VAR_6);
 struct vprbrd *VAR_10 = VAR_9->vb;
 struct vprbrd_gpioa_msg *VAR_11 = (struct vprbrd_gpioa_msg *)VAR_10->buf;

 VAR_9->gpioa_out &= ~(1 << VAR_7);

 FUNC_1(&VAR_10->lock);

 VAR_11->cmd = VAR_1;
 VAR_11->clk = VAR_5;
 VAR_11->offset = VAR_7;
 VAR_11->t1 = 0x00;
 VAR_11->t2 = 0x00;
 VAR_11->invert = 0x00;
 VAR_11->pwmlevel = 0x00;
 VAR_11->outval = 0x00;
 VAR_11->risefall = 0x00;
 VAR_11->answer = 0x00;
 VAR_11->__fill = 0x00;

 VAR_8 = FUNC_3(VAR_10->usb_dev, FUNC_4(VAR_10->usb_dev, 0),
  VAR_2, VAR_4, 0x0000,
  0x0000, VAR_11, sizeof(struct vprbrd_gpioa_msg),
  VAR_3);

 FUNC_2(&VAR_10->lock);

 if (VAR_8 != sizeof(struct vprbrd_gpioa_msg))
  return -VAR_0;

 return 0;
}
