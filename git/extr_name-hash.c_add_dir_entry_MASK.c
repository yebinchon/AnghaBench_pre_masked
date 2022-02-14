
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct dir_entry {struct dir_entry* parent; int nr; } ;
struct cache_entry {int dummy; } ;


 int FUNC_0 (struct cache_entry*) ;
 struct dir_entry* FUNC_1 (struct index_state*,struct cache_entry*,int ) ;

__attribute__((used)) static void FUNC_2(struct index_state *VAR_0, struct cache_entry *VAR_1)
{

 struct dir_entry *VAR_2 = FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_1));
 while (VAR_2 && !(VAR_2->nr++))
  VAR_2 = VAR_2->parent;
}
