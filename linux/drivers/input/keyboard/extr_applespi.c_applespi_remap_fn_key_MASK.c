
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct keyboard_protocol {unsigned char fn_pressed; int modifiers; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct keyboard_protocol *VAR_2)
{
 unsigned char VAR_3;
 u8 VAR_4 = FUNC_1((VAR_1 - 1) & 0x07);

 if (!VAR_1 || VAR_1 > FUNC_0(VAR_0) ||
     !VAR_0[VAR_1 - 1])
  return;

 VAR_3 = VAR_2->fn_pressed;
 VAR_2->fn_pressed = !!(VAR_2->modifiers & VAR_4);
 if (VAR_3)
  VAR_2->modifiers |= VAR_4;
 else
  VAR_2->modifiers &= ~VAR_4;
}
