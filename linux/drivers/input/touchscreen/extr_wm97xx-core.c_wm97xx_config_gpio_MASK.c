
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct wm97xx {int codec_mutex; } ;
typedef enum wm97xx_gpio_wake { ____Placeholder_wm97xx_gpio_wake } wm97xx_gpio_wake ;
typedef enum wm97xx_gpio_sticky { ____Placeholder_wm97xx_gpio_sticky } wm97xx_gpio_sticky ;
typedef enum wm97xx_gpio_pol { ____Placeholder_wm97xx_gpio_pol } wm97xx_gpio_pol ;
typedef enum wm97xx_gpio_dir { ____Placeholder_wm97xx_gpio_dir } wm97xx_gpio_dir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wm97xx*,int ) ;
 int FUNC_3 (struct wm97xx*,int ,int ) ;

void FUNC_4(struct wm97xx *VAR_8, u32 VAR_9, enum wm97xx_gpio_dir VAR_10,
     enum wm97xx_gpio_pol VAR_11, enum wm97xx_gpio_sticky VAR_12,
     enum wm97xx_gpio_wake VAR_13)
{
 u16 VAR_14;

 FUNC_0(&VAR_8->codec_mutex);
 VAR_14 = FUNC_2(VAR_8, VAR_1);

 if (VAR_11 == VAR_5)
  VAR_14 |= VAR_9;
 else
  VAR_14 &= ~VAR_9;

 FUNC_3(VAR_8, VAR_1, VAR_14);
 VAR_14 = FUNC_2(VAR_8, VAR_2);

 if (VAR_12 == VAR_6)
  VAR_14 |= VAR_9;
 else
  VAR_14 &= ~VAR_9;

 FUNC_3(VAR_8, VAR_2, VAR_14);
 VAR_14 = FUNC_2(VAR_8, VAR_3);

 if (VAR_13 == VAR_7)
  VAR_14 |= VAR_9;
 else
  VAR_14 &= ~VAR_9;

 FUNC_3(VAR_8, VAR_3, VAR_14);
 VAR_14 = FUNC_2(VAR_8, VAR_0);

 if (VAR_10 == VAR_4)
  VAR_14 |= VAR_9;
 else
  VAR_14 &= ~VAR_9;

 FUNC_3(VAR_8, VAR_0, VAR_14);
 FUNC_1(&VAR_8->codec_mutex);
}
