
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct komeda_format_caps {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(const struct komeda_format_caps *VAR_2,
         u32 VAR_3, u64 VAR_4, u32 VAR_5)
{
 uint64_t VAR_6 = VAR_4 & VAR_1;

 if ((VAR_6 == VAR_0) &&
     FUNC_1(VAR_5)) {
  FUNC_0("D71 doesn't support ROT90 for WB-AFBC.\n");
  return 0;
 }

 return 1;
}
