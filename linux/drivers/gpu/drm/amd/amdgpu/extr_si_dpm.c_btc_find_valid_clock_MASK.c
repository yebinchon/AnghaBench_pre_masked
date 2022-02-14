
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct amdgpu_clock_array {unsigned int count; scalar_t__* values; } ;



__attribute__((used)) static u32 FUNC_0(struct amdgpu_clock_array *VAR_0,
                  u32 VAR_1, u32 VAR_2)
{
 unsigned int VAR_3;

 if ((VAR_0 == ((void*)0)) || (VAR_0->count == 0))
  return (VAR_2 < VAR_1) ? VAR_2 : VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_0->count; VAR_3++) {
  if (VAR_0->values[VAR_3] >= VAR_2)
   return (VAR_0->values[VAR_3] < VAR_1) ? VAR_0->values[VAR_3] : VAR_1;
 }

 return (VAR_0->values[VAR_0->count - 1] < VAR_1) ?
  VAR_0->values[VAR_0->count - 1] : VAR_1;
}
