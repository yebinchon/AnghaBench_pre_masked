
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpll {int p1; int p2; int n; int m1; int m2; } ;
struct intel_crtc_state {unsigned int port_clock; int clock_set; struct dpll dpll; } ;


 int FUNC_0 (int,char*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct intel_crtc_state *VAR_0)
{
 unsigned VAR_1 = VAR_0->port_clock;
 struct dpll *VAR_2 = &VAR_0->dpll;





 if (VAR_1 >= 100000 && VAR_1 < 140500) {
  VAR_2->p1 = 2;
  VAR_2->p2 = 10;
  VAR_2->n = 3;
  VAR_2->m1 = 16;
  VAR_2->m2 = 8;
 } else if (VAR_1 >= 140500 && VAR_1 <= 200000) {
  VAR_2->p1 = 1;
  VAR_2->p2 = 10;
  VAR_2->n = 6;
  VAR_2->m1 = 12;
  VAR_2->m2 = 8;
 } else {
  FUNC_0(1, "SDVO TV clock out of range: %i\n", VAR_1);
 }

 VAR_0->clock_set = 1;
}
