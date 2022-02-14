
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gvt_gtt_entry {scalar_t__ type; int val64; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_1(struct intel_gvt_gtt_entry *VAR_2)
{
 if (FUNC_0(VAR_2->type != VAR_1))
  return 0;

 return !!(VAR_2->val64 & VAR_0);
}
