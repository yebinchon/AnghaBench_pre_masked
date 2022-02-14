
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct TYPE_2__ {scalar_t__ cmd_num; char* command; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,size_t) ;

char *FUNC_1(u32 VAR_4)
{
 u32 VAR_5;
 u16 VAR_6;



 VAR_6 = VAR_2;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_1[VAR_6].cmd_num == VAR_4) {



   return (VAR_1[VAR_6].command);
  }



  VAR_6++;
  if (VAR_6 >= VAR_0) {
   VAR_6 = 0;
  }
 }

 FUNC_0("Invalid history number: %u\n", VAR_6);
 return (((void*)0));
}
