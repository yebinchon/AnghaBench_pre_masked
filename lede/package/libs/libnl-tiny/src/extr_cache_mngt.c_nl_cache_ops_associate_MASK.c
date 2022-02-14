
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nl_cache_ops {int co_protocol; TYPE_1__* co_msgtypes; struct nl_cache_ops* co_next; } ;
struct TYPE_2__ {int mt_id; } ;


 struct nl_cache_ops* VAR_0 ;

struct nl_cache_ops *FUNC_0(int VAR_1, int VAR_2)
{
 int VAR_3;
 struct nl_cache_ops *VAR_4;

 for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->co_next) {
  if (VAR_4->co_protocol != VAR_1)
   continue;

  for (VAR_3 = 0; VAR_4->co_msgtypes[VAR_3].mt_id >= 0; VAR_3++)
   if (VAR_4->co_msgtypes[VAR_3].mt_id == VAR_2)
    return VAR_4;
 }

 return ((void*)0);
}
