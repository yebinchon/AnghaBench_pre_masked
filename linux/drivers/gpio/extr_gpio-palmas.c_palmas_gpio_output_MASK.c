
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
 int FUNC_3 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_4 (struct palmas*,int ,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_3, unsigned VAR_4,
    int VAR_5)
{
 struct palmas_gpio *VAR_6 = FUNC_2(VAR_3);
 struct palmas *VAR_7 = VAR_6->palmas;
 int VAR_8;
 unsigned int VAR_9;
 int VAR_10 = (VAR_4/8);

 VAR_4 %= 8;
 VAR_9 = (VAR_10) ? VAR_2 : VAR_1;


 FUNC_3(VAR_3, VAR_4, VAR_5);

 VAR_8 = FUNC_4(VAR_7, VAR_0, VAR_9,
    FUNC_0(VAR_4), FUNC_0(VAR_4));
 if (VAR_8 < 0)
  FUNC_1(VAR_3->parent, "Reg 0x%02x update failed, %d\n", VAR_9,
   VAR_8);
 return VAR_8;
}
