
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct table_info {int dummy; } ;
struct chash_cfg {int items4; int size4; int items6; int size6; } ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, struct table_info *VAR_1, uint32_t VAR_2,
    uint64_t *VAR_3)
{
 struct chash_cfg *VAR_4;
 uint64_t VAR_5;







 VAR_4 = (struct chash_cfg *)VAR_0;

 VAR_5 = 0;
 if (VAR_4->items4 > VAR_4->size4 && VAR_4->size4 < 65536)
  VAR_5 |= (VAR_4->size4 * 2) << 16;
 if (VAR_4->items6 > VAR_4->size6 && VAR_4->size6 < 65536)
  VAR_5 |= VAR_4->size6 * 2;

 if (VAR_5 != 0) {
  *VAR_3 = VAR_5;
  return (1);
 }

 return (0);
}
