
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct devx_obj {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(int VAR_0, u16 *VAR_1,
       struct devx_obj *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2) {
   if (!FUNC_0(VAR_1[VAR_3]))
    return 0;
  } else if (!FUNC_1(
    VAR_1[VAR_3])) {
   return 0;
  }
 }

 return 1;
}
