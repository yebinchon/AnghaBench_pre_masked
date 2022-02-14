
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {scalar_t__ current_speed; scalar_t__ crc_count; } ;
typedef TYPE_1__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

void FUNC_3(ide_drive_t *VAR_4)
{
 u8 VAR_5;

 FUNC_0(VAR_4);
 VAR_4->crc_count = 0;
 VAR_5 = VAR_4->current_speed;




 if (VAR_5 > VAR_2 && VAR_5 <= VAR_3)
  VAR_5--;
 else
  VAR_5 = VAR_0;
 FUNC_2(VAR_4, VAR_5);
 if (VAR_4->current_speed >= VAR_1)
  FUNC_1(VAR_4);
}
