
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int* octet; } ;
struct eth_uni {int eu_valid; int eu_addrsel; TYPE_1__ eu_eth; } ;
struct e82545_softc {struct eth_uni* esc_uni; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct e82545_softc *VAR_0, int VAR_1)
{
 struct eth_uni *VAR_2;
 uint32_t VAR_3;
 int VAR_4;

 VAR_4 = VAR_1 >> 1;
 FUNC_0(VAR_4 < 15);

 VAR_2 = &VAR_0->esc_uni[VAR_4];

 if (VAR_1 & 0x1) {

  VAR_3 = (VAR_2->eu_valid << 31) |
    (VAR_2->eu_addrsel << 16) |
    (VAR_2->eu_eth.octet[5] << 8) |
    VAR_2->eu_eth.octet[4];
 } else {

  VAR_3 = (VAR_2->eu_eth.octet[3] << 24) |
    (VAR_2->eu_eth.octet[2] << 16) |
    (VAR_2->eu_eth.octet[1] << 8) |
    VAR_2->eu_eth.octet[0];
 }

 return (VAR_3);
}
