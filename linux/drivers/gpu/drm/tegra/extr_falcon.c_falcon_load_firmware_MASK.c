
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct firmware {int size; } ;
struct TYPE_4__ {int vaddr; int paddr; int size; struct firmware* firmware; } ;
struct falcon {TYPE_2__ firmware; TYPE_1__* ops; int dev; } ;
struct TYPE_3__ {int (* free ) (struct falcon*,int ,int ,int ) ;int (* alloc ) (struct falcon*,int ,int *) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct falcon*,struct firmware const*) ;
 int FUNC_4 (struct falcon*) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct falcon*,int ,int *) ;
 int FUNC_7 (struct falcon*,int ,int ,int ) ;

int FUNC_8(struct falcon *VAR_0)
{
 const struct firmware *VAR_1 = VAR_0->firmware.firmware;
 int VAR_2;

 VAR_0->firmware.size = VAR_1->size;


 VAR_0->firmware.vaddr = VAR_0->ops->alloc(VAR_0, VAR_1->size,
          &VAR_0->firmware.paddr);
 if (FUNC_0(VAR_0->firmware.vaddr)) {
  FUNC_2(VAR_0->dev, "DMA memory mapping failed\n");
  return FUNC_1(VAR_0->firmware.vaddr);
 }


 FUNC_3(VAR_0, VAR_1);


 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2 < 0) {
  FUNC_2(VAR_0->dev, "failed to parse firmware image\n");
  goto err_setup_firmware_image;
 }

 FUNC_5(VAR_1);
 VAR_0->firmware.firmware = ((void*)0);

 return 0;

err_setup_firmware_image:
 VAR_0->ops->free(VAR_0, VAR_0->firmware.size,
     VAR_0->firmware.paddr, VAR_0->firmware.vaddr);

 return VAR_2;
}
