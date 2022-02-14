
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct d0_tper_features {int supported_features; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static bool FUNC_1(const void *VAR_1)
{
 const struct d0_tper_features *VAR_2 = VAR_1;
 u8 VAR_3 = VAR_2->supported_features;

 if (!(VAR_3 & VAR_0)) {
  FUNC_0("TPer sync not supported. flags = %d\n",
    VAR_2->supported_features);
  return 0;
 }

 return 1;
}
