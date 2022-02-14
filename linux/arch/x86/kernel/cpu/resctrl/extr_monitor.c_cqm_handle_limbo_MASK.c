
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct rdt_resource {int dummy; } ;
struct rdt_domain {int cqm_limbo; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct rdt_domain*,int) ;
 struct rdt_domain* FUNC_1 (int,struct rdt_resource*) ;
 scalar_t__ FUNC_2 (struct rdt_resource*,struct rdt_domain*) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 struct rdt_resource* VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int,int *,unsigned long) ;
 int FUNC_8 () ;

void FUNC_9(struct work_struct *VAR_4)
{
 unsigned long VAR_5 = FUNC_3(VAR_0);
 int VAR_6 = FUNC_8();
 struct rdt_resource *VAR_7;
 struct rdt_domain *VAR_8;

 FUNC_4(&VAR_3);

 VAR_7 = &VAR_2[VAR_1];
 VAR_8 = FUNC_1(VAR_6, VAR_7);

 if (!VAR_8) {
  FUNC_6("Failure to get domain for limbo worker\n");
  goto out_unlock;
 }

 FUNC_0(VAR_8, 0);

 if (FUNC_2(VAR_7, VAR_8))
  FUNC_7(VAR_6, &VAR_8->cqm_limbo, VAR_5);

out_unlock:
 FUNC_5(&VAR_3);
}
