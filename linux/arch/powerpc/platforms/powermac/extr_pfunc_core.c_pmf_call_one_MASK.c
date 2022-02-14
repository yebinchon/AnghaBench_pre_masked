
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmf_function {int name; struct pmf_device* dev; } ;
struct pmf_device {TYPE_1__* handlers; int node; } ;
struct pmf_args {int dummy; } ;
struct TYPE_2__ {int (* end ) (struct pmf_function*,void*) ;void* (* begin ) (struct pmf_function*,struct pmf_args*) ;} ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct pmf_function*,TYPE_1__*,void*,struct pmf_args*) ;
 void* FUNC_2 (struct pmf_function*,struct pmf_args*) ;
 int FUNC_3 (struct pmf_function*,void*) ;

int FUNC_4(struct pmf_function *VAR_0, struct pmf_args *VAR_1)
{
 struct pmf_device *VAR_2 = VAR_0->dev;
 void *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 FUNC_0(" ** pmf_call_one(%pOF/%s) **\n", VAR_2->node, VAR_0->name);

 if (VAR_2->handlers->begin)
  VAR_3 = VAR_2->handlers->begin(VAR_0, VAR_1);
 VAR_4 = FUNC_1(VAR_0, VAR_2->handlers, VAR_3, VAR_1);
 if (VAR_2->handlers->end)
  VAR_2->handlers->end(VAR_0, VAR_3);

 return VAR_4;
}
