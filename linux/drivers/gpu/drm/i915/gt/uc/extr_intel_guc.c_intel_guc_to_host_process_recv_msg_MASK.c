
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_guc {int const msg_enabled_mask; int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct intel_guc *VAR_3,
           const u32 *VAR_4, u32 VAR_5)
{
 u32 VAR_6;

 if (FUNC_1(!VAR_5))
  return -VAR_0;


 VAR_6 = VAR_4[0] & VAR_3->msg_enabled_mask;

 if (VAR_6 & (VAR_2 |
     VAR_1))
  FUNC_0(&VAR_3->log);

 return 0;
}
