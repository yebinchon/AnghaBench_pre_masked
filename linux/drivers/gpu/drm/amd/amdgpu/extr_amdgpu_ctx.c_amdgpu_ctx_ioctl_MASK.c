
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ctx_id; } ;
struct TYPE_7__ {TYPE_2__ alloc; } ;
struct TYPE_5__ {int op; int priority; int ctx_id; } ;
union drm_amdgpu_ctx {TYPE_3__ out; TYPE_1__ in; } ;
typedef int uint32_t ;
struct drm_file {struct amdgpu_fpriv* driver_priv; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_fpriv {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef enum drm_sched_priority { ____Placeholder_drm_sched_priority } drm_sched_priority ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_fpriv*,struct drm_file*,int,int *) ;
 int FUNC_1 (struct amdgpu_fpriv*,int ) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_fpriv*,int ,TYPE_3__*) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_fpriv*,int ,TYPE_3__*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct drm_device *VAR_3, void *VAR_4,
       struct drm_file *VAR_5)
{
 int VAR_6;
 uint32_t VAR_7;
 enum drm_sched_priority VAR_8;

 union drm_amdgpu_ctx *VAR_9 = VAR_4;
 struct amdgpu_device *VAR_10 = VAR_3->dev_private;
 struct amdgpu_fpriv *VAR_11 = VAR_5->driver_priv;

 VAR_6 = 0;
 VAR_7 = VAR_9->in.ctx_id;
 VAR_8 = FUNC_4(VAR_9->in.priority);



 if (VAR_8 == VAR_0)
  VAR_8 = VAR_1;

 switch (VAR_9->in.op) {
 case 131:
  VAR_6 = FUNC_0(VAR_10, VAR_11, VAR_5, VAR_8, &VAR_7);
  VAR_9->out.alloc.ctx_id = VAR_7;
  break;
 case 130:
  VAR_6 = FUNC_1(VAR_11, VAR_7);
  break;
 case 129:
  VAR_6 = FUNC_2(VAR_10, VAR_11, VAR_7, &VAR_9->out);
  break;
 case 128:
  VAR_6 = FUNC_3(VAR_10, VAR_11, VAR_7, &VAR_9->out);
  break;
 default:
  return -VAR_2;
 }

 return VAR_6;
}
