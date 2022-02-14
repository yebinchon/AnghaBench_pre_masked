
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_set {size_t bucket_bits; } ;
typedef size_t sector_t ;



__attribute__((used)) static inline size_t FUNC_0(struct cache_set *VAR_0, sector_t VAR_1)
{
 return VAR_1 >> VAR_0->bucket_bits;
}
