
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_lspcon {int vendor; } ;
struct drm_dp_dpcd_ident {int* oui; } ;
struct TYPE_2__ {struct drm_dp_dpcd_ident ident; } ;
struct intel_dp {TYPE_1__ desc; int dpcd; int aux; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

 int VAR_1 ;

 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,int ) ;
 struct intel_dp* FUNC_4 (struct intel_lspcon*) ;

__attribute__((used)) static bool FUNC_5(struct intel_lspcon *VAR_2)
{
 struct intel_dp *VAR_3 = FUNC_4(VAR_2);
 struct drm_dp_dpcd_ident *VAR_4;
 u32 VAR_5;

 if (FUNC_3(&VAR_3->aux, &VAR_3->desc, FUNC_2(VAR_3->dpcd))) {
  FUNC_1("Can't read description\n");
  return 0;
 }

 VAR_4 = &VAR_3->desc.ident;
 VAR_5 = (VAR_4->oui[0] << 16) | (VAR_4->oui[1] << 8) |
        VAR_4->oui[2];

 switch (VAR_5) {
 case 129:
  VAR_2->vendor = VAR_0;
  FUNC_0("Vendor: Mega Chips\n");
  break;

 case 128:
  VAR_2->vendor = VAR_1;
  FUNC_0("Vendor: Parade Tech\n");
  break;

 default:
  FUNC_1("Invalid/Unknown vendor OUI\n");
  return 0;
 }

 return 1;
}
