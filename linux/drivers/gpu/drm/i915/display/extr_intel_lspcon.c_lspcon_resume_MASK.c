
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_lspcon {int dummy; } ;
typedef enum drm_lspcon_mode { ____Placeholder_drm_lspcon_mode } drm_lspcon_mode ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct intel_lspcon*,scalar_t__) ;
 int FUNC_3 (struct intel_lspcon*) ;
 scalar_t__ FUNC_4 (struct intel_lspcon*,int) ;
 scalar_t__ FUNC_5 (struct intel_lspcon*) ;

void FUNC_6(struct intel_lspcon *VAR_2)
{
 enum drm_lspcon_mode VAR_3;

 if (FUNC_5(VAR_2)) {
  VAR_3 = VAR_1;
  FUNC_3(VAR_2);
 } else {
  VAR_3 = VAR_0;
 }

 if (FUNC_4(VAR_2, VAR_3) == VAR_1)
  return;

 if (FUNC_2(VAR_2, VAR_1))
  FUNC_1("LSPCON resume failed\n");
 else
  FUNC_0("LSPCON resume success\n");
}
