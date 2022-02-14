
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct aml_resource_small_header {int dummy; } ;
struct aml_resource_large_header {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (void*) ;
 int VAR_0 ;

u8 FUNC_2(void *VAR_1)
{
 FUNC_0();



 if (FUNC_1(VAR_1) & VAR_0) {
  return (sizeof(struct aml_resource_large_header));
 } else {
  return (sizeof(struct aml_resource_small_header));
 }
}
