
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
 case 134 : return 0;
 case 133 :
 case 131 : return 1;
 case 136 : return 2;
 case 128 :
 case 132: return 3;
 case 135:
 case 129 : return 4;
 case 137 :
 case 130 : return 5;
 default:
  FUNC_0(1);
  return 0;
 }
}
