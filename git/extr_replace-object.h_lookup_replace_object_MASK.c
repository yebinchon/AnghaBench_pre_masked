
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct repository {TYPE_3__* objects; } ;
struct object_id {int dummy; } ;
struct TYPE_6__ {TYPE_2__* replace_map; } ;
struct TYPE_4__ {scalar_t__ tablesize; } ;
struct TYPE_5__ {TYPE_1__ map; } ;


 struct object_id const* FUNC_0 (struct repository*,struct object_id const*) ;
 int VAR_0 ;

__attribute__((used)) static inline const struct object_id *FUNC_1(struct repository *VAR_1,
           const struct object_id *VAR_2)
{
 if (!VAR_0 ||
     (VAR_1->objects->replace_map &&
      VAR_1->objects->replace_map->map.tablesize == 0))
  return VAR_2;
 return FUNC_0(VAR_1, VAR_2);
}
