
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int) ;

__attribute__((used)) static bool
FUNC_1(struct nvkm_device *VAR_0, u32 VAR_1, u32 VAR_2)
{
 switch (VAR_1) {
 case 0x190:
 case 0x1a0:
 case 0x1b0:
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 default:
  break;
 }
 return 0;
}
