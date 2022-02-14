
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {struct cache_entry** cache; } ;
struct cache_entry {int ce_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct index_state*,char const*,int ) ;
 int FUNC_1 (char const*) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (struct index_state*,char const*,int ) ;

__attribute__((used)) static void FUNC_4(struct index_state *VAR_2, const char *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2, VAR_3, FUNC_1(VAR_3));

 if (VAR_4 >= 0) {
  struct cache_entry *VAR_5 = VAR_2->cache[VAR_4];
  VAR_5->ce_flags &= ~VAR_0;
 }





 FUNC_2(&VAR_1, "fsmonitor_refresh_callback '%s'", VAR_3);
 FUNC_3(VAR_2, VAR_3, 0);
}
