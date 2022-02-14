
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vprbrd_gpiob_msg {void* mask; void* val; int cmd; } ;
struct vprbrd {int usb_dev; scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,int,int,struct vprbrd_gpiob_msg*,int,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct vprbrd *VAR_5, unsigned int VAR_6,
 unsigned int VAR_7)
{
 struct vprbrd_gpiob_msg *VAR_8 = (struct vprbrd_gpiob_msg *)VAR_5->buf;
 int VAR_9;

 VAR_8->cmd = VAR_1;
 VAR_8->val = FUNC_0(VAR_7 << VAR_6);
 VAR_8->mask = FUNC_0(0x0001 << VAR_6);

 VAR_9 = FUNC_1(VAR_5->usb_dev, FUNC_2(VAR_5->usb_dev, 0),
  VAR_2, VAR_4, 0x0000,
  0x0000, VAR_8, sizeof(struct vprbrd_gpiob_msg),
  VAR_3);

 if (VAR_9 != sizeof(struct vprbrd_gpiob_msg))
  return -VAR_0;

 return 0;
}
