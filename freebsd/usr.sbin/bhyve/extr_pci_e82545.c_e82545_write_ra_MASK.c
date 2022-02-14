
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int* octet; } ;
struct eth_uni {int eu_valid; int eu_addrsel; TYPE_1__ eu_eth; } ;
struct e82545_softc {struct eth_uni* esc_uni; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct e82545_softc *VAR_1, int VAR_2, uint32_t VAR_3)
{
 struct eth_uni *VAR_4;
 int VAR_5;

 VAR_5 = VAR_2 >> 1;
 FUNC_0(VAR_5 < 15);

 VAR_4 = &VAR_1->esc_uni[VAR_5];

 if (VAR_2 & 0x1) {

  VAR_4->eu_valid = ((VAR_3 & VAR_0) == VAR_0);
  VAR_4->eu_addrsel = (VAR_3 >> 16) & 0x3;
  VAR_4->eu_eth.octet[5] = VAR_3 >> 8;
  VAR_4->eu_eth.octet[4] = VAR_3;
 } else {

  VAR_4->eu_eth.octet[3] = VAR_3 >> 24;
  VAR_4->eu_eth.octet[2] = VAR_3 >> 16;
  VAR_4->eu_eth.octet[1] = VAR_3 >> 8;
  VAR_4->eu_eth.octet[0] = VAR_3;
 }
}
