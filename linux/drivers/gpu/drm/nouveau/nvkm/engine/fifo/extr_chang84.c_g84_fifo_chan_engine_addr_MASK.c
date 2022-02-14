
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
 case 136:
 case 129 : return -1;
 case 135 : return 0x0020;
 case 128 :
 case 133: return 0x0040;
 case 134 :
 case 132 : return 0x0060;
 case 139 :
 case 131 : return 0x0080;
 case 137:
 case 130 : return 0x00a0;
 case 138 : return 0x00c0;
 default:
  FUNC_0(1);
  return -1;
 }
}
