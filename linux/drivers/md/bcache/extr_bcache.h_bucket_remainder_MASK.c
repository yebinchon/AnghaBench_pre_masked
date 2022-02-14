
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bucket_size; } ;
struct cache_set {TYPE_1__ sb; } ;
typedef int sector_t ;



__attribute__((used)) static inline sector_t FUNC_0(struct cache_set *VAR_0, sector_t VAR_1)
{
 return VAR_1 & (VAR_0->sb.bucket_size - 1);
}
