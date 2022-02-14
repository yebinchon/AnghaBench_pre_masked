
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct e82545_softc {int esc_ITR; int esc_ICS; int esc_IMC; int esc_IMS; } ;


 int FUNC_0 (char*,int,int) ;





 int FUNC_1 (struct e82545_softc*,int) ;
 int FUNC_2 (struct e82545_softc*,int) ;
 int FUNC_3 (struct e82545_softc*,int) ;

__attribute__((used)) static void
FUNC_4(struct e82545_softc *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{

 FUNC_0("intr_write: off %x, val %x\n\r", VAR_1, VAR_2);

 switch (VAR_1) {
 case 132:
  FUNC_2(VAR_0, VAR_2);
  break;
 case 128:
  VAR_0->esc_ITR = VAR_2;
  break;
 case 131:
  VAR_0->esc_ICS = VAR_2;
  FUNC_1(VAR_0, VAR_2);
  break;
 case 129:
  FUNC_3(VAR_0, VAR_2);
  break;
 case 130:
  VAR_0->esc_IMC = VAR_2;
  VAR_0->esc_IMS &= ~VAR_2;


  break;
 default:
  break;
 }
}
