
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_lspcon {int dummy; } ;
typedef enum drm_lspcon_mode { ____Placeholder_drm_lspcon_mode } drm_lspcon_mode ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct intel_lspcon*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static enum drm_lspcon_mode FUNC_5(struct intel_lspcon *VAR_0,
          enum drm_lspcon_mode VAR_1)
{
 enum drm_lspcon_mode VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 == VAR_1)
  goto out;

 FUNC_0("Waiting for LSPCON mode %s to settle\n",
        FUNC_3(VAR_1));

 FUNC_4((VAR_2 = FUNC_2(VAR_0)) == VAR_1, 400);
 if (VAR_2 != VAR_1)
  FUNC_1("LSPCON mode hasn't settled\n");

out:
 FUNC_0("Current LSPCON mode %s\n",
        FUNC_3(VAR_2));

 return VAR_2;
}
