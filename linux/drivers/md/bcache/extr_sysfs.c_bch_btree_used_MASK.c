
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key_bytes; scalar_t__ nodes; } ;
struct cache_set {TYPE_1__ gc_stats; } ;


 int FUNC_0 (struct cache_set*) ;
 unsigned int FUNC_1 (int,int) ;

__attribute__((used)) static unsigned int FUNC_2(struct cache_set *VAR_0)
{
 return FUNC_1(VAR_0->gc_stats.key_bytes * 100,
    (VAR_0->gc_stats.nodes ?: 1) * FUNC_0(VAR_0));
}
