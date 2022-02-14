
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int octet; } ;
struct e82545_softc {int esc_LEDCTL; int esc_PBA; int eeprom_control; int esc_ITR; int esc_RXDCTL; scalar_t__ esc_TXDCTL; scalar_t__ esc_TDH; scalar_t__ esc_TDHr; scalar_t__ esc_TDT; scalar_t__ esc_TDLEN; scalar_t__ esc_TCTL; scalar_t__ esc_TXCW; int * esc_txdesc; scalar_t__ esc_tdba; scalar_t__ esc_TADV; scalar_t__ esc_TIDV; scalar_t__ esc_AIT; scalar_t__ esc_TIPG; scalar_t__ esc_TDBAH; scalar_t__ esc_TDBAL; scalar_t__ esc_RXCSUM; scalar_t__ esc_RADV; scalar_t__ esc_RDTR; scalar_t__ esc_RDT; scalar_t__ esc_RDH; scalar_t__ esc_RDLEN; scalar_t__ esc_FCRTH; scalar_t__ esc_FCRTL; scalar_t__ esc_RCTL; scalar_t__ esc_RDBAH; scalar_t__ esc_RDBAL; TYPE_3__* esc_uni; TYPE_2__ esc_mac; TYPE_3__* esc_fmcast; TYPE_3__* esc_fvlan; scalar_t__ esc_IMC; scalar_t__ esc_IMS; scalar_t__ esc_ICS; scalar_t__ esc_ICR; int nvm_bits; int nvm_mode; scalar_t__ nvm_opaddr; scalar_t__ esc_FCTTV; scalar_t__ esc_VET; scalar_t__ esc_FCT; scalar_t__ esc_FCAH; scalar_t__ esc_FCAL; int esc_pi; scalar_t__ esc_irq_asserted; } ;
struct TYPE_4__ {int octet; } ;
struct TYPE_6__ {int eu_valid; TYPE_1__ eu_eth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct e82545_softc*) ;
 int FUNC_1 (struct e82545_softc*) ;
 int FUNC_2 (struct e82545_softc*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct e82545_softc *VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_5);
 FUNC_2(VAR_5);


 if (VAR_5->esc_irq_asserted)
  FUNC_5(VAR_5->esc_pi);


 if (!VAR_6) {
  VAR_5->esc_FCAL = 0;
  VAR_5->esc_FCAH = 0;
  VAR_5->esc_FCT = 0;
  VAR_5->esc_VET = 0;
  VAR_5->esc_FCTTV = 0;
 }
 VAR_5->esc_LEDCTL = 0x07061302;
 VAR_5->esc_PBA = 0x00100030;


 VAR_5->nvm_opaddr = 0;
 VAR_5->nvm_mode = VAR_2;
 VAR_5->nvm_bits = VAR_3;
 VAR_5->eeprom_control = VAR_0 | VAR_1;
 FUNC_0(VAR_5);


 VAR_5->esc_ICR = 0;
 VAR_5->esc_ITR = 250;
 VAR_5->esc_ICS = 0;
 VAR_5->esc_IMS = 0;
 VAR_5->esc_IMC = 0;


 if (!VAR_6) {
  FUNC_4(VAR_5->esc_fvlan, 0, sizeof(VAR_5->esc_fvlan));
  FUNC_4(VAR_5->esc_fmcast, 0, sizeof(VAR_5->esc_fmcast));
  FUNC_4(VAR_5->esc_uni, 0, sizeof(VAR_5->esc_uni));


  VAR_5->esc_uni[0].eu_valid = 1;
  FUNC_3(VAR_5->esc_uni[0].eu_eth.octet, VAR_5->esc_mac.octet,
      VAR_4);
 } else {

  for (VAR_7 = 0; VAR_7 < 16; VAR_7++)
   VAR_5->esc_uni[VAR_7].eu_valid = 0;
 }


 if (!VAR_6) {
  VAR_5->esc_RDBAL = 0;
  VAR_5->esc_RDBAH = 0;
 }
 VAR_5->esc_RCTL = 0;
 VAR_5->esc_FCRTL = 0;
 VAR_5->esc_FCRTH = 0;
 VAR_5->esc_RDLEN = 0;
 VAR_5->esc_RDH = 0;
 VAR_5->esc_RDT = 0;
 VAR_5->esc_RDTR = 0;
 VAR_5->esc_RXDCTL = (1 << 24) | (1 << 16);
 VAR_5->esc_RADV = 0;
 VAR_5->esc_RXCSUM = 0;


 if (!VAR_6) {
  VAR_5->esc_TDBAL = 0;
  VAR_5->esc_TDBAH = 0;
  VAR_5->esc_TIPG = 0;
  VAR_5->esc_AIT = 0;
  VAR_5->esc_TIDV = 0;
  VAR_5->esc_TADV = 0;
 }
 VAR_5->esc_tdba = 0;
 VAR_5->esc_txdesc = ((void*)0);
 VAR_5->esc_TXCW = 0;
 VAR_5->esc_TCTL = 0;
 VAR_5->esc_TDLEN = 0;
 VAR_5->esc_TDT = 0;
 VAR_5->esc_TDHr = VAR_5->esc_TDH = 0;
 VAR_5->esc_TXDCTL = 0;
}
