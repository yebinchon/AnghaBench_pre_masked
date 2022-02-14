
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ide_hwif_t ;
struct TYPE_3__ {scalar_t__ pio_mode; } ;
typedef TYPE_1__ ide_drive_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(ide_hwif_t *VAR_2, ide_drive_t *VAR_3)
{
 unsigned long VAR_4;

 if (VAR_3->pio_mode >= VAR_0) {
  FUNC_0(&VAR_1, VAR_4);



  FUNC_2(1,0xc3);
  FUNC_2(0,0xa0);
  FUNC_1(&VAR_1, VAR_4);
 } else {



 }
}
