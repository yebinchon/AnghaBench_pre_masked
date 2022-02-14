
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_index_dir {struct cache_index_dir* next; int kobj; struct cache* cache; } ;
struct cache_dir {struct cache_index_dir* index; int kobj; } ;
struct cache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cache_index_dir*) ;
 int FUNC_1 (int *,int *,int ,char*,int) ;
 int FUNC_2 (int *) ;
 struct cache_index_dir* FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct cache *VAR_2, int VAR_3,
           struct cache_dir *VAR_4)
{
 struct cache_index_dir *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return;

 VAR_5->cache = VAR_2;

 VAR_6 = FUNC_1(&VAR_5->kobj, &VAR_1,
      VAR_4->kobj, "index%d", VAR_3);
 if (VAR_6) {
  FUNC_2(&VAR_5->kobj);
  return;
 }

 VAR_5->next = VAR_4->index;
 VAR_4->index = VAR_5;

 FUNC_0(VAR_5);
}
