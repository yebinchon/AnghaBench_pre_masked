
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_region_hash {int prime; int shift; unsigned int mask; } ;
typedef int region_t ;



__attribute__((used)) static unsigned FUNC_0(struct dm_region_hash *VAR_0, region_t VAR_1)
{
 return (unsigned) ((VAR_1 * VAR_0->prime) >> VAR_0->shift) & VAR_0->mask;
}
