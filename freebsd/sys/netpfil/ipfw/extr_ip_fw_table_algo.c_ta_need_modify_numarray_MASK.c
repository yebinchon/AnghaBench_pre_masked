
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
typedef size_t uint32_t ;
struct table_info {int dummy; } ;
struct numarray_cfg {size_t size; size_t used; } ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, struct table_info *VAR_1, uint32_t VAR_2,
    uint64_t *VAR_3)
{
 struct numarray_cfg *VAR_4;
 size_t VAR_5;

 VAR_4 = (struct numarray_cfg *)VAR_0;

 VAR_5 = VAR_4->size;
 while (VAR_5 < VAR_4->used + VAR_2)
  VAR_5 *= 2;

 if (VAR_5 != VAR_4->size) {
  *VAR_3 = VAR_5;
  return (1);
 }

 return (0);
}
