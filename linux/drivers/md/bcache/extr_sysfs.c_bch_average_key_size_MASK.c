
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nkeys; int data; } ;
struct cache_set {TYPE_1__ gc_stats; } ;


 unsigned int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct cache_set *VAR_0)
{
 return VAR_0->gc_stats.nkeys
  ? FUNC_0(VAR_0->gc_stats.data, VAR_0->gc_stats.nkeys)
  : 0;
}
