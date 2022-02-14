
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct repository {TYPE_3__* parsed_objects; TYPE_2__* objects; int gitdir; } ;
struct TYPE_6__ {scalar_t__ grafts_nr; } ;
struct TYPE_5__ {TYPE_1__* replace_map; } ;
struct TYPE_4__ {int map; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct repository*) ;
 int FUNC_2 (struct repository*) ;
 int FUNC_3 (struct repository*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_4(struct repository *VAR_1)
{
 if (!VAR_1->gitdir)
  return 0;

 if (VAR_0) {
  FUNC_3(VAR_1);
  if (FUNC_0(&VAR_1->objects->replace_map->map))
   return 0;
 }

 FUNC_2(VAR_1);
 if (VAR_1->parsed_objects && VAR_1->parsed_objects->grafts_nr)
  return 0;
 if (FUNC_1(VAR_1))
  return 0;

 return 1;
}
