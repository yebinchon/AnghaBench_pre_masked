
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gvt_gtt_entry {scalar_t__ type; int val64; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct intel_gvt_gtt_entry *VAR_3)
{





 if (VAR_3->type == VAR_0
   || VAR_3->type == VAR_1)
  return (VAR_3->val64 != 0);
 else
  return (VAR_3->val64 & VAR_2);
}
