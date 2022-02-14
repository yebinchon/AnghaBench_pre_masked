
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct intel_engine_execlists {scalar_t__* active; } ;
typedef enum csb_step { ____Placeholder_csb_step } csb_step ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static inline enum csb_step
FUNC_0(const struct intel_engine_execlists *VAR_6, const u32 *VAR_7)
{
 unsigned int VAR_8 = *VAR_7;

 if (VAR_8 & VAR_4)
  return VAR_3;

 if (VAR_8 & VAR_5)
  return VAR_2;

 if (*VAR_6->active)
  return VAR_0;

 return VAR_1;
}
