
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oid_array {scalar_t__ sorted; scalar_t__ nr; int * oid; int alloc; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int *,struct object_id const*) ;

void FUNC_2(struct oid_array *VAR_0, const struct object_id *VAR_1)
{
 FUNC_0(VAR_0->oid, VAR_0->nr + 1, VAR_0->alloc);
 FUNC_1(&VAR_0->oid[VAR_0->nr++], VAR_1);
 VAR_0->sorted = 0;
}
