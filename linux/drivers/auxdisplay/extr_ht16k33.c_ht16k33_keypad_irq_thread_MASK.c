
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ht16k33_keypad {scalar_t__ stopped; int debounce_ms; int wait; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ht16k33_keypad*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct ht16k33_keypad *VAR_3 = VAR_2;

 do {
  FUNC_2(VAR_3->wait, VAR_3->stopped,
        FUNC_1(VAR_3->debounce_ms));
  if (VAR_3->stopped)
   break;
 } while (FUNC_0(VAR_3));

 return VAR_0;
}
