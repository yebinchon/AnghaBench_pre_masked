
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adp5520_keys {int input; int * keycode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct adp5520_keys *VAR_1,
     unsigned short VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_2 & (1 << VAR_4))
   FUNC_0(VAR_1->input, VAR_1->keycode[VAR_4], VAR_3);

 FUNC_1(VAR_1->input);
}
