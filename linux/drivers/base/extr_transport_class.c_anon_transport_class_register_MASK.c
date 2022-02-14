
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* remove; void* setup; int class; } ;
struct TYPE_5__ {int * class; } ;
struct anon_transport_class {TYPE_1__ tclass; TYPE_2__ container; } ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(struct anon_transport_class *VAR_1)
{
 int VAR_2;
 VAR_1->container.class = &VAR_1->tclass.class;
 FUNC_1(&VAR_1->container);
 VAR_2 = FUNC_0(&VAR_1->container);
 if (VAR_2)
  return VAR_2;
 VAR_1->tclass.setup = VAR_0;
 VAR_1->tclass.remove = VAR_0;
 return 0;
}
