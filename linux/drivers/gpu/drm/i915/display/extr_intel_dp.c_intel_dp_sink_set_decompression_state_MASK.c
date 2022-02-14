
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dp {int aux; } ;
struct TYPE_2__ {int compression_enable; } ;
struct intel_crtc_state {TYPE_1__ dsc_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *,int ,int ) ;

void FUNC_2(struct intel_dp *VAR_2,
        const struct intel_crtc_state *VAR_3,
        bool VAR_4)
{
 int VAR_5;

 if (!VAR_3->dsc_params.compression_enable)
  return;

 VAR_5 = FUNC_1(&VAR_2->aux, VAR_1,
     VAR_4 ? VAR_0 : 0);
 if (VAR_5 < 0)
  FUNC_0("Failed to %s sink decompression state\n",
         VAR_4 ? "enable" : "disable");
}
