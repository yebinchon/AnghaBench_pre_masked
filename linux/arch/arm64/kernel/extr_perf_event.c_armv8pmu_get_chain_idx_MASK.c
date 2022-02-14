
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_hw_events {int used_mask; } ;
struct arm_pmu {int num_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct pmu_hw_events *VAR_2,
       struct arm_pmu *VAR_3)
{
 int VAR_4;





 for (VAR_4 = VAR_0 + 1; VAR_4 < VAR_3->num_events; VAR_4 += 2) {
  if (!FUNC_1(VAR_4, VAR_2->used_mask)) {

   if (!FUNC_1(VAR_4 - 1, VAR_2->used_mask))
    return VAR_4;

   FUNC_0(VAR_4, VAR_2->used_mask);
  }
 }
 return -VAR_1;
}
