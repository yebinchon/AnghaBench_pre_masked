
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cyapa {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;

bool FUNC_0(struct cyapa *VAR_7,
  u8 *VAR_8, int VAR_9)
{
 if (!VAR_8 || VAR_9 < VAR_1)
  return 0;


 if (VAR_8[VAR_3] == VAR_0 &&
   VAR_8[VAR_5] == VAR_4 &&
   VAR_8[VAR_2] == VAR_6)
  return 1;

 return 0;
}
