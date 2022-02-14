
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int* id; int mult_req; int special_flags; } ;
typedef TYPE_1__ ide_drive_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(ide_drive_t *VAR_3)
{
 u16 *VAR_4 = VAR_3->id;
 u8 VAR_5 = VAR_4[VAR_0] & 0xff;

 if (VAR_5) {
  if ((VAR_5 / 2) > 1)
   VAR_4[VAR_1] = VAR_5 | 0x100;
  else
   VAR_4[VAR_1] &= ~0x1ff;

  VAR_3->mult_req = VAR_4[VAR_1] & 0xff;

  if (VAR_3->mult_req)
   VAR_3->special_flags |= VAR_2;
 }
}
