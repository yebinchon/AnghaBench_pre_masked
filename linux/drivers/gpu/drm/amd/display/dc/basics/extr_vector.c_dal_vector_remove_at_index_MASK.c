
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vector {int count; int struct_size; scalar_t__ container; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;

bool FUNC_1(
 struct vector *VAR_0,
 uint32_t VAR_1)
{
 if (VAR_1 >= VAR_0->count)
  return 0;

 if (VAR_1 != VAR_0->count - 1)
  FUNC_0(
   VAR_0->container + (VAR_1 * VAR_0->struct_size),
   VAR_0->container + ((VAR_1 + 1) * VAR_0->struct_size),
   (VAR_0->count - VAR_1 - 1) * VAR_0->struct_size);
 VAR_0->count -= 1;

 return 1;
}
