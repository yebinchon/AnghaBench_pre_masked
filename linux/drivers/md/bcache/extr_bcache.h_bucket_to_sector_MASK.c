
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_set {int bucket_bits; } ;
typedef int sector_t ;



__attribute__((used)) static inline sector_t FUNC_0(struct cache_set *VAR_0, size_t VAR_1)
{
 return ((sector_t) VAR_1) << VAR_0->bucket_bits;
}
