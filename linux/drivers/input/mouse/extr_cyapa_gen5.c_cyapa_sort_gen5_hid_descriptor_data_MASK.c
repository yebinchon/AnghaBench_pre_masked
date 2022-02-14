
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cyapa {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct cyapa *VAR_7,
  u8 *VAR_8, int VAR_9)
{
 int VAR_10;
 int VAR_11;


 if (VAR_9 != VAR_4)
  return 0;

 VAR_10 = FUNC_0(&VAR_8[VAR_5]);
 VAR_11 = FUNC_0(&VAR_8[16]);
 if (VAR_10 == VAR_4) {
  if (VAR_8[VAR_6] == VAR_3 &&
    VAR_11 == VAR_1) {

   return 1;
  } else if ((VAR_8[VAR_6] ==
    VAR_2) &&
    VAR_11 == VAR_0) {

   return 1;
  }
 }

 return 0;
}
