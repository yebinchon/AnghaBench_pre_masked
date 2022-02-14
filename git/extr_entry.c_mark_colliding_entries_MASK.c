
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
struct checkout {TYPE_1__* istate; } ;
struct cache_entry {int ce_flags; int name; int ce_stat_data; } ;
struct TYPE_2__ {int cache_nr; struct cache_entry** cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct stat*) ;

__attribute__((used)) static void FUNC_2(const struct checkout *VAR_4,
       struct cache_entry *VAR_5, struct stat *VAR_6)
{
 int VAR_7, VAR_8 = VAR_3;





 VAR_5->ce_flags |= VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_4->istate->cache_nr; VAR_7++) {
  struct cache_entry *VAR_9 = VAR_4->istate->cache[VAR_7];

  if (VAR_9 == VAR_5)
   break;

  if (VAR_9->ce_flags & (VAR_0 | VAR_2 | VAR_1))
   continue;

  if ((VAR_8 && !FUNC_1(&VAR_9->ce_stat_data, VAR_6)) ||
      (!VAR_8 && !FUNC_0(VAR_5->name, VAR_9->name))) {
   VAR_9->ce_flags |= VAR_0;
   break;
  }
 }
}
