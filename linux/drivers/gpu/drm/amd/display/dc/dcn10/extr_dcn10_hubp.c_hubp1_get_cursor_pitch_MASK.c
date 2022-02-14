
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cursor_pitch { ____Placeholder_cursor_pitch } cursor_pitch ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned int) ;

enum cursor_pitch FUNC_1(unsigned int VAR_3)
{
 enum cursor_pitch VAR_4;

 switch (VAR_3) {
 case 64:
  VAR_4 = VAR_2;
  break;
 case 128:
  VAR_4 = VAR_0;
  break;
 case 256:
  VAR_4 = VAR_1;
  break;
 default:
  FUNC_0("Invalid cursor pitch of %d. "
    "Only 64/128/256 is supported on DCN.\n", VAR_3);
  VAR_4 = VAR_2;
  break;
 }
 return VAR_4;
}
