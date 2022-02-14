
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct table_info {int dummy; } ;
struct fhash_cfg {int items; int size; } ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, struct table_info *VAR_1, uint32_t VAR_2,
    uint64_t *VAR_3)
{
 struct fhash_cfg *VAR_4;

 VAR_4 = (struct fhash_cfg *)VAR_0;

 if (VAR_4->items > VAR_4->size && VAR_4->size < 65536) {
  *VAR_3 = VAR_4->size * 2;
  return (1);
 }

 return (0);
}
