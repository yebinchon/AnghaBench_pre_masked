
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vprbrd_gpioa_msg {int clk; unsigned int offset; int t1; int t2; int invert; int pwmlevel; int outval; int risefall; int answer; int __fill; int cmd; } ;
struct vprbrd_gpio {int gpioa_out; int gpioa_val; struct vprbrd* vb; } ;
struct vprbrd {int lock; int usb_dev; scalar_t__ buf; } ;
struct gpio_chip {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct vprbrd_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int ,int,int,struct vprbrd_gpioa_msg*,int,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct gpio_chip *VAR_4,
  unsigned int VAR_5, int VAR_6)
{
 int VAR_7;
 struct vprbrd_gpio *VAR_8 = FUNC_1(VAR_4);
 struct vprbrd *VAR_9 = VAR_8->vb;
 struct vprbrd_gpioa_msg *VAR_10 = (struct vprbrd_gpioa_msg *)VAR_9->buf;

 if (VAR_8->gpioa_out & (1 << VAR_5)) {
  if (VAR_6)
   VAR_8->gpioa_val |= (1 << VAR_5);
  else
   VAR_8->gpioa_val &= ~(1 << VAR_5);

  FUNC_2(&VAR_9->lock);

  VAR_10->cmd = VAR_0;
  VAR_10->clk = 0x00;
  VAR_10->offset = VAR_5;
  VAR_10->t1 = 0x00;
  VAR_10->t2 = 0x00;
  VAR_10->invert = 0x00;
  VAR_10->pwmlevel = 0x00;
  VAR_10->outval = VAR_6;
  VAR_10->risefall = 0x00;
  VAR_10->answer = 0x00;
  VAR_10->__fill = 0x00;

  VAR_7 = FUNC_4(VAR_9->usb_dev,
   FUNC_5(VAR_9->usb_dev, 0),
   VAR_1, VAR_3,
   0x0000, 0x0000, VAR_10,
   sizeof(struct vprbrd_gpioa_msg), VAR_2);

  FUNC_3(&VAR_9->lock);

  if (VAR_7 != sizeof(struct vprbrd_gpioa_msg))
   FUNC_0(VAR_4->parent, "usb error setting pin value\n");
 }
}
