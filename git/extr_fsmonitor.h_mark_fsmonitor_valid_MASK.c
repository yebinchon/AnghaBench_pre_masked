
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_changed; } ;
struct cache_entry {int ce_flags; int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct index_state *VAR_3, struct cache_entry *VAR_4)
{
 if (VAR_1 && !(VAR_4->ce_flags & VAR_0)) {
  VAR_3->cache_changed = 1;
  VAR_4->ce_flags |= VAR_0;
  FUNC_0(&VAR_2, "mark_fsmonitor_clean '%s'", VAR_4->name);
 }
}
