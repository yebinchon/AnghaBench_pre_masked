
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bot_movestate_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;

int FUNC_1(void)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 <= VAR_0; VAR_2++)
 {
  if (!VAR_1[VAR_2])
  {
   VAR_1[VAR_2] = FUNC_0(sizeof(bot_movestate_t));
   return VAR_2;
  }
 }
 return 0;
}
