
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_runtime_pm {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct intel_runtime_pm*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void
FUNC_3(struct intel_runtime_pm *VAR_0, int VAR_1)
{
 FUNC_1(VAR_0, VAR_1);
 FUNC_0(!FUNC_2(VAR_1),
    "RPM wakelock ref not held during HW access\n");
}
