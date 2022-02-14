
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_engine {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct gf100_fifo {TYPE_3__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nvkm_engine* FUNC_0 (struct nvkm_device*,int ) ;

__attribute__((used)) static inline struct nvkm_engine *
FUNC_1(struct gf100_fifo *VAR_6, u32 VAR_7)
{
 struct nvkm_device *VAR_8 = VAR_6->base.engine.subdev.device;

 switch (VAR_7) {
 case 0: VAR_7 = VAR_2; break;
 case 1: VAR_7 = VAR_5; break;
 case 2: VAR_7 = VAR_4; break;
 case 3: VAR_7 = VAR_3; break;
 case 4: VAR_7 = VAR_0; break;
 case 5: VAR_7 = VAR_1; break;
 default:
  return ((void*)0);
 }

 return FUNC_0(VAR_8, VAR_7);
}
