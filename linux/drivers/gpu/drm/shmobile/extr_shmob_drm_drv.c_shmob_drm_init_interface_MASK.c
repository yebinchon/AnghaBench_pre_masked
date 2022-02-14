
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct shmob_drm_device {int ldmt1r; TYPE_2__* pdata; int dev; } ;
struct TYPE_3__ {size_t interface; } ;
struct TYPE_4__ {TYPE_1__ iface; } ;


 size_t FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,size_t) ;

__attribute__((used)) static int FUNC_2(struct shmob_drm_device *VAR_1)
{
 static const u32 VAR_2[] = {
  [141] = 160,
  [140] = 159,
  [146] = 165,
  [145] = 164,
  [144] = 163,
  [143] = 162,
  [142] = 161,
  [128] = 147,
  [133] = 166 | 152,
  [132] = 166 | 151,
  [131] = 166 | 150,
  [130] = 166 | 149,
  [129] = 166 | 148,
  [139] = 166 | 158,
  [138] = 166 | 157,
  [137] = 166 | 156,
  [136] = 166 | 155,
  [135] = 166 | 154,
  [134] = 166 | 153,
 };

 if (VAR_1->pdata->iface.interface >= FUNC_0(VAR_2)) {
  FUNC_1(VAR_1->dev, "invalid interface type %u\n",
   VAR_1->pdata->iface.interface);
  return -VAR_0;
 }

 VAR_1->ldmt1r = VAR_2[VAR_1->pdata->iface.interface];
 return 0;
}
