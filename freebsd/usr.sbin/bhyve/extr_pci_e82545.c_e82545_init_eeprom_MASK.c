
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {scalar_t__* octet; } ;
struct e82545_softc {int* eeprom_data; TYPE_1__ esc_mac; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;

__attribute__((used)) static void
FUNC_1(struct e82545_softc *VAR_10)
{
 uint16_t VAR_11, VAR_12;


 VAR_10->eeprom_data[VAR_5] = ((uint16_t)VAR_10->esc_mac.octet[0]) |
  (((uint16_t)VAR_10->esc_mac.octet[1]) << 8);
 VAR_10->eeprom_data[VAR_5+1] = ((uint16_t)VAR_10->esc_mac.octet[2]) |
  (((uint16_t)VAR_10->esc_mac.octet[3]) << 8);
 VAR_10->eeprom_data[VAR_5+2] = ((uint16_t)VAR_10->esc_mac.octet[4]) |
  (((uint16_t)VAR_10->esc_mac.octet[5]) << 8);


 VAR_10->eeprom_data[VAR_6] = VAR_1;
 VAR_10->eeprom_data[VAR_7] = VAR_2;
 VAR_10->eeprom_data[VAR_4] = VAR_0;
 VAR_10->eeprom_data[VAR_9] = VAR_2;


        VAR_11 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_11 += VAR_10->eeprom_data[VAR_12];
 }
 VAR_11 = VAR_8 - VAR_11;
 VAR_10->eeprom_data[VAR_3] = VAR_11;
 FUNC_0("eeprom checksum: 0x%x\r\n", VAR_11);
}
