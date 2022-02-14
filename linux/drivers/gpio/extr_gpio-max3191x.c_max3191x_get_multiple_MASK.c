
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u8 ;
struct TYPE_2__ {scalar_t__ rx_buf; } ;
struct max3191x_chip {int lock; TYPE_1__ xfer; } ;
struct gpio_chip {int ngpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long*,int,int) ;
 struct max3191x_chip* FUNC_1 (struct gpio_chip*) ;
 scalar_t__ FUNC_2 (struct max3191x_chip*,unsigned int) ;
 int FUNC_3 (struct max3191x_chip*) ;
 int FUNC_4 (struct max3191x_chip*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 unsigned long FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct gpio_chip *VAR_3, unsigned long *VAR_4,
     unsigned long *VAR_5)
{
 struct max3191x_chip *VAR_6 = FUNC_1(VAR_3);
 int VAR_7, VAR_8 = 0, VAR_9 = FUNC_4(VAR_6);

 FUNC_5(&VAR_6->lock);
 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  goto out_unlock;

 while ((VAR_8 = FUNC_0(VAR_4, VAR_3->ngpio, VAR_8)) != VAR_3->ngpio) {
  unsigned int VAR_10 = VAR_8 / VAR_2;
  unsigned long VAR_11, VAR_12, VAR_13;

  if (FUNC_2(VAR_6, VAR_10)) {
   VAR_7 = -VAR_1;
   goto out_unlock;
  }

  VAR_11 = ((u8 *)VAR_6->xfer.rx_buf)[VAR_10 * VAR_9];
  VAR_12 = FUNC_7(VAR_8 % VAR_0, VAR_2);
  VAR_13 = VAR_8 / VAR_0;
  VAR_5[VAR_13] &= ~(VAR_4[VAR_13] & (0xff << VAR_12));
  VAR_5[VAR_13] |= VAR_4[VAR_13] & (VAR_11 << VAR_12);

  VAR_8 = (VAR_10 + 1) * VAR_2;
 }

out_unlock:
 FUNC_6(&VAR_6->lock);
 return VAR_7;
}
