
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gvt_gtt_pte_ops {int (* test_pse ) (struct intel_gvt_gtt_entry*) ;} ;
struct intel_gvt_gtt_entry {int type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;



 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct intel_gvt_gtt_entry*) ;

__attribute__((used)) static void FUNC_4(struct intel_gvt_gtt_pte_ops *VAR_1,
 struct intel_gvt_gtt_entry *VAR_2, bool VAR_3)
{
 switch (VAR_2->type) {
 case 130:
 case 129:
  if (VAR_1->test_pse(VAR_2))
   VAR_2->type = FUNC_1(VAR_2->type);
  break;
 case 128:
  if (VAR_3)
   VAR_2->type = FUNC_1(VAR_2->type);
  break;
 default:
  FUNC_0(!FUNC_2(VAR_2->type));
 }

 FUNC_0(VAR_2->type == VAR_0);
}
