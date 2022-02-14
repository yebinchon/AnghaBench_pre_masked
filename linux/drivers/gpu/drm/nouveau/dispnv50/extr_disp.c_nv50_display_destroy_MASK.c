
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv50_disp {scalar_t__ sync; int core; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int * priv; } ;


 int FUNC_0 (struct nv50_disp*) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_1__* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *) ;
 struct nv50_disp* FUNC_6 (struct drm_device*) ;

__attribute__((used)) static void
FUNC_7(struct drm_device *VAR_0)
{
 struct nv50_disp *VAR_1 = FUNC_6(VAR_0);

 FUNC_5(&VAR_1->core);

 FUNC_2(VAR_1->sync);
 if (VAR_1->sync)
  FUNC_3(VAR_1->sync);
 FUNC_1(((void*)0), &VAR_1->sync);

 FUNC_4(VAR_0)->priv = ((void*)0);
 FUNC_0(VAR_1);
}
