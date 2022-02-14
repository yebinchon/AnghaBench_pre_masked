
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gvt_gtt_entry {scalar_t__ type; unsigned long val64; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;

__attribute__((used)) static unsigned long FUNC_0(struct intel_gvt_gtt_entry *VAR_8)
{
 unsigned long VAR_9;

 if (VAR_8->type == VAR_4)
  VAR_9 = (VAR_8->val64 & VAR_0) >> VAR_7;
 else if (VAR_8->type == VAR_5)
  VAR_9 = (VAR_8->val64 & VAR_1) >> VAR_7;
 else if (VAR_8->type == VAR_6)
  VAR_9 = (VAR_8->val64 & VAR_3) >> VAR_7;
 else
  VAR_9 = (VAR_8->val64 & VAR_2) >> VAR_7;
 return VAR_9;
}
