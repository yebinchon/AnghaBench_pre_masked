
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct intel_dp {int* edp_dpcd; int aux; } ;
struct intel_connector {TYPE_1__* encoder; } ;
typedef int read_val ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int**,int) ;
 struct intel_dp* FUNC_2 (int *) ;

__attribute__((used)) static u32 FUNC_3(struct intel_connector *VAR_2)
{
 struct intel_dp *VAR_3 = FUNC_2(&VAR_2->encoder->base);
 u8 VAR_4[2] = { 0x0 };
 u16 VAR_5 = 0;

 if (FUNC_1(&VAR_3->aux, VAR_1,
        &VAR_4, sizeof(VAR_4)) < 0) {
  FUNC_0("Failed to read DPCD register 0x%x\n",
         VAR_1);
  return 0;
 }
 VAR_5 = VAR_4[0];
 if (VAR_3->edp_dpcd[2] & VAR_0)
  VAR_5 = (VAR_4[0] << 8 | VAR_4[1]);

 return VAR_5;
}
