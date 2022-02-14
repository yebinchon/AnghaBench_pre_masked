
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_8__ {int * virtual_start; } ;
struct TYPE_9__ {int dma_low; scalar_t__ pci_buf; TYPE_1__ ring; } ;
typedef TYPE_2__ drm_via_private_t ;
struct TYPE_10__ {int size; int buf; } ;
typedef TYPE_3__ drm_via_cmdbuffer_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int * FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int *,int,struct drm_device*,int) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_4, drm_via_cmdbuffer_t *VAR_5)
{
 drm_via_private_t *VAR_6;
 uint32_t *VAR_7;
 int VAR_8;

 VAR_6 = (drm_via_private_t *) VAR_4->dev_private;

 if (VAR_6->ring.virtual_start == ((void*)0)) {
  FUNC_0("called without initializing AGP ring buffer.\n");
  return -VAR_1;
 }

 if (VAR_5->size > VAR_3)
  return -VAR_2;

 if (FUNC_1(VAR_6->pci_buf, VAR_5->buf, VAR_5->size))
  return -VAR_1;







 if ((VAR_8 =
      FUNC_6((uint32_t *) VAR_6->pci_buf,
           VAR_5->size, VAR_4, 1))) {
  return VAR_8;
 }

 VAR_7 = FUNC_3(VAR_6, (VAR_5->size < 0x100) ? 0x102 : VAR_5->size);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 FUNC_2(VAR_7, VAR_6->pci_buf, VAR_5->size);

 VAR_6->dma_low += VAR_5->size;






 if (VAR_5->size < 0x100)
  FUNC_5(VAR_6, (0x100 - VAR_5->size) >> 3);
 FUNC_4(VAR_6);

 return 0;
}
