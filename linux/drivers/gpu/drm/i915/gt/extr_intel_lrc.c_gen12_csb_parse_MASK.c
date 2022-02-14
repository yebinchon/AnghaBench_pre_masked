
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_engine_execlists {scalar_t__* active; } ;
typedef enum csb_step { ____Placeholder_csb_step } csb_step ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline enum csb_step
FUNC_3(const struct intel_engine_execlists *VAR_5, const u32 *VAR_6)
{
 u32 VAR_7 = VAR_6[0];
 u32 VAR_8 = VAR_6[1];
 bool VAR_9 = FUNC_1(VAR_7);
 bool VAR_10 = FUNC_1(VAR_8);
 bool VAR_11 = VAR_7 & VAR_4;

 if (!VAR_10 && VAR_9)
  return VAR_3;
 if (VAR_11 && VAR_10)
  return VAR_2;






 FUNC_0(FUNC_2(VAR_8));

 if (*VAR_5->active) {
  FUNC_0(!VAR_10);
  return VAR_0;
 }

 return VAR_1;
}
