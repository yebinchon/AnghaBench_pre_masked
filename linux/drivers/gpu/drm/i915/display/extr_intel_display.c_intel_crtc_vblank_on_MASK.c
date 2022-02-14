
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct intel_crtc {int base; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct intel_crtc_state const*) ;
 struct intel_crtc* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(const struct intel_crtc_state *VAR_0)
{
 struct intel_crtc *VAR_1 = FUNC_3(VAR_0->base.crtc);

 FUNC_0(&VAR_1->base,
          FUNC_2(VAR_0));
 FUNC_1(&VAR_1->base);
}
