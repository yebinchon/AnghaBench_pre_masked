
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_lspcon {scalar_t__ vendor; } ;
struct intel_encoder {int base; } ;
struct intel_dp {int aux; } ;
struct intel_crtc_state {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,void const*,int ) ;
 int FUNC_3 (int *,void const*,int ) ;
 struct intel_dp* FUNC_4 (int *) ;
 struct intel_lspcon* FUNC_5 (int *) ;

void FUNC_6(struct intel_encoder *VAR_2,
       const struct intel_crtc_state *VAR_3,
       unsigned int VAR_4,
       const void *VAR_5, ssize_t VAR_6)
{
 bool VAR_7;
 struct intel_dp *VAR_8 = FUNC_4(&VAR_2->base);
 struct intel_lspcon *VAR_9 = FUNC_5(&VAR_2->base);


 if (VAR_4 != VAR_0)
  return;

 if (VAR_9->vendor == VAR_1)
  VAR_7 = FUNC_2(&VAR_8->aux,
            VAR_5, VAR_6);
 else
  VAR_7 = FUNC_3(&VAR_8->aux,
        VAR_5, VAR_6);

 if (!VAR_7) {
  FUNC_1("Failed to write AVI infoframes\n");
  return;
 }

 FUNC_0("AVI infoframes updated successfully\n");
}
