
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dir_hash; } ;
struct dir_entry {int ent; struct dir_entry* parent; int nr; } ;
struct cache_entry {int dummy; } ;


 int FUNC_0 (struct cache_entry*) ;
 int FUNC_1 (struct dir_entry*) ;
 struct dir_entry* FUNC_2 (struct index_state*,struct cache_entry*,int ) ;
 int FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_4(struct index_state *VAR_0, struct cache_entry *VAR_1)
{




 struct dir_entry *VAR_2 = FUNC_2(VAR_0, VAR_1, FUNC_0(VAR_1));
 while (VAR_2 && !(--VAR_2->nr)) {
  struct dir_entry *VAR_3 = VAR_2->parent;
  FUNC_3(&VAR_0->dir_hash, &VAR_2->ent, ((void*)0));
  FUNC_1(VAR_2);
  VAR_2 = VAR_3;
 }
}
