
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {int dummy; } ;
struct intel_crtc {int base; } ;
struct intel_atomic_state {int base; } ;


 int FUNC_0 (int *,int *) ;
 struct intel_crtc_state* FUNC_1 (int ) ;

__attribute__((used)) static inline struct intel_crtc_state *
FUNC_2(struct intel_atomic_state *VAR_0,
    struct intel_crtc *VAR_1)
{
 return FUNC_1(FUNC_0(&VAR_0->base,
         &VAR_1->base));
}
