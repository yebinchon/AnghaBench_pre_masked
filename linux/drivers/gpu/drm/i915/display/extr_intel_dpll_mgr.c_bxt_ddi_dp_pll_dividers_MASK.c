
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {int port_clock; } ;
struct bxt_clk_div {int clock; int vco; int p1; int p2; } ;


 int FUNC_0 (struct bxt_clk_div*) ;
 struct bxt_clk_div* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct intel_crtc_state *VAR_1,
        struct bxt_clk_div *VAR_2)
{
 int VAR_3 = VAR_1->port_clock;
 int VAR_4;

 *VAR_2 = VAR_0[0];
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); ++VAR_4) {
  if (VAR_0[VAR_4].clock == VAR_3) {
   *VAR_2 = VAR_0[VAR_4];
   break;
  }
 }

 VAR_2->vco = VAR_3 * 10 / 2 * VAR_2->p1 * VAR_2->p2;
}
