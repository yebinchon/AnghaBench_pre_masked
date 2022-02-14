
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_guc {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct intel_guc*,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_3(struct intel_guc *VAR_5, bool VAR_6,
      bool VAR_7, u32 VAR_8)
{
 u32 VAR_9[] = {
  VAR_4,
  (VAR_6 ? VAR_1 : 0) |
  (VAR_8 << VAR_2) |
  (VAR_7 ? VAR_0 : 0)
 };

 FUNC_1(VAR_8 > VAR_3);

 return FUNC_2(VAR_5, VAR_9, FUNC_0(VAR_9));
}
