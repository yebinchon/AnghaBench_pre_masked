
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int aspm_enabled; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct hfi1_devdata *VAR_2)
{
 if (!VAR_2->aspm_enabled || VAR_1 == VAR_0)
  return;

 FUNC_0(VAR_2);
 VAR_2->aspm_enabled = 0;
}
