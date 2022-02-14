
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct intel_guc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct intel_guc*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct intel_guc *VAR_2)
{
 u16 VAR_3;

 FUNC_2("Max number of doorbells: %d", VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  if (!FUNC_0(VAR_2, VAR_3)) {
   FUNC_1("doorbell %d, not ok\n", VAR_3);
   return -VAR_0;
  }
 }

 return 0;
}
