
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vprbrd_gpiob_msg {void* mask; void* val; int cmd; } ;
struct vprbrd_gpio {int gpiob_out; int gpiob_val; struct vprbrd* vb; } ;
struct vprbrd {int lock; int usb_dev; scalar_t__ buf; } ;
struct gpio_chip {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 struct vprbrd_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,int ,int,int,struct vprbrd_gpiob_msg*,int,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct gpio_chip *VAR_4,
  unsigned int VAR_5, int VAR_6)
{
 int VAR_7;
 struct vprbrd_gpio *VAR_8 = FUNC_2(VAR_4);
 struct vprbrd *VAR_9 = VAR_8->vb;
 struct vprbrd_gpiob_msg *VAR_10 = (struct vprbrd_gpiob_msg *)VAR_9->buf;

 if (VAR_8->gpiob_out & (1 << VAR_5)) {
  if (VAR_6)
   VAR_8->gpiob_val |= (1 << VAR_5);
  else
   VAR_8->gpiob_val &= ~(1 << VAR_5);

  FUNC_3(&VAR_9->lock);

  VAR_10->cmd = VAR_0;
  VAR_10->val = FUNC_0(VAR_6 << VAR_5);
  VAR_10->mask = FUNC_0(0x0001 << VAR_5);

  VAR_7 = FUNC_5(VAR_9->usb_dev,
   FUNC_6(VAR_9->usb_dev, 0),
   VAR_1, VAR_3,
   0x0000, 0x0000, VAR_10,
   sizeof(struct vprbrd_gpiob_msg), VAR_2);

  FUNC_4(&VAR_9->lock);

  if (VAR_7 != sizeof(struct vprbrd_gpiob_msg))
   FUNC_1(VAR_4->parent, "usb error setting pin value\n");
 }
}
