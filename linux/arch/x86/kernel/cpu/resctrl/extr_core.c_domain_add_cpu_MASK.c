
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdt_resource {scalar_t__ mon_capable; scalar_t__ alloc_capable; int cache_level; } ;
struct rdt_domain {int id; int list; int cpu_mask; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rdt_domain*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (struct rdt_resource*,struct rdt_domain*) ;
 scalar_t__ FUNC_4 (struct rdt_resource*,struct rdt_domain*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct rdt_domain*) ;
 struct rdt_domain* FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int *,struct list_head*) ;
 int FUNC_9 (struct rdt_resource*,struct rdt_domain*) ;
 int FUNC_10 (char*,int) ;
 struct rdt_domain* FUNC_11 (struct rdt_resource*,int,struct list_head**) ;
 int VAR_1 ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(int VAR_2, struct rdt_resource *VAR_3)
{
 int VAR_4 = FUNC_5(VAR_2, VAR_3->cache_level);
 struct list_head *VAR_5 = ((void*)0);
 struct rdt_domain *VAR_6;

 VAR_6 = FUNC_11(VAR_3, VAR_4, &VAR_5);
 if (FUNC_0(VAR_6)) {
  FUNC_10("Could't find cache id for cpu %d\n", VAR_2);
  return;
 }

 if (VAR_6) {
  FUNC_2(VAR_2, &VAR_6->cpu_mask);
  return;
 }

 VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_0, FUNC_1(VAR_2));
 if (!VAR_6)
  return;

 VAR_6->id = VAR_4;
 FUNC_2(VAR_2, &VAR_6->cpu_mask);

 if (VAR_3->alloc_capable && FUNC_3(VAR_3, VAR_6)) {
  FUNC_6(VAR_6);
  return;
 }

 if (VAR_3->mon_capable && FUNC_4(VAR_3, VAR_6)) {
  FUNC_6(VAR_6);
  return;
 }

 FUNC_8(&VAR_6->list, VAR_5);





 if (FUNC_12(&VAR_1))
  FUNC_9(VAR_3, VAR_6);
}
