
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 struct gpio_desc* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (struct gpio_desc*,int) ;
 int FUNC_4 (struct gpio_desc*,unsigned long) ;
 int FUNC_5 (struct gpio_desc*) ;
 int FUNC_6 (struct gpio_desc*,char const*) ;
 int FUNC_7 (int ,int *) ;

int FUNC_8(unsigned VAR_11, unsigned long VAR_12, const char *VAR_13)
{
 struct gpio_desc *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_1(VAR_11);


 if (!VAR_14 && FUNC_0(VAR_11))
  return -VAR_0;

 VAR_15 = FUNC_6(VAR_14, VAR_13);
 if (VAR_15)
  return VAR_15;

 if (VAR_12 & VAR_9)
  FUNC_7(VAR_2, &VAR_14->flags);

 if (VAR_12 & VAR_10)
  FUNC_7(VAR_3, &VAR_14->flags);

 if (VAR_12 & VAR_4)
  FUNC_7(VAR_1, &VAR_14->flags);

 if (VAR_12 & VAR_5)
  VAR_15 = FUNC_2(VAR_14);
 else
  VAR_15 = FUNC_3(VAR_14,
    (VAR_12 & VAR_8) ? 1 : 0);

 if (VAR_15)
  goto free_gpio;

 if (VAR_12 & VAR_6) {
  VAR_15 = FUNC_4(VAR_14, VAR_12 & VAR_7);
  if (VAR_15)
   goto free_gpio;
 }

 return 0;

 free_gpio:
 FUNC_5(VAR_14);
 return VAR_15;
}
