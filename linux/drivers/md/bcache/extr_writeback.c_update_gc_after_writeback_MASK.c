
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ in_use; } ;
struct cache_set {int gc_after_writeback; TYPE_1__ gc_stats; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct cache_set *VAR_3)
{
 if (VAR_3->gc_after_writeback != (VAR_2) ||
     VAR_3->gc_stats.in_use < VAR_0)
  return;

 VAR_3->gc_after_writeback |= VAR_1;
}
