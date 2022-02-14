
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dp {int* edp_dpcd; int aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct intel_dp *VAR_3, bool VAR_4)
{
 u8 VAR_5 = 0;


 if (!(VAR_3->edp_dpcd[1] & VAR_0))
  return;

 if (FUNC_1(&VAR_3->aux, VAR_2,
         &VAR_5) < 0) {
  FUNC_0("Failed to read DPCD register 0x%x\n",
         VAR_2);
  return;
 }
 if (VAR_4)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~(VAR_1);

 if (FUNC_2(&VAR_3->aux, VAR_2,
          VAR_5) != 1) {
  FUNC_0("Failed to %s aux backlight\n",
         VAR_4 ? "enable" : "disable");
 }
}
