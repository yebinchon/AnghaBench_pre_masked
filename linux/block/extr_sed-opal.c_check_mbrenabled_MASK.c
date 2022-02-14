
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct d0_locking_features {int supported_features; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const void *VAR_1)
{
 const struct d0_locking_features *VAR_2 = VAR_1;
 u8 VAR_3 = VAR_2->supported_features;

 return !!(VAR_3 & VAR_0);
}
