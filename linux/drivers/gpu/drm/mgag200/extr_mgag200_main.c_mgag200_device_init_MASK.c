
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mga_device {int num_crtc; int has_sdram; int* bpp_shifts; int unique_rev_id; int * rmmio; int rmmio_size; int rmmio_base; TYPE_1__* dev; int type; } ;
struct drm_device {int pdev; struct mga_device* dev_private; } ;
struct TYPE_2__ {int dev; int pdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct mga_device*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (struct mga_device*) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int * FUNC_8 (int ,int,int ) ;

__attribute__((used)) static int FUNC_9(struct drm_device *VAR_2,
          uint32_t VAR_3)
{
 struct mga_device *VAR_4 = VAR_2->dev_private;
 int VAR_5, VAR_6;

 VAR_4->type = VAR_3;


 VAR_4->num_crtc = 1;

 FUNC_5(VAR_2->pdev, VAR_1, &VAR_6);
 VAR_4->has_sdram = !(VAR_6 & (1 << 14));


 VAR_4->rmmio_base = FUNC_7(VAR_4->dev->pdev, 1);
 VAR_4->rmmio_size = FUNC_6(VAR_4->dev->pdev, 1);

 if (!FUNC_3(VAR_4->dev->dev, VAR_4->rmmio_base, VAR_4->rmmio_size,
    "mgadrmfb_mmio")) {
  FUNC_0("can't reserve mmio registers\n");
  return -VAR_0;
 }

 VAR_4->rmmio = FUNC_8(VAR_2->pdev, 1, 0);
 if (VAR_4->rmmio == ((void*)0))
  return -VAR_0;


 if (FUNC_1(VAR_4))
  VAR_4->unique_rev_id = FUNC_2(0x1e24);

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_4->bpp_shifts[0] = 0;
 VAR_4->bpp_shifts[1] = 1;
 VAR_4->bpp_shifts[2] = 0;
 VAR_4->bpp_shifts[3] = 2;
 return 0;
}
