
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct object_id {int hash; } ;
struct TYPE_5__ {TYPE_1__* parsed_objects; } ;
struct TYPE_4__ {int grafts_nr; scalar_t__ grafts; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_2__* VAR_0 ;

int FUNC_2(const struct object_id *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1->hash);
 if (VAR_2 < 0)
  return -1;
 if (VAR_2 + 1 < VAR_0->parsed_objects->grafts_nr)
  FUNC_0(VAR_0->parsed_objects->grafts + VAR_2,
      VAR_0->parsed_objects->grafts + VAR_2 + 1,
      VAR_0->parsed_objects->grafts_nr - VAR_2 - 1);
 VAR_0->parsed_objects->grafts_nr--;
 return 0;
}
