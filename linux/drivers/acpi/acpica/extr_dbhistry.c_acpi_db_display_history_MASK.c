
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct TYPE_2__ {scalar_t__ command; int cmd_num; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ,scalar_t__) ;

void FUNC_1(void)
{
 u32 VAR_4;
 u16 VAR_5;

 VAR_5 = VAR_2;



 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_1[VAR_5].command) {
   FUNC_0("%3u %s\n",
           VAR_1[VAR_5].
           cmd_num,
           VAR_1[VAR_5].
           command);
  }

  VAR_5++;
  if (VAR_5 >= VAR_0) {
   VAR_5 = 0;
  }
 }
}
