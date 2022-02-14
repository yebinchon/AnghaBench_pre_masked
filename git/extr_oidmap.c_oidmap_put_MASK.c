
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oidmap_entry {int internal_entry; int oid; } ;
struct TYPE_2__ {int cmpfn; } ;
struct oidmap {TYPE_1__ map; } ;


 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct oidmap*,int ) ;

void *FUNC_4(struct oidmap *VAR_0, void *VAR_1)
{
 struct oidmap_entry *VAR_2 = VAR_1;

 if (!VAR_0->map.cmpfn)
  FUNC_3(VAR_0, 0);

 FUNC_0(&VAR_2->internal_entry, FUNC_2(&VAR_2->oid));
 return FUNC_1(&VAR_0->map, &VAR_2->internal_entry);
}
