
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_list {int nr; TYPE_1__* list; int alloc; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int name; int oid; } ;


 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (int *,struct object_id const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(const struct object_id *VAR_0, const char *VAR_1,
  struct ref_list *VAR_2)
{
 FUNC_0(VAR_2->list, VAR_2->nr + 1, VAR_2->alloc);
 FUNC_1(&VAR_2->list[VAR_2->nr].oid, VAR_0);
 VAR_2->list[VAR_2->nr].name = FUNC_2(VAR_1);
 VAR_2->nr++;
}
