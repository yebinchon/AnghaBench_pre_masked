
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ u_long ;
typedef size_t u_int ;
struct tte {int dummy; } ;
typedef scalar_t__ pmap_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct tte* FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct tte* FUNC_3 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct tte*,int ) ;

struct tte *
FUNC_5(pmap_t VAR_7, vm_offset_t VAR_8)
{
 struct tte *VAR_9;
 struct tte *VAR_10;
 u_long VAR_11;
 u_int VAR_12;

 if (VAR_7 == VAR_4) {
  FUNC_1(VAR_5);
  VAR_10 = FUNC_2(VAR_8);
  if (FUNC_4(VAR_10, VAR_8))
   return (VAR_10);
 } else {
  FUNC_0(VAR_7, VAR_0);
  FUNC_1(VAR_6);
  for (VAR_11 = VAR_3; VAR_11 <= VAR_2; VAR_11++) {
   VAR_9 = FUNC_3(VAR_7, VAR_11, VAR_8);
   for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
    VAR_10 = &VAR_9[VAR_12];
    if (FUNC_4(VAR_10, VAR_8))
     return (VAR_10);
   }
  }
 }
 return (((void*)0));
}
