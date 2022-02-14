
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct namedobj_instance {int nv_size; } ;



__attribute__((used)) static uint32_t
FUNC_0(struct namedobj_instance *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = VAR_1 % (VAR_0->nv_size - 1);

 return (VAR_2);
}
