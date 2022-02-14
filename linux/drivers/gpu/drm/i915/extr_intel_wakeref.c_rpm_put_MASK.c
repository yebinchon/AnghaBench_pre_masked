
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_wakeref {int rpm; int wakeref; } ;
typedef int intel_wakeref_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct intel_wakeref *VAR_0)
{
 intel_wakeref_t VAR_1 = FUNC_1(&VAR_0->wakeref);

 FUNC_2(VAR_0->rpm, VAR_1);
 FUNC_0(!VAR_1);
}
