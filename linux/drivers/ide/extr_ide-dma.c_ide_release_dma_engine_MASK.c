
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prd_max_nents; int prd_ent_size; int * dmatable_cpu; int dmatable_dma; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int FUNC_0 (int ,int,int *,int ) ;

void FUNC_1(ide_hwif_t *VAR_0)
{
 if (VAR_0->dmatable_cpu) {
  int VAR_1 = VAR_0->prd_max_nents * VAR_0->prd_ent_size;

  FUNC_0(VAR_0->dev, VAR_1,
      VAR_0->dmatable_cpu, VAR_0->dmatable_dma);
  VAR_0->dmatable_cpu = ((void*)0);
 }
}
