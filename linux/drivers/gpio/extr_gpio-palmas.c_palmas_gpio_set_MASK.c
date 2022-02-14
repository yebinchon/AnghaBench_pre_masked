
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_gpio {struct palmas* palmas; } ;
struct palmas {int dummy; } ;
struct gpio_chip {int parent; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int ,char*,unsigned int,int) ;
 struct palmas_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (struct palmas*,int ,unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_5, unsigned VAR_6,
   int VAR_7)
{
 struct palmas_gpio *VAR_8 = FUNC_2(VAR_5);
 struct palmas *VAR_9 = VAR_8->palmas;
 int VAR_10;
 unsigned int VAR_11;
 int VAR_12 = (VAR_6/8);

 VAR_6 %= 8;
 if (VAR_12)
  VAR_11 = (VAR_7) ?
   VAR_4 : VAR_2;
 else
  VAR_11 = (VAR_7) ?
   VAR_3 : VAR_1;

 VAR_10 = FUNC_3(VAR_9, VAR_0, VAR_11, FUNC_0(VAR_6));
 if (VAR_10 < 0)
  FUNC_1(VAR_5->parent, "Reg 0x%02x write failed, %d\n", VAR_11, VAR_10);
}
