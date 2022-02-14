
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct index_state {TYPE_1__* cache_tree; } ;
struct TYPE_3__ {struct object_id oid; } ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct index_state*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct object_id *FUNC_5(struct index_state *VAR_0)
{
 if (!VAR_0->cache_tree)
  VAR_0->cache_tree = FUNC_1();

 if (!FUNC_2(VAR_0->cache_tree))
  if (FUNC_3(VAR_0, 0)) {
   FUNC_4(FUNC_0("unable to update cache tree"));
   return ((void*)0);
  }

 return &VAR_0->cache_tree->oid;
}
