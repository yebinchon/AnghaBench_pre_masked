
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdt_resource {int dummy; } ;
struct rdt_domain {int dummy; } ;


 int FUNC_0 (struct rdt_resource*,struct rdt_domain*,unsigned long,int,int) ;
 scalar_t__ FUNC_1 (struct rdt_resource*,struct rdt_domain*,struct rdt_resource**,struct rdt_domain**) ;

bool FUNC_2(struct rdt_resource *VAR_0, struct rdt_domain *VAR_1,
      unsigned long VAR_2, int VAR_3, bool VAR_4)
{
 struct rdt_resource *VAR_5;
 struct rdt_domain *VAR_6;

 if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4))
  return 1;

 if (FUNC_1(VAR_0, VAR_1, &VAR_5, &VAR_6) < 0)
  return 0;

 return FUNC_0(VAR_5, VAR_6, VAR_2, VAR_3, VAR_4);
}
