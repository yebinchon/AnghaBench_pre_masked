
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct TYPE_2__ {scalar_t__ rx_buf; } ;
struct max3191x_chip {int lock; TYPE_1__ xfer; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct max3191x_chip* FUNC_0 (struct gpio_chip*) ;
 scalar_t__ FUNC_1 (struct max3191x_chip*,int) ;
 int FUNC_2 (struct max3191x_chip*) ;
 int FUNC_3 (struct max3191x_chip*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_2, unsigned int VAR_3)
{
 struct max3191x_chip *VAR_4 = FUNC_0(VAR_2);
 int VAR_5, VAR_6, VAR_7 = FUNC_3(VAR_4);
 u8 VAR_8;

 FUNC_4(&VAR_4->lock);
 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5)
  goto out_unlock;

 VAR_6 = VAR_3 / VAR_1;
 if (FUNC_1(VAR_4, VAR_6)) {
  VAR_5 = -VAR_0;
  goto out_unlock;
 }

 VAR_8 = ((u8 *)VAR_4->xfer.rx_buf)[VAR_6 * VAR_7];
 VAR_5 = (VAR_8 >> (VAR_3 % VAR_1)) & 1;

out_unlock:
 FUNC_5(&VAR_4->lock);
 return VAR_5;
}
