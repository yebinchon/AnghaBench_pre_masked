
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vector {int struct_size; } ;


 int FUNC_0 () ;
 void* FUNC_1 (struct vector const*,int ) ;
 int FUNC_2 (void*,void const*,int ) ;

void FUNC_3(
 const struct vector *VAR_0,
 const void *VAR_1,
 uint32_t VAR_2)
{
 void *VAR_3 = FUNC_1(VAR_0, VAR_2);

 if (!VAR_3) {
  FUNC_0();
  return;
 }
 FUNC_2(
  VAR_3,
  VAR_1,
  VAR_0->struct_size);
}
