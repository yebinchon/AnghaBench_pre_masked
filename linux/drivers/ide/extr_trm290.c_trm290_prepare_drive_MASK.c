
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int select_data; int channel; scalar_t__ config_data; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {int dev_flags; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5 (ide_drive_t *VAR_1, unsigned int VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_1->hwif;
 u16 VAR_4 = 0;
 unsigned long VAR_5;


 VAR_4 = VAR_2 ? (0x21 | 0x82) : (0x21 & ~0x82);

 FUNC_2(VAR_5);

 if (VAR_4 != VAR_3->select_data) {
  VAR_3->select_data = VAR_4;

  FUNC_3(0x51 | (VAR_3->channel << 3), VAR_3->config_data + 1);
  FUNC_4(VAR_4 & 0xff, VAR_3->config_data);
 }


 if (VAR_1->dev_flags & VAR_0) {
  VAR_4 = FUNC_0(VAR_3->config_data + 3);
  VAR_4 &= 0x13;
  VAR_4 &= ~(1 << VAR_3->channel);
  FUNC_4(VAR_4, VAR_3->config_data + 3);
 }

 FUNC_1(VAR_5);
}
