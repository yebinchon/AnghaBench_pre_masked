
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int eeprom_version; int template_version; int* mac_addr; } ;
typedef TYPE_1__ ar9300_eeprom_t ;


 int FUNC_0 (char*,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(const uint16_t *VAR_0)
{
 const ar9300_eeprom_t *VAR_1 = (ar9300_eeprom_t *) VAR_0;

 FUNC_0("| Version: %d, Template: %d, MAC: %02x:%02x:%02x:%02x:%02x:%02x |\n",
     VAR_1->eeprom_version,
     VAR_1->template_version,
     VAR_1->mac_addr[0],
     VAR_1->mac_addr[1],
     VAR_1->mac_addr[2],
     VAR_1->mac_addr[3],
     VAR_1->mac_addr[4],
     VAR_1->mac_addr[5]);
}
