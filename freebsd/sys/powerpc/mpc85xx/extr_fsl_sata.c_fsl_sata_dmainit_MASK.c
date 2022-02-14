
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_sata_dc_cb_args {int maddr; scalar_t__ error; } ;
struct TYPE_2__ {int work; int data_tag; int work_bus; int work_map; int work_tag; } ;
struct fsl_sata_channel {TYPE_1__ dma; int mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,struct fsl_sata_dc_cb_args*,int ) ;
 scalar_t__ FUNC_2 (int ,void**,int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int * VAR_8 ;
 struct fsl_sata_channel* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_8(device_t VAR_10)
{
 struct fsl_sata_channel *VAR_11 = FUNC_5(VAR_10);
 struct fsl_sata_dc_cb_args VAR_12;


 if (FUNC_0(FUNC_4(VAR_10), 1024, 0,
     VAR_2, VAR_1,
     ((void*)0), ((void*)0), VAR_6, 1, VAR_6,
     0, ((void*)0), ((void*)0), &VAR_11->dma.work_tag))
  goto error;
 if (FUNC_2(VAR_11->dma.work_tag, (void **)&VAR_11->dma.work,
     VAR_0, &VAR_11->dma.work_map))
  goto error;
 if (FUNC_1(VAR_11->dma.work_tag, VAR_11->dma.work_map, VAR_11->dma.work,
     VAR_6, VAR_9, &VAR_12, 0) || VAR_12.error) {
  FUNC_3(VAR_11->dma.work_tag, VAR_11->dma.work, VAR_11->dma.work_map);
  goto error;
 }
 VAR_11->dma.work_bus = VAR_12.maddr;

 if (FUNC_0(FUNC_4(VAR_10), 4, 0,
     VAR_2, VAR_1,
     ((void*)0), ((void*)0), VAR_3,
     VAR_5 - 1, VAR_4,
     0, VAR_8, &VAR_11->mtx, &VAR_11->dma.data_tag)) {
  goto error;
 }
 if (VAR_7)
  FUNC_6(VAR_10, "work area: %p\n", VAR_11->dma.work);
 return;

error:
 FUNC_6(VAR_10, "WARNING - DMA initialization failed\n");
 FUNC_7(VAR_10);
}
