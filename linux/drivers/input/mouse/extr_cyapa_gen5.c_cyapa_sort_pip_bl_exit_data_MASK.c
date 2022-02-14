
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cyapa {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static bool FUNC_0(struct cyapa *VAR_9, u8 *VAR_10, int VAR_11)
{
 if (VAR_10 == ((void*)0) || VAR_11 < VAR_4)
  return 0;

 if (VAR_10[0] == 0 && VAR_10[1] == 0)
  return 1;


 if (VAR_11 == VAR_0 &&
   VAR_10[VAR_5] ==
    VAR_1 &&
   VAR_10[VAR_7] == VAR_6 &&
   VAR_10[VAR_3] == VAR_8 &&
   VAR_10[10] == VAR_2)
  return 1;

 return 0;
}
