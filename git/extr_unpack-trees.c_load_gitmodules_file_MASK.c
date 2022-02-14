
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {struct cache_entry** cache; } ;
struct checkout {int dummy; } ;
struct cache_entry {int ce_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cache_entry*,struct checkout*,int *,int *) ;
 int FUNC_1 (struct index_state*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(struct index_state *VAR_4,
     struct checkout *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_4, VAR_2, FUNC_3(VAR_2));

 if (VAR_6 >= 0) {
  struct cache_entry *VAR_7 = VAR_4->cache[VAR_6];
  if (!VAR_5 && VAR_7->ce_flags & VAR_1) {
   FUNC_2(VAR_3);
  } else if (VAR_5 && (VAR_7->ce_flags & VAR_0)) {
   FUNC_4(VAR_3);
   FUNC_0(VAR_7, VAR_5, ((void*)0), ((void*)0));
   FUNC_2(VAR_3);
  }
 }
}
