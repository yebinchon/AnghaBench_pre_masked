
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gvt_gtt_entry {int type; int val64; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct intel_gvt_gtt_entry*) ;

__attribute__((used)) static void FUNC_2(struct intel_gvt_gtt_entry *VAR_3)
{
 if (FUNC_1(VAR_3)) {
  switch (VAR_3->type) {
  case 128:
   VAR_3->val64 &= ~VAR_2;
   VAR_3->type = VAR_0;
   break;
  case 129:
   VAR_3->type = VAR_1;
   VAR_3->val64 &= ~VAR_2;
   break;
  default:
   FUNC_0(1);
  }
 }
}
