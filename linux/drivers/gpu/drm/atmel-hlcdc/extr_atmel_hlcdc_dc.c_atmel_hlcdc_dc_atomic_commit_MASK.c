
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {struct atmel_hlcdc_dc* dev_private; } ;
struct drm_atomic_state {int dummy; } ;
struct atmel_hlcdc_dc_commit {int work; struct drm_atomic_state* state; struct drm_device* dev; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int pending; TYPE_2__ wait; } ;
struct atmel_hlcdc_dc {int wq; TYPE_1__ commit; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct atmel_hlcdc_dc_commit*) ;
 int VAR_2 ;
 int FUNC_3 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_4 (struct drm_device*,struct drm_atomic_state*) ;
 scalar_t__ FUNC_5 (struct drm_atomic_state*,int) ;
 int FUNC_6 (struct drm_atomic_state*) ;
 int FUNC_7 (struct atmel_hlcdc_dc_commit*) ;
 struct atmel_hlcdc_dc_commit* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__,int) ;

__attribute__((used)) static int FUNC_13(struct drm_device *VAR_3,
     struct drm_atomic_state *VAR_4,
     bool VAR_5)
{
 struct atmel_hlcdc_dc *VAR_6 = VAR_3->dev_private;
 struct atmel_hlcdc_dc_commit *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_3, VAR_4);
 if (VAR_8)
  return VAR_8;


 VAR_7 = FUNC_8(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto error;
 }

 FUNC_1(&VAR_7->work, VAR_2);
 VAR_7->dev = VAR_3;
 VAR_7->state = VAR_4;

 FUNC_10(&VAR_6->commit.wait.lock);
 VAR_8 = FUNC_12(VAR_6->commit.wait,
           !VAR_6->commit.pending);
 if (VAR_8 == 0)
  VAR_6->commit.pending = 1;
 FUNC_11(&VAR_6->commit.wait.lock);

 if (VAR_8)
  goto err_free;


 FUNC_0(FUNC_5(VAR_4, 0) < 0);


 FUNC_6(VAR_4);
 if (VAR_5)
  FUNC_9(VAR_6->wq, &VAR_7->work);
 else
  FUNC_2(VAR_7);

 return 0;

err_free:
 FUNC_7(VAR_7);
error:
 FUNC_3(VAR_3, VAR_4);
 return VAR_8;
}
