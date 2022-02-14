
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_3__ {scalar_t__ Size; } ;
struct TYPE_4__ {TYPE_1__ ring; } ;
typedef TYPE_2__ drm_i810_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_5)
{
 drm_i810_private_t *VAR_6 = VAR_5->dev_private;
 VAR_4;

 FUNC_3(VAR_5);

 FUNC_1(4);
 FUNC_2(VAR_3 | VAR_2 | VAR_1);
 FUNC_2(VAR_0);
 FUNC_2(0);
 FUNC_2(0);
 FUNC_0();

 FUNC_4(VAR_5, VAR_6->ring.Size - 8);
}
