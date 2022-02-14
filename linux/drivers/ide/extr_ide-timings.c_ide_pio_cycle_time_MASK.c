
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ide_timing {int cycle; } ;
struct TYPE_3__ {int* id; } ;
typedef TYPE_1__ ide_drive_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;
 struct ide_timing* FUNC_2 (scalar_t__) ;

u16 FUNC_3(ide_drive_t *VAR_4, u8 VAR_5)
{
 u16 *VAR_6 = VAR_4->id;
 struct ide_timing *VAR_7 = FUNC_2(VAR_3 + VAR_5);
 u16 VAR_8 = 0;

 if (VAR_6[VAR_2] & 2) {
  if (FUNC_0(VAR_4->id))
   VAR_8 = VAR_6[VAR_1];
  else
   VAR_8 = VAR_6[VAR_0];


  if (VAR_5 < 3 && VAR_8 < VAR_7->cycle)
   VAR_8 = 0;


  if (VAR_5 > 4 && FUNC_1(VAR_6))
   VAR_8 = 0;
 }

 return VAR_8 ? VAR_8 : VAR_7->cycle;
}
