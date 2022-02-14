
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_2__ {int modal_header_5g; int modal_header_2g; } ;
typedef TYPE_1__ ar9300_eeprom_t ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char**) ;

int
FUNC_9(int VAR_0, char *VAR_1[])
{
 uint16_t *VAR_2 = ((void*)0);
 const ar9300_eeprom_t *VAR_3;

 VAR_2 = FUNC_0(4096, sizeof(int16_t));

 if (VAR_0 < 2)
  FUNC_8(VAR_1);

 FUNC_6(VAR_1[1], VAR_2);
 VAR_3 = (ar9300_eeprom_t *) VAR_2;

 FUNC_2(VAR_2);
 FUNC_1(VAR_2);

 FUNC_7("\n2GHz modal:\n");
 FUNC_3(&VAR_3->modal_header_2g);

 FUNC_7("\n5GHz modal:\n");
 FUNC_3(&VAR_3->modal_header_5g);

 FUNC_5(VAR_2);
 FUNC_4(0);
}
