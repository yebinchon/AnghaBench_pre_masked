
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct komeda_component_state {int dummy; } ;
struct komeda_component {int name; TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* validate ) (struct komeda_component*,struct komeda_component_state*) ;} ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct komeda_component*,struct komeda_component_state*) ;

__attribute__((used)) static int
FUNC_2(struct komeda_component *VAR_0,
      struct komeda_component_state *VAR_1)
{
 int VAR_2;

 if (!VAR_0->funcs->validate)
  return 0;

 VAR_2 = VAR_0->funcs->validate(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_0("%s validate private failed.\n", VAR_0->name);

 return VAR_2;
}
