
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vector {void* container; int count; int struct_size; } ;



void *FUNC_0(
 const struct vector *VAR_0,
 uint32_t VAR_1)
{
 if (VAR_0->container == ((void*)0) || VAR_1 >= VAR_0->count)
  return ((void*)0);
 return VAR_0->container + (VAR_1 * VAR_0->struct_size);
}
