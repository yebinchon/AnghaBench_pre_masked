
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cyapa {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct cyapa *VAR_4,
  u8 *VAR_5, int VAR_6)
{
 if (VAR_6 != VAR_2)
  return 0;

 if (VAR_5[VAR_3] == VAR_0 ||
  VAR_5[VAR_3] == VAR_1)
  return 1;

 return 0;
}
