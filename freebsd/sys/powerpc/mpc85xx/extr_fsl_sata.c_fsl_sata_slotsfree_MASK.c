
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * data_map; } ;
struct fsl_sata_slot {TYPE_2__ dma; int timeout; } ;
struct TYPE_3__ {int data_tag; } ;
struct fsl_sata_channel {TYPE_1__ dma; struct fsl_sata_slot* slot; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 struct fsl_sata_channel* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_1)
{
 struct fsl_sata_channel *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct fsl_sata_slot *VAR_4 = &VAR_2->slot[VAR_3];

  FUNC_1(&VAR_4->timeout);
  if (VAR_4->dma.data_map) {
   FUNC_0(VAR_2->dma.data_tag, VAR_4->dma.data_map);
   VAR_4->dma.data_map = ((void*)0);
  }
 }
}
