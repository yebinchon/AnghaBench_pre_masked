
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_shared_dpll {int dummy; } ;
struct TYPE_2__ {int wrpll; } ;
struct intel_crtc_state {int port_clock; TYPE_1__ dpll_hw_state; } ;
struct intel_crtc {int dummy; } ;
struct intel_atomic_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,unsigned int*,unsigned int*,unsigned int*) ;
 struct intel_crtc_state* FUNC_4 (struct intel_atomic_state*,struct intel_crtc*) ;
 struct intel_shared_dpll* FUNC_5 (struct intel_atomic_state*,struct intel_crtc*,TYPE_1__*,int ,int ) ;

__attribute__((used)) static struct intel_shared_dpll *
FUNC_6(struct intel_atomic_state *VAR_4,
        struct intel_crtc *VAR_5)
{
 struct intel_crtc_state *VAR_6 =
  FUNC_4(VAR_4, VAR_5);
 struct intel_shared_dpll *VAR_7;
 u32 VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11;

 FUNC_3(VAR_6->port_clock * 1000, &VAR_11, &VAR_10, &VAR_9);

 VAR_8 = VAR_2 | VAR_3 |
       FUNC_2(VAR_11) | FUNC_0(VAR_10) |
       FUNC_1(VAR_9);

 VAR_6->dpll_hw_state.wrpll = VAR_8;

 VAR_7 = FUNC_5(VAR_4, VAR_5,
         &VAR_6->dpll_hw_state,
         VAR_0, VAR_1);

 if (!VAR_7)
  return ((void*)0);

 return VAR_7;
}
