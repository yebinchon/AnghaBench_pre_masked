
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmpfn; } ;
struct oidmap {TYPE_1__ map; } ;
struct object_id {int dummy; } ;


 void* FUNC_0 (TYPE_1__*,int ,struct object_id const*) ;
 int FUNC_1 (struct object_id const*) ;

void *FUNC_2(const struct oidmap *VAR_0, const struct object_id *VAR_1)
{
 if (!VAR_0->map.cmpfn)
  return ((void*)0);

 return FUNC_0(&VAR_0->map, FUNC_1(VAR_1), VAR_1);
}
