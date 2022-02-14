
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_gpio {struct palmas* palmas; } ;
struct palmas {int dummy; } ;
struct gpio_chip {int parent; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (int ,char*,unsigned int,int) ;
 struct palmas_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (struct palmas*,int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_7, unsigned VAR_8)
{
 struct palmas_gpio *VAR_9 = FUNC_2(VAR_7);
 struct palmas *VAR_10 = VAR_9->palmas;
 unsigned int VAR_11;
 int VAR_12;
 unsigned int VAR_13;
 int VAR_14 = (VAR_8/8);

 VAR_8 %= 8;
 VAR_13 = (VAR_14) ? VAR_2 : VAR_1;

 VAR_12 = FUNC_3(VAR_10, VAR_0, VAR_13, &VAR_11);
 if (VAR_12 < 0) {
  FUNC_1(VAR_7->parent, "Reg 0x%02x read failed, %d\n", VAR_13, VAR_12);
  return VAR_12;
 }

 if (VAR_11 & FUNC_0(VAR_8))
  VAR_13 = (VAR_14) ? VAR_6 : VAR_5;
 else
  VAR_13 = (VAR_14) ? VAR_4 : VAR_3;

 VAR_12 = FUNC_3(VAR_10, VAR_0, VAR_13, &VAR_11);
 if (VAR_12 < 0) {
  FUNC_1(VAR_7->parent, "Reg 0x%02x read failed, %d\n", VAR_13, VAR_12);
  return VAR_12;
 }
 return !!(VAR_11 & FUNC_0(VAR_8));
}
