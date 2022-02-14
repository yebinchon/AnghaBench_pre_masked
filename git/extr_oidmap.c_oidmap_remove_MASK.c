
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmpfn; } ;
struct oidmap {TYPE_1__ map; } ;
struct object_id {int dummy; } ;
struct hashmap_entry {int dummy; } ;


 int FUNC_0 (struct hashmap_entry*,int ) ;
 void* FUNC_1 (TYPE_1__*,struct hashmap_entry*,struct object_id const*) ;
 int FUNC_2 (struct object_id const*) ;
 int FUNC_3 (struct oidmap*,int ) ;

void *FUNC_4(struct oidmap *VAR_0, const struct object_id *VAR_1)
{
 struct hashmap_entry VAR_2;

 if (!VAR_0->map.cmpfn)
  FUNC_3(VAR_0, 0);

 FUNC_0(&VAR_2, FUNC_2(VAR_1));
 return FUNC_1(&VAR_0->map, &VAR_2, VAR_1);
}
