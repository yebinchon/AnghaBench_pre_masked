
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct e82545_softc {int esc_ICR; int esc_IMS; int esc_irq_asserted; int esc_ITR; int * esc_mevpitr; int esc_pi; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int,int ,int ,struct e82545_softc*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct e82545_softc *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;

 FUNC_0("icr assert: 0x%x\r\n", VAR_3);






 VAR_4 = VAR_3 & ~VAR_2->esc_ICR & VAR_2->esc_IMS;
 VAR_2->esc_ICR |= VAR_3;

 if (VAR_4 == 0) {
  FUNC_0("icr assert: masked %x, ims %x\r\n", VAR_4, VAR_2->esc_IMS);
 } else if (VAR_2->esc_mevpitr != ((void*)0)) {
  FUNC_0("icr assert: throttled %x, ims %x\r\n", VAR_4, VAR_2->esc_IMS);
 } else if (!VAR_2->esc_irq_asserted) {
  FUNC_0("icr assert: lintr assert %x\r\n", VAR_4);
  VAR_2->esc_irq_asserted = 1;
  FUNC_2(VAR_2->esc_pi);
  if (VAR_2->esc_ITR != 0) {
   VAR_2->esc_mevpitr = FUNC_1(
       (VAR_2->esc_ITR + 3905) / 3906,
       VAR_0, VAR_1, VAR_2);
  }
 }
}
