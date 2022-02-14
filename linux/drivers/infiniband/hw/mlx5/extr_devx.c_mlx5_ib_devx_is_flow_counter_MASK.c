
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef scalar_t__ u16 ;
struct devx_obj {int dinbox; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

bool FUNC_1(void *VAR_5, u32 *VAR_6)
{
 struct devx_obj *VAR_7 = VAR_5;
 u16 VAR_8 = FUNC_0(VAR_3, VAR_7->dinbox, VAR_8);

 if (VAR_8 == VAR_0) {
  *VAR_6 = FUNC_0(VAR_1,
           VAR_7->dinbox,
           VAR_2);
  return 1;
 }

 return 0;
}
