
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pxa27x_keypad_platform_data {scalar_t__ enable_rotary1; scalar_t__ enable_rotary0; } ;
struct pxa27x_keypad {struct pxa27x_keypad_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pxa27x_keypad*,int,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct pxa27x_keypad *VAR_2)
{
 const struct pxa27x_keypad_platform_data *VAR_3 = VAR_2->pdata;
 uint32_t VAR_4;


 VAR_4 = FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_0);

 if (VAR_3->enable_rotary0)
  FUNC_2(VAR_2, 0, FUNC_3(VAR_4));

 if (VAR_3->enable_rotary1)
  FUNC_2(VAR_2, 1, FUNC_3(VAR_4 >> 16));
}
