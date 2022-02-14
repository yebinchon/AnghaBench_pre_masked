
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct index_state {TYPE_1__* cache_tree; } ;
struct cache_tree {int oid; } ;
struct TYPE_4__ {int oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 struct cache_tree* FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__**) ;
 scalar_t__ FUNC_3 (struct index_state*,int) ;
 int FUNC_4 (struct object_id*,int *) ;

__attribute__((used)) static int FUNC_5(struct object_id *VAR_3,
     struct index_state *VAR_4,
     int VAR_5,
     int VAR_6,
     const char *VAR_7)
{
 if (VAR_6 & VAR_0) {
  FUNC_2(&VAR_4->cache_tree);
  VAR_5 = 0;
 }

 if (!VAR_4->cache_tree)
  VAR_4->cache_tree = FUNC_0();

 if (!VAR_5 && FUNC_3(VAR_4, VAR_6) < 0)
  return VAR_2;

 if (VAR_7) {
  struct cache_tree *VAR_8;
  VAR_8 = FUNC_1(VAR_4->cache_tree, VAR_7);
  if (!VAR_8)
   return VAR_1;
  FUNC_4(VAR_3, &VAR_8->oid);
 }
 else
  FUNC_4(VAR_3, &VAR_4->cache_tree->oid);

 return 0;
}
