
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bucket_size; } ;
struct cache_set {int nbuckets; TYPE_1__ sb; int sectors_to_gc; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline void FUNC_1(struct cache_set *VAR_0)
{
 FUNC_0(&VAR_0->sectors_to_gc, VAR_0->sb.bucket_size * VAR_0->nbuckets / 16);
}
