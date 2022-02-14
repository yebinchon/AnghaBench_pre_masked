
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct resource {unsigned long end; unsigned long start; } ;
struct TYPE_5__ {unsigned long size; scalar_t__ paddr; int lock; int mm; } ;
struct msm_drm_private {TYPE_1__ vram; } ;
struct drm_device {TYPE_2__* dev; struct msm_drm_private* dev_private; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int of_node; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_2 (char*,unsigned long,...) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 void* FUNC_3 (TYPE_2__*,unsigned long,scalar_t__*,int ,unsigned long) ;
 int FUNC_4 (int *,int ,unsigned long) ;
 unsigned long FUNC_5 (int ,int *) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct device_node*,int ,struct resource*) ;
 int FUNC_8 (struct device_node*) ;
 struct device_node* FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_11(struct drm_device *VAR_6)
{
 struct msm_drm_private *VAR_7 = VAR_6->dev_private;
 struct device_node *VAR_8;
 unsigned long VAR_9 = 0;
 int VAR_10 = 0;
 VAR_8 = FUNC_9(VAR_6->dev->of_node, "memory-region", 0);
 if (VAR_8) {
  struct resource VAR_11;
  VAR_10 = FUNC_7(VAR_8, 0, &VAR_11);
  FUNC_8(VAR_8);
  if (VAR_10)
   return VAR_10;
  VAR_9 = VAR_11.end - VAR_11.start;
  FUNC_2("using VRAM carveout: %lx@%pa\n", VAR_9, &VAR_11.start);





 } else if (!FUNC_6(VAR_6)) {
  FUNC_2("using %s VRAM carveout\n", VAR_5);
  VAR_9 = FUNC_5(VAR_5, ((void*)0));
 }

 if (VAR_9) {
  unsigned long VAR_12 = 0;
  void *VAR_13;

  VAR_7->vram.size = VAR_9;

  FUNC_4(&VAR_7->vram.mm, 0, (VAR_9 >> VAR_4) - 1);
  FUNC_10(&VAR_7->vram.lock);

  VAR_12 |= VAR_0;
  VAR_12 |= VAR_1;




  VAR_13 = FUNC_3(VAR_6->dev, VAR_9,
    &VAR_7->vram.paddr, VAR_3, VAR_12);
  if (!VAR_13) {
   FUNC_0(VAR_6->dev, "failed to allocate VRAM\n");
   VAR_7->vram.paddr = 0;
   return -VAR_2;
  }

  FUNC_1(VAR_6->dev, "VRAM: %08x->%08x\n",
    (uint32_t)VAR_7->vram.paddr,
    (uint32_t)(VAR_7->vram.paddr + VAR_9));
 }

 return VAR_10;
}
