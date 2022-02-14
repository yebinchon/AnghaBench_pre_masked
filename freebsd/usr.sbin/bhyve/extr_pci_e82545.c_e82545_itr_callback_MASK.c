
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct e82545_softc {int esc_ICR; int esc_IMS; int esc_irq_asserted; int esc_mtx; int * esc_mevpitr; int esc_pi; } ;
typedef enum ev_type { ____Placeholder_ev_type } ev_type ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(int VAR_0, enum ev_type VAR_1, void *VAR_2)
{
 uint32_t VAR_3;
 struct e82545_softc *VAR_4 = VAR_2;

 FUNC_3(&VAR_4->esc_mtx);
 VAR_3 = VAR_4->esc_ICR & VAR_4->esc_IMS;
 if (VAR_3 && !VAR_4->esc_irq_asserted) {
  FUNC_0("itr callback: lintr assert %x\r\n", VAR_3);
  VAR_4->esc_irq_asserted = 1;
  FUNC_2(VAR_4->esc_pi);
 } else {
  FUNC_1(VAR_4->esc_mevpitr);
  VAR_4->esc_mevpitr = ((void*)0);
 }
 FUNC_4(&VAR_4->esc_mtx);
}
