
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; } ;
struct nvkm_engine {TYPE_1__ subdev; } ;






 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_engine *VAR_0)
{
 switch (VAR_0->subdev.index) {
 case 131:
 case 128 : return -1;
 case 130 : return 0x0000;
 case 129 : return 0x0060;
 default:
  FUNC_0(1);
  return -1;
 }
}
