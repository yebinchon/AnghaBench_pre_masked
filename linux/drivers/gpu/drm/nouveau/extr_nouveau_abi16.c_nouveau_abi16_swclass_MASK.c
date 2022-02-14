
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int family; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
s32
FUNC_0(struct nouveau_drm *VAR_4)
{
 switch (VAR_4->client.device.info.family) {
 case 129:
  return VAR_1;
 case 138:
 case 135:
 case 131:
 case 137:
  return VAR_2;
 case 130:
  return VAR_3;
 case 136:
 case 134:
 case 133:
 case 132:
 case 128:
  return VAR_0;
 }

 return 0x0000;
}
