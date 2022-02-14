
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdt_resource {int name; int (* msr_update ) (struct rdt_domain*,struct msr_param*,struct rdt_resource*) ;} ;
struct rdt_domain {int dummy; } ;
struct msr_param {struct rdt_resource* res; } ;


 struct rdt_domain* FUNC_0 (int,struct rdt_resource*) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct rdt_domain*,struct msr_param*,struct rdt_resource*) ;

void FUNC_4(void *VAR_0)
{
 struct msr_param *VAR_1 = VAR_0;
 struct rdt_resource *VAR_2 = VAR_1->res;
 int VAR_3 = FUNC_2();
 struct rdt_domain *VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4) {
  VAR_2->msr_update(VAR_4, VAR_1, VAR_2);
  return;
 }
 FUNC_1("cpu %d not found in any domain for resource %s\n",
       VAR_3, VAR_2->name);
}
