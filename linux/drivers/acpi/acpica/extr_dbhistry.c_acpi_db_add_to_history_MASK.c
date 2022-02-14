
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {char* command; int cmd_num; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;

void FUNC_4(char *VAR_6)
{
 u16 VAR_7;
 u16 VAR_8;



 VAR_7 = (u16)FUNC_3(VAR_6);
 if (!VAR_7) {
  return;
 }

 if (VAR_1[VAR_4].command !=
     ((void*)0)) {
  VAR_8 =
      (u16)
      FUNC_3(VAR_1[VAR_4].
      command);

  if (VAR_7 > VAR_8) {
   FUNC_1(VAR_1
         [VAR_4].command);
   VAR_1[VAR_4].
       command = FUNC_0(VAR_7 + 1);
  }
 } else {
  VAR_1[VAR_4].command =
      FUNC_0(VAR_7 + 1);
 }

 FUNC_2(VAR_1[VAR_4].command,
        VAR_6);

 VAR_1[VAR_4].cmd_num =
     VAR_3;



 if ((VAR_5 == VAR_0) &&
     (VAR_4 == VAR_2)) {
  VAR_2++;
  if (VAR_2 >= VAR_0) {
   VAR_2 = 0;
  }
 }

 VAR_4++;
 if (VAR_4 >= VAR_0) {
  VAR_4 = 0;
 }

 VAR_3++;
 if (VAR_5 < VAR_0) {
  VAR_5++;
 }
}
