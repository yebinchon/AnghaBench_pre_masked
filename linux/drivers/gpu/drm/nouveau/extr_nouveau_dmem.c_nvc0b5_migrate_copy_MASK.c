
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nouveau_drm {TYPE_2__* dmem; } ;
struct nouveau_channel {int dummy; } ;
typedef enum nouveau_aper { ____Placeholder_nouveau_aper } nouveau_aper ;
struct TYPE_3__ {struct nouveau_channel* chan; } ;
struct TYPE_4__ {TYPE_1__ migrate; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int,int) ;
 int FUNC_1 (struct nouveau_channel*,int ,int,int) ;
 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int FUNC_2 (struct nouveau_channel*,int) ;
 int VAR_3 ;
 int FUNC_3 (struct nouveau_channel*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_drm *VAR_4, u64 VAR_5,
      enum nouveau_aper VAR_6, u64 VAR_7,
      enum nouveau_aper VAR_8, u64 VAR_9)
{
 struct nouveau_channel *VAR_10 = VAR_4->dmem->migrate.chan;
 u32 VAR_11 = (1 << 9) |
    (1 << 8) |
    (1 << 7) |
    (1 << 2) |
    (2 << 0) ;
 int VAR_12;

 VAR_12 = FUNC_3(VAR_10, 13);
 if (VAR_12)
  return VAR_12;

 if (VAR_8 != VAR_1) {
  switch (VAR_8) {
  case 128:
   FUNC_0(VAR_10, VAR_2, 0x0260, 0);
   break;
  case 129:
   FUNC_0(VAR_10, VAR_2, 0x0260, 1);
   break;
  default:
   return -VAR_0;
  }
  VAR_11 |= 0x00001000;
 }

 if (VAR_6 != VAR_1) {
  switch (VAR_6) {
  case 128:
   FUNC_0(VAR_10, VAR_2, 0x0264, 0);
   break;
  case 129:
   FUNC_0(VAR_10, VAR_2, 0x0264, 1);
   break;
  default:
   return -VAR_0;
  }
  VAR_11 |= 0x00002000;
 }

 FUNC_1(VAR_10, VAR_2, 0x0400, 8);
 FUNC_2 (VAR_10, FUNC_5(VAR_9));
 FUNC_2 (VAR_10, FUNC_4(VAR_9));
 FUNC_2 (VAR_10, FUNC_5(VAR_7));
 FUNC_2 (VAR_10, FUNC_4(VAR_7));
 FUNC_2 (VAR_10, VAR_3);
 FUNC_2 (VAR_10, VAR_3);
 FUNC_2 (VAR_10, VAR_3);
 FUNC_2 (VAR_10, VAR_5);
 FUNC_1(VAR_10, VAR_2, 0x0300, 1);
 FUNC_2 (VAR_10, VAR_11);
 return 0;
}
