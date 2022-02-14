
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct cache_index_dir {TYPE_1__* cache; } ;
struct TYPE_2__ {int level; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct cache_index_dir*) ;
 struct cache_index_dir* FUNC_2 (struct kobject*) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct kobject *VAR_0)
{
 struct cache_index_dir *VAR_1;

 VAR_1 = FUNC_2(VAR_0);

 FUNC_3("freeing index directory for L%d %s cache\n",
   VAR_1->cache->level, FUNC_0(VAR_1->cache));

 FUNC_1(VAR_1);
}
