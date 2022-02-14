
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stmpe_keypad_variant {int num_data; scalar_t__ auto_increment; } ;
struct stmpe_keypad {struct stmpe* stmpe; struct stmpe_keypad_variant* variant; } ;
struct stmpe {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct stmpe*,scalar_t__,int,int*) ;
 int FUNC_1 (struct stmpe*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct stmpe_keypad *VAR_1, u8 *VAR_2)
{
 const struct stmpe_keypad_variant *VAR_3 = VAR_1->variant;
 struct stmpe *VAR_4 = VAR_1->stmpe;
 int VAR_5;
 int VAR_6;

 if (VAR_3->auto_increment)
  return FUNC_0(VAR_4, VAR_0,
     VAR_3->num_data, VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_3->num_data; VAR_6++) {
  VAR_5 = FUNC_1(VAR_4, VAR_0 + VAR_6);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_2[VAR_6] = VAR_5;
 }

 return 0;
}
