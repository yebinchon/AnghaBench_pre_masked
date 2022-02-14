
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct intel_uncore*,int ) ;

__attribute__((used)) static bool FUNC_1(struct intel_uncore *VAR_6,
    u32 *VAR_7, u32 *VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_6, VAR_0);
 u32 VAR_10 = FUNC_0(VAR_6, VAR_3);

 if (!(VAR_10 & VAR_4) ||
     !(VAR_9 & VAR_2))
  return 0;

 *VAR_7 = VAR_9 & VAR_1;
 *VAR_8 = VAR_10 & VAR_5;
 return 1;
}
