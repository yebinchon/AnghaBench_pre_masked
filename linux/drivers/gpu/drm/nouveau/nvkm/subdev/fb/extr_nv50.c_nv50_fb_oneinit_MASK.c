
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_fb {int dummy; } ;
struct nvkm_device {int dev; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nv50_fb {int r100c08; scalar_t__ r100c08_page; TYPE_2__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct nv50_fb* FUNC_3 (struct nvkm_fb*) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_fb *VAR_5)
{
 struct nv50_fb *VAR_6 = FUNC_3(VAR_5);
 struct nvkm_device *VAR_7 = VAR_6->base.subdev.device;

 VAR_6->r100c08_page = FUNC_0(VAR_2 | VAR_4);
 if (VAR_6->r100c08_page) {
  VAR_6->r100c08 = FUNC_1(VAR_7->dev, VAR_6->r100c08_page, 0,
        VAR_3, VAR_0);
  if (FUNC_2(VAR_7->dev, VAR_6->r100c08))
   return -VAR_1;
 }

 return 0;
}
