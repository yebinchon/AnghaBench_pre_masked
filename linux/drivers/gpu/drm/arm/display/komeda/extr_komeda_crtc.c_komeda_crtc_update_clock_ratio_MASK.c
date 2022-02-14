
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {unsigned long long crtc_clock; } ;
struct TYPE_4__ {TYPE_1__ adjusted_mode; int active; } ;
struct komeda_crtc_state {int clock_ratio; TYPE_2__ base; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct komeda_crtc_state*) ;

__attribute__((used)) static void FUNC_2(struct komeda_crtc_state *VAR_0)
{
 u64 VAR_1, VAR_2;

 if (!VAR_0->base.active) {
  VAR_0->clock_ratio = 0;
  return;
 }

 VAR_1 = VAR_0->base.adjusted_mode.crtc_clock * 1000ULL;
 VAR_2 = FUNC_1(VAR_0);

 VAR_0->clock_ratio = FUNC_0(VAR_2 << 32, VAR_1);
}
