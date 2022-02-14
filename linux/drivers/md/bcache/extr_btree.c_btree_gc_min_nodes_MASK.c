
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t nodes; } ;
struct cache_set {TYPE_1__ gc_stats; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static size_t FUNC_0(struct cache_set *VAR_2)
{
 size_t VAR_3;
 VAR_3 = VAR_2->gc_stats.nodes / VAR_0;
 if (VAR_3 < VAR_1)
  VAR_3 = VAR_1;

 return VAR_3;
}
