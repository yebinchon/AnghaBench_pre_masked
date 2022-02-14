
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvkm_subdev {int device; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static u8
FUNC_1(struct nvkm_subdev *VAR_0)
{
 return (FUNC_0(VAR_0->device, 0x101000) & 0x0000003c) >> 2;
}
