
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int index; } ;
struct nvkm_engine {TYPE_1__ subdev; } ;
 int FUNC_0 (int) ;

__attribute__((used)) static u32
FUNC_1(struct nvkm_engine *VAR_0)
{
 switch (VAR_0->subdev.index) {
 case 128 : return 0;
 case 132 : return 0x0210;
 case 134 : return 0x0230;
 case 133 : return 0x0240;
 case 131: return 0x0250;
 case 130 : return 0x0260;
 case 129 : return 0x0270;
 default:
  FUNC_0(1);
  return 0;
 }
}
