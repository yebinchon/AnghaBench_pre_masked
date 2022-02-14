
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_guc_ct {int dummy; } ;
struct intel_guc {int dummy; } ;


 int FUNC_0 (char*,int,int,int const*) ;
 int FUNC_1 (char*,int,int,int const*) ;

 struct intel_guc* FUNC_2 (struct intel_guc_ct*) ;
 int FUNC_3 (struct intel_guc*,int const*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct intel_guc_ct *VAR_0,
          u32 VAR_1, u32 VAR_2, const u32 *VAR_3)
{
 struct intel_guc *VAR_4 = FUNC_2(VAR_0);
 int VAR_5;

 FUNC_0("CT: request %x %*ph\n", VAR_1, 4 * VAR_2, VAR_3);

 switch (VAR_1) {
 case 128:
  VAR_5 = FUNC_3(VAR_4, VAR_3, VAR_2);
  if (FUNC_4(VAR_5))
   goto fail_unexpected;
  break;

 default:
fail_unexpected:
  FUNC_1("CT: unexpected request %x %*ph\n",
     VAR_1, 4 * VAR_2, VAR_3);
  break;
 }
}
