
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void const uint8_t ;
typedef int uint32_t ;
struct vector {int count; int capacity; void* container; int struct_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vector*,int ) ;
 int FUNC_2 (void const*,void const*,int) ;

bool FUNC_3(
 struct vector *VAR_0,
 const void *VAR_1,
 uint32_t VAR_2)
{
 uint8_t *VAR_3;

 if (VAR_0->count == VAR_0->capacity) {
  if (!FUNC_1(
   VAR_0,
   FUNC_0(VAR_0->capacity)))
   return 0;
 }

 VAR_3 = VAR_0->container + (VAR_0->struct_size * VAR_2);

 if (VAR_0->count && VAR_2 < VAR_0->count)
  FUNC_2(
   VAR_3 + VAR_0->struct_size,
   VAR_3,
   VAR_0->struct_size * (VAR_0->count - VAR_2));

 FUNC_2(
  VAR_3,
  VAR_1,
  VAR_0->struct_size);

 VAR_0->count++;

 return 1;
}
