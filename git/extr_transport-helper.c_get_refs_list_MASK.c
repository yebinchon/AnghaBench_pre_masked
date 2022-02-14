
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transport {TYPE_1__* vtable; } ;
struct ref {int dummy; } ;
struct argv_array {int dummy; } ;
struct TYPE_2__ {struct ref* (* get_refs_list ) (struct transport*,int,struct argv_array const*) ;} ;


 int FUNC_0 (struct transport*) ;
 int FUNC_1 (struct transport*) ;
 struct ref* FUNC_2 (struct transport*,int) ;
 scalar_t__ FUNC_3 (struct transport*,int) ;
 struct ref* FUNC_4 (struct transport*,int,struct argv_array const*) ;

__attribute__((used)) static struct ref *FUNC_5(struct transport *VAR_0, int VAR_1,
     const struct argv_array *VAR_2)
{
 FUNC_1(VAR_0);

 if (FUNC_3(VAR_0, VAR_1)) {
  FUNC_0(VAR_0);
  return VAR_0->vtable->get_refs_list(VAR_0, VAR_1, VAR_2);
 }

 return FUNC_2(VAR_0, VAR_1);
}
