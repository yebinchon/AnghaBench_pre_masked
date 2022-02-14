
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_channel {TYPE_2__* drm; } ;
struct TYPE_3__ {int handle; } ;
struct TYPE_4__ {TYPE_1__ ntfy; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct nouveau_channel*,int ) ;
 int FUNC_2 (struct nouveau_channel*,int) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_channel *VAR_1, u32 VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1, 4);
 if (VAR_3 == 0) {
  FUNC_0(VAR_1, VAR_0, 0x0000, 1);
  FUNC_1 (VAR_1, VAR_2);
  FUNC_0(VAR_1, VAR_0, 0x0180, 1);
  FUNC_1 (VAR_1, VAR_1->drm->ntfy.handle);
 }

 return VAR_3;
}
