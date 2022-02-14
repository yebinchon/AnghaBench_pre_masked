
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_11__ {scalar_t__ kind; int * timings; } ;
typedef TYPE_2__ pmac_ide_hwif_t ;
struct TYPE_10__ {int parent; } ;
struct TYPE_12__ {TYPE_1__ gendev; } ;
typedef TYPE_3__ ide_hwif_t ;
struct TYPE_13__ {int dn; size_t dma_mode; } ;
typedef TYPE_4__ ide_drive_t ;


 size_t const VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,int *,int *,size_t const) ;
 int FUNC_3 (int *,size_t const) ;
 int FUNC_4 (int *,int *,size_t const) ;
 int FUNC_5 (int *,int *,size_t const) ;

__attribute__((used)) static void FUNC_6(ide_hwif_t *VAR_5, ide_drive_t *VAR_6)
{
 pmac_ide_hwif_t *VAR_7 = FUNC_0(VAR_5->gendev.parent);
 int VAR_8 = 0;
 u32 *VAR_9, *VAR_10, VAR_11[2];
 u8 VAR_12 = VAR_6->dn & 1;
 const u8 VAR_13 = VAR_6->dma_mode;

 VAR_9 = &VAR_7->timings[VAR_12];
 VAR_10 = &VAR_7->timings[VAR_12+2];


 VAR_11[0] = *VAR_9;
 VAR_11[1] = *VAR_10;

 if (VAR_13 >= VAR_0) {
  if (VAR_7->kind == VAR_2)
   VAR_8 = FUNC_3(&VAR_11[0], VAR_13);
  else if (VAR_7->kind == VAR_4
    || VAR_7->kind == VAR_1)
   VAR_8 = FUNC_4(&VAR_11[0], &VAR_11[1], VAR_13);
  else if (VAR_7->kind == VAR_3)
   VAR_8 = FUNC_5(&VAR_11[0], &VAR_11[1], VAR_13);
  else
   VAR_8 = -1;
 } else
  FUNC_2(VAR_6, VAR_7->kind, &VAR_11[0], &VAR_11[1], VAR_13);

 if (VAR_8)
  return;


 *VAR_9 = VAR_11[0];
 *VAR_10 = VAR_11[1];

 FUNC_1(VAR_6);
}
