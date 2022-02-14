
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_gpio_platform_data {int mmc_cd; } ;
struct gpio_twl4030_priv {int mutex; int usage_count; } ;
struct gpio_chip {int parent; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct twl4030_gpio_platform_data* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct gpio_twl4030_priv* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int*,int) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static int FUNC_8(struct gpio_chip *VAR_12, unsigned VAR_13)
{
 struct gpio_twl4030_priv *VAR_14 = FUNC_3(VAR_12);
 int VAR_15 = 0;

 FUNC_4(&VAR_14->mutex);


 if (VAR_13 >= VAR_6) {
  u8 VAR_16 = VAR_1 | VAR_0
    | VAR_2 | VAR_3;
  u8 VAR_17 = VAR_9;

  VAR_13 -= VAR_6;
  if (VAR_13) {
   VAR_16 <<= 1;
   VAR_17 = VAR_10;
  }



  VAR_15 = FUNC_7(VAR_8, 0x7f, VAR_17 + 1);
  if (VAR_15 < 0)
   goto done;


  VAR_15 = FUNC_7(VAR_8, 0x7f, VAR_17);
  if (VAR_15 < 0)
   goto done;


  VAR_15 = FUNC_6(VAR_8, &VAR_11,
      VAR_7);
  if (VAR_15 < 0)
   goto done;
  VAR_11 &= ~VAR_16;
  VAR_15 = FUNC_7(VAR_8, VAR_11,
       VAR_7);
  if (VAR_15 < 0)
   goto done;

  VAR_15 = 0;
  goto done;
 }


 if (!VAR_14->usage_count) {
  struct twl4030_gpio_platform_data *VAR_18;
  u8 VAR_19 = VAR_4;




  VAR_18 = FUNC_1(VAR_12->parent);
  if (VAR_18)
   VAR_19 |= VAR_18->mmc_cd & 0x03;

  VAR_15 = FUNC_2(VAR_5, VAR_19);
 }

done:
 if (!VAR_15)
  VAR_14->usage_count |= FUNC_0(VAR_13);

 FUNC_5(&VAR_14->mutex);
 return VAR_15;
}
