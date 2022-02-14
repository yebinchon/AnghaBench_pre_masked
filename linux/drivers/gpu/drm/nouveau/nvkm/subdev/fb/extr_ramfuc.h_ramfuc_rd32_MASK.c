
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ramfuc_reg {scalar_t__ sequence; int data; int addr; } ;
struct ramfuc {scalar_t__ sequence; TYPE_2__* fb; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;


 int FUNC_0 (struct nvkm_device*,int ) ;

__attribute__((used)) static inline u32
FUNC_1(struct ramfuc *VAR_0, struct ramfuc_reg *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->fb->subdev.device;
 if (VAR_1->sequence != VAR_0->sequence)
  VAR_1->data = FUNC_0(VAR_2, VAR_1->addr);
 return VAR_1->data;
}
