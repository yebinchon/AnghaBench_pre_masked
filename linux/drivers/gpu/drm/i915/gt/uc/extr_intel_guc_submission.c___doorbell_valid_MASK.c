
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct intel_uncore {int dummy; } ;
struct intel_guc {int dummy; } ;
struct TYPE_2__ {struct intel_uncore* uncore; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_2 (struct intel_guc*) ;
 int FUNC_3 (struct intel_uncore*,int ) ;

__attribute__((used)) static bool FUNC_4(struct intel_guc *VAR_2, u16 VAR_3)
{
 struct intel_uncore *VAR_4 = FUNC_2(VAR_2)->uncore;

 FUNC_0(VAR_3 >= VAR_1);
 return FUNC_3(VAR_4, FUNC_1(VAR_3)) & VAR_0;
}
