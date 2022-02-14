
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vector {int capacity; int struct_size; void* container; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,int,int ) ;

bool FUNC_1(struct vector *VAR_1, uint32_t VAR_2)
{
 void *VAR_3;

 if (VAR_2 <= VAR_1->capacity)
  return 1;

 VAR_3 = FUNC_0(VAR_1->container,
     VAR_2 * VAR_1->struct_size, VAR_0);

 if (VAR_3) {
  VAR_1->container = VAR_3;
  VAR_1->capacity = VAR_2;
  return 1;
 }

 return 0;
}
