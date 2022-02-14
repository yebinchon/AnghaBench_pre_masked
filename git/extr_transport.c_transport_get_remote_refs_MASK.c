
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transport {int got_remote_refs; struct ref const* remote_refs; TYPE_1__* vtable; } ;
struct ref {int dummy; } ;
struct argv_array {int dummy; } ;
struct TYPE_2__ {struct ref const* (* get_refs_list ) (struct transport*,int ,struct argv_array const*) ;} ;


 struct ref const* FUNC_0 (struct transport*,int ,struct argv_array const*) ;

const struct ref *FUNC_1(struct transport *VAR_0,
         const struct argv_array *VAR_1)
{
 if (!VAR_0->got_remote_refs) {
  VAR_0->remote_refs =
   VAR_0->vtable->get_refs_list(VAR_0, 0,
        VAR_1);
  VAR_0->got_remote_refs = 1;
 }

 return VAR_0->remote_refs;
}
