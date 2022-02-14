
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct intel_guc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct intel_guc*,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct intel_guc *VAR_1)
{
 bool VAR_2 = 1;
 u16 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
  if (!FUNC_0(VAR_1, VAR_3))
   VAR_2 = 0;

 return VAR_2;
}
