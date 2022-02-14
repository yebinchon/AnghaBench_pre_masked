
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_gvt {int dummy; } ;
struct cmd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct cmd_info const* FUNC_0 (struct intel_gvt*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static inline const struct cmd_info *FUNC_2(struct intel_gvt *VAR_1,
  u32 VAR_2, int VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 == VAR_0)
  return ((void*)0);

 return FUNC_0(VAR_1, VAR_4, VAR_3);
}
