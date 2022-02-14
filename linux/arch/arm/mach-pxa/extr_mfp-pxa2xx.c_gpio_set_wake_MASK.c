
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {unsigned long config; unsigned long mask; unsigned long mux_mask; scalar_t__ can_wakeup; scalar_t__ keypad_gpio; int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 struct gpio_desc* VAR_10 ;
 unsigned int FUNC_1 (int ) ;

int FUNC_2(unsigned int VAR_11, unsigned int VAR_12)
{
 struct gpio_desc *VAR_13;
 unsigned long VAR_14, VAR_15;

 if (VAR_11 > FUNC_1(VAR_5))
  return -VAR_1;

 VAR_13 = &VAR_10[VAR_11];
 VAR_14 = VAR_13->config;

 if (!VAR_13->valid)
  return -VAR_1;




 if (VAR_13->keypad_gpio && (FUNC_0(VAR_13->config) == 0) &&
     (VAR_13->config & VAR_2)) {
  if (VAR_12)
   VAR_7 |= VAR_13->mask;
  else
   VAR_7 &= ~VAR_13->mask;
  return 0;
 }

 VAR_15 = (VAR_9 & VAR_13->mux_mask) & (~VAR_13->mask);
 if (VAR_12 && VAR_15)
  return -VAR_0;

 if (VAR_13->can_wakeup && (VAR_14 & VAR_2)) {
  if (VAR_12) {
   VAR_9 = (VAR_9 & ~VAR_13->mux_mask) | VAR_13->mask;

   if (VAR_14 & VAR_4)
    VAR_8 |= VAR_13->mask;
   else
    VAR_8 &= ~VAR_13->mask;

   if (VAR_14 & VAR_3)
    VAR_6 |= VAR_13->mask;
   else
    VAR_6 &= ~VAR_13->mask;
  } else {
   VAR_9 &= ~VAR_13->mask;
   VAR_8 &= ~VAR_13->mask;
   VAR_6 &= ~VAR_13->mask;
  }
 }
 return 0;
}
