
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum cache_type { ____Placeholder_cache_type } cache_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (char*) ;

__attribute__((used)) static u8 FUNC_1(enum cache_type VAR_3)
{
 switch (VAR_3) {
 case 130:
  FUNC_0("Looking for data cache\n");
  return VAR_0;
 case 129:
  FUNC_0("Looking for instruction cache\n");
  return VAR_1;
 default:
 case 128:
  FUNC_0("Looking for unified cache\n");






  return VAR_2;
 }
}
