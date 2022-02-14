
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dir_hash; } ;
struct dir_entry {int namelen; struct dir_entry* parent; int ent; } ;
struct cache_entry {int * name; } ;


 int FUNC_0 (struct dir_entry*,int ,int *,int) ;
 struct dir_entry* FUNC_1 (struct index_state*,int *,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static struct dir_entry *FUNC_6(struct index_state *VAR_1,
  struct cache_entry *VAR_2, int VAR_3)
{







 struct dir_entry *VAR_4;


 while (VAR_3 > 0 && !FUNC_4(VAR_2->name[VAR_3 - 1]))
  VAR_3--;
 if (VAR_3 <= 0)
  return ((void*)0);
 VAR_3--;


 VAR_4 = FUNC_1(VAR_1, VAR_2->name, VAR_3);
 if (!VAR_4) {

  FUNC_0(VAR_4, VAR_0, VAR_2->name, VAR_3);
  FUNC_3(&VAR_4->ent, FUNC_5(VAR_2->name, VAR_3));
  VAR_4->namelen = VAR_3;
  FUNC_2(&VAR_1->dir_hash, &VAR_4->ent);


  VAR_4->parent = FUNC_6(VAR_1, VAR_2, VAR_3);
 }
 return VAR_4;
}
