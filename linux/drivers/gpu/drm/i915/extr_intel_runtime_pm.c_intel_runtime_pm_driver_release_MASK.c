
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_runtime_pm {int wakeref_count; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct intel_runtime_pm*) ;

void FUNC_5(struct intel_runtime_pm *VAR_0)
{
 int VAR_1 = FUNC_1(&VAR_0->wakeref_count);

 FUNC_0(VAR_1,
      "i915 raw-wakerefs=%d wakelocks=%d on cleanup\n",
      FUNC_2(VAR_1),
      FUNC_3(VAR_1));

 FUNC_4(VAR_0);
}
