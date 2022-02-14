
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct object {int flags; } ;
struct alternate_object_cache {scalar_t__ nr; struct object** items; int alloc; } ;


 int FUNC_0 (struct object**,scalar_t__,int ) ;
 int VAR_0 ;
 struct object* FUNC_1 (int ,struct object_id const*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(const struct object_id *VAR_2,
    void *VAR_3)
{
 struct alternate_object_cache *VAR_4 = VAR_3;
 struct object *VAR_5 = FUNC_1(VAR_1, VAR_2);

 if (!VAR_5 || (VAR_5->flags & VAR_0))
  return;

 VAR_5->flags |= VAR_0;
 FUNC_0(VAR_4->items, VAR_4->nr + 1, VAR_4->alloc);
 VAR_4->items[VAR_4->nr++] = VAR_5;
}
