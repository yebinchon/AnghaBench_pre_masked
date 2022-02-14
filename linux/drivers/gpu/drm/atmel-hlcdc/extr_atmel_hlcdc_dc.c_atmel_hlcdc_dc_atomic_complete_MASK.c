
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {struct atmel_hlcdc_dc* dev_private; } ;
struct drm_atomic_state {int dummy; } ;
struct atmel_hlcdc_dc_commit {struct drm_atomic_state* state; struct drm_device* dev; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int pending; TYPE_2__ wait; } ;
struct atmel_hlcdc_dc {TYPE_1__ commit; } ;


 int FUNC_0 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_1 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_2 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_3 (struct drm_device*,struct drm_atomic_state*,int ) ;
 int FUNC_4 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_5 (struct drm_atomic_state*) ;
 int FUNC_6 (struct atmel_hlcdc_dc_commit*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_10(struct atmel_hlcdc_dc_commit *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct atmel_hlcdc_dc *VAR_2 = VAR_1->dev_private;
 struct drm_atomic_state *VAR_3 = VAR_0->state;


 FUNC_1(VAR_1, VAR_3);
 FUNC_3(VAR_1, VAR_3, 0);
 FUNC_2(VAR_1, VAR_3);

 FUNC_4(VAR_1, VAR_3);

 FUNC_0(VAR_1, VAR_3);

 FUNC_5(VAR_3);


 FUNC_7(&VAR_2->commit.wait.lock);
 VAR_2->commit.pending = 0;
 FUNC_9(&VAR_2->commit.wait);
 FUNC_8(&VAR_2->commit.wait.lock);

 FUNC_6(VAR_0);
}
