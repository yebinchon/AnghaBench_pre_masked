
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct index_state {int dummy; } ;
struct checkout {int refresh_cache; struct index_state* istate; } ;
struct cache_entry {int name; } ;


 struct checkout VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct cache_entry*,struct checkout*,int *,int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,struct stat*) ;

__attribute__((used)) static int FUNC_4(struct index_state *VAR_1,
      struct cache_entry *VAR_2, struct stat *VAR_3)
{
 struct checkout VAR_4 = VAR_0;

 VAR_4.refresh_cache = 1;
 VAR_4.istate = VAR_1;
 if (FUNC_1(VAR_2, &VAR_4, ((void*)0), ((void*)0)) ||
     FUNC_3(VAR_2->name, VAR_3))
  return FUNC_2(FUNC_0("cannot checkout %s"), VAR_2->name);
 return 0;
}
