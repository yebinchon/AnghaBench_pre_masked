
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int ide_hwif_t ;
struct TYPE_5__ {scalar_t__ dma_mode; } ;
typedef TYPE_1__ ide_drive_t ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__ const) ;
 int FUNC_1 (TYPE_1__*,scalar_t__ const) ;

__attribute__((used)) static void FUNC_2(ide_hwif_t *VAR_1, ide_drive_t *VAR_2)
{
 const u8 VAR_3 = VAR_2->dma_mode;

 if (VAR_3 >= VAR_0)
  FUNC_1(VAR_2, VAR_3);
 else
  FUNC_0(VAR_2, VAR_3);
}
