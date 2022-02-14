
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_uflow_resources {scalar_t__ num; scalar_t__ max; int counters_num; struct ib_counters** counters; int collection_num; struct ib_flow_action** collection; } ;
struct ib_flow_action {int usecnt; } ;
struct ib_counters {int usecnt; } ;
typedef enum ib_flow_spec_type { ____Placeholder_ib_flow_spec_type } ib_flow_spec_type ;




 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ib_uflow_resources *VAR_0,
   enum ib_flow_spec_type VAR_1,
   void *VAR_2)
{
 FUNC_0(VAR_0->num >= VAR_0->max);

 switch (VAR_1) {
 case 128:
  FUNC_1(&((struct ib_flow_action *)VAR_2)->usecnt);
  VAR_0->collection[VAR_0->collection_num++] =
   (struct ib_flow_action *)VAR_2;
  break;
 case 129:
  FUNC_1(&((struct ib_counters *)VAR_2)->usecnt);
  VAR_0->counters[VAR_0->counters_num++] =
   (struct ib_counters *)VAR_2;
  break;
 default:
  FUNC_0(1);
 }

 VAR_0->num++;
}
