
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65218_gpio {struct tps65218* tps65218; } ;
struct tps65218 {int dummy; } ;
struct gpio_chip {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 struct tps65218_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct gpio_chip*,unsigned int) ;
 scalar_t__ FUNC_3 (struct gpio_chip*,unsigned int) ;
 int FUNC_4 (struct tps65218*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_9, unsigned VAR_10)
{
 struct tps65218_gpio *VAR_11 = FUNC_1(VAR_9);
 struct tps65218 *VAR_12 = VAR_11->tps65218;
 int VAR_13;

 if (FUNC_3(VAR_9, VAR_10)) {
  FUNC_0(VAR_9->parent, "can't work as open source\n");
  return -VAR_0;
 }

 switch (VAR_10) {
 case 0:
  if (!FUNC_2(VAR_9, VAR_10)) {
   FUNC_0(VAR_9->parent, "GPO1 works only as open drain\n");
   return -VAR_0;
  }


  VAR_13 = FUNC_4(VAR_12, VAR_6,
       VAR_7,
       VAR_3);
  if (VAR_13)
   return VAR_13;


  VAR_13 = FUNC_4(VAR_12, VAR_4,
       VAR_1,
       VAR_3);
  if (VAR_13)
   return VAR_13;

  break;
 case 1:

  VAR_13 = FUNC_4(VAR_12, VAR_4,
       VAR_1,
       VAR_3);
  if (VAR_13)
   return VAR_13;

  break;

 case 2:
  if (!FUNC_2(VAR_9, VAR_10)) {
   FUNC_0(VAR_9->parent, "GPO3 works only as open drain\n");
   return -VAR_0;
  }


  VAR_13 = FUNC_4(VAR_12, VAR_6,
       VAR_8,
       VAR_3);
  if (VAR_13)
   return VAR_13;


  VAR_13 = FUNC_4(VAR_12, VAR_5,
       VAR_2,
       VAR_3);
  if (VAR_13)
   return VAR_13;

  break;
 default:
  return -VAR_0;
 }

 return 0;
}
