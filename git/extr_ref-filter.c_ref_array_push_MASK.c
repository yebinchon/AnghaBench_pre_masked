
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_array_item {int dummy; } ;
struct ref_array {scalar_t__ nr; struct ref_array_item** items; int alloc; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (struct ref_array_item**,scalar_t__,int ) ;
 struct ref_array_item* FUNC_1 (char const*,struct object_id const*) ;

struct ref_array_item *FUNC_2(struct ref_array *VAR_0,
          const char *VAR_1,
          const struct object_id *VAR_2)
{
 struct ref_array_item *VAR_3 = FUNC_1(VAR_1, VAR_2);

 FUNC_0(VAR_0->items, VAR_0->nr + 1, VAR_0->alloc);
 VAR_0->items[VAR_0->nr++] = VAR_3;

 return VAR_3;
}
