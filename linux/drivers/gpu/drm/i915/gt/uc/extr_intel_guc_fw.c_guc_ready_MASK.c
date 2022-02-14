
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_uncore {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct intel_uncore*,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct intel_uncore *VAR_5, u32 *VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_5, VAR_4);
 u32 VAR_8 = VAR_7 & VAR_2;

 *VAR_6 = VAR_7;
 return (VAR_8 == VAR_3) ||
  ((VAR_7 & VAR_0) && (VAR_8 == VAR_1));
}
