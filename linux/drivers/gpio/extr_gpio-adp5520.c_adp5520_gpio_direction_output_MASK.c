
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct adp5520_gpio {int * lut; int master; int output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct adp5520_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_2,
  unsigned VAR_3, int VAR_4)
{
 struct adp5520_gpio *VAR_5;
 int VAR_6 = 0;
 VAR_5 = FUNC_2(VAR_2);

 FUNC_3(VAR_3, &VAR_5->output);

 if (VAR_4)
  VAR_6 |= FUNC_1(VAR_5->master, VAR_1,
     VAR_5->lut[VAR_3]);
 else
  VAR_6 |= FUNC_0(VAR_5->master, VAR_1,
     VAR_5->lut[VAR_3]);

 VAR_6 |= FUNC_1(VAR_5->master, VAR_0,
     VAR_5->lut[VAR_3]);

 return VAR_6;
}
