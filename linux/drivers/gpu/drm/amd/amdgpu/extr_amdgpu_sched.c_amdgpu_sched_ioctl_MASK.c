
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int op; int ctx_id; int fd; int priority; } ;
union drm_amdgpu_sched {TYPE_1__ in; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_device {int dummy; } ;
typedef enum drm_sched_priority { ____Placeholder_drm_sched_priority } drm_sched_priority ;




 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct amdgpu_device*,int ,int ,int) ;
 int FUNC_2 (struct amdgpu_device*,int ,int) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct drm_device *VAR_2, void *VAR_3,
         struct drm_file *VAR_4)
{
 union drm_amdgpu_sched *VAR_5 = VAR_3;
 struct amdgpu_device *VAR_6 = VAR_2->dev_private;
 enum drm_sched_priority VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_5->in.priority);
 if (VAR_7 == VAR_0)
  return -VAR_1;

 switch (VAR_5->in.op) {
 case 128:
  VAR_8 = FUNC_2(VAR_6,
          VAR_5->in.fd,
          VAR_7);
  break;
 case 129:
  VAR_8 = FUNC_1(VAR_6,
          VAR_5->in.fd,
          VAR_5->in.ctx_id,
          VAR_7);
  break;
 default:
  FUNC_0("Invalid sched op specified: %d\n", VAR_5->in.op);
  VAR_8 = -VAR_1;
  break;
 }

 return VAR_8;
}
