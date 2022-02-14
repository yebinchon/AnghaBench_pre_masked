
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tca6416_keypad_chip {int reg_output; int reg_direction; int pinmask; int reg_input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tca6416_keypad_chip*,int ,int*) ;
 int FUNC_1 (struct tca6416_keypad_chip*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct tca6416_keypad_chip *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2, &VAR_3->reg_output);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0, &VAR_3->reg_direction);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_3, VAR_0,
      VAR_3->reg_direction | VAR_3->pinmask);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0, &VAR_3->reg_direction);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1, &VAR_3->reg_input);
 if (VAR_4)
  return VAR_4;

 VAR_3->reg_input &= VAR_3->pinmask;

 return 0;
}
