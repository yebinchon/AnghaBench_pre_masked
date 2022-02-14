
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
 int FUNC_1 (int ,char*,unsigned int,int) ;
 struct palmas_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (struct palmas*,int ,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 struct palmas_gpio *VAR_5 = FUNC_2(VAR_3);
 struct palmas *VAR_6 = VAR_5->palmas;
 int VAR_7;
 unsigned int VAR_8;
 int VAR_9 = (VAR_4/8);

 VAR_4 %= 8;
 VAR_8 = (VAR_9) ? VAR_2 : VAR_1;

 VAR_7 = FUNC_3(VAR_6, VAR_0, VAR_8, FUNC_0(VAR_4), 0);
 if (VAR_7 < 0)
  FUNC_1(VAR_3->parent, "Reg 0x%02x update failed, %d\n", VAR_8,
   VAR_7);
 return VAR_7;
}
