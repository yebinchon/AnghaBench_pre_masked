
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int __be64 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(char *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_2 == VAR_0) {
  for (VAR_3 = 0; VAR_3 < (VAR_2 / sizeof(u64)); VAR_3++)
   *((__be64 *)VAR_1 + VAR_3) =
    FUNC_1(*((u64 *)VAR_1 + VAR_3));
 } else {
  for (VAR_3 = 0; VAR_3 < (VAR_2 / sizeof(u32)); VAR_3++)
   *((__be32 *)VAR_1 + VAR_3) =
    FUNC_0(*((u32 *)VAR_1 + VAR_3));
 }
}
