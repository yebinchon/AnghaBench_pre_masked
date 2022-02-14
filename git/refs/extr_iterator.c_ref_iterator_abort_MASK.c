
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_iterator {TYPE_1__* vtable; } ;
struct TYPE_2__ {int (* abort ) (struct ref_iterator*) ;} ;


 int FUNC_0 (struct ref_iterator*) ;

int FUNC_1(struct ref_iterator *VAR_0)
{
 return VAR_0->vtable->abort(VAR_0);
}
