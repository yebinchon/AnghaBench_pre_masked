
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_ctxtdata {int aspm_intr_supported; } ;


 int FUNC_0 (struct hfi1_ctxtdata*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct hfi1_ctxtdata *VAR_0)
{

 if (FUNC_1(!VAR_0->aspm_intr_supported))
  return;

 FUNC_0(VAR_0);
}
