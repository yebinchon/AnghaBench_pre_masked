
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fetch_negotiator {int dummy; } ;
struct alternate_object_cache {size_t nr; struct object** items; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct alternate_object_cache*) ;

__attribute__((used)) static void FUNC_1(struct fetch_negotiator *VAR_1,
          void (*VAR_2)(struct fetch_negotiator *,
       struct object *))
{
 static int VAR_3;
 static struct alternate_object_cache VAR_4;
 size_t VAR_5;

 if (!VAR_3) {
  FUNC_0(VAR_0, &VAR_4);
  VAR_3 = 1;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4.nr; VAR_5++)
  VAR_2(VAR_1, VAR_4.items[VAR_5]);
}
