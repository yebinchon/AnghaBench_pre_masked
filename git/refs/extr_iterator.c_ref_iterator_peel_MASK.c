
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_iterator {TYPE_1__* vtable; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int (* peel ) (struct ref_iterator*,struct object_id*) ;} ;


 int FUNC_0 (struct ref_iterator*,struct object_id*) ;

int FUNC_1(struct ref_iterator *VAR_0,
        struct object_id *VAR_1)
{
 return VAR_0->vtable->peel(VAR_0, VAR_1);
}
