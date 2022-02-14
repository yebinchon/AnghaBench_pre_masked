
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union drm_amdgpu_cs {int dummy; } drm_amdgpu_cs ;
struct drm_file {int dummy; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_device {int accel_working; } ;
struct amdgpu_cs_parser {TYPE_1__* job; struct drm_file* filp; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int num_ibs; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_cs_parser*) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_cs_parser*) ;
 int FUNC_3 (struct amdgpu_cs_parser*,void*) ;
 int FUNC_4 (struct amdgpu_cs_parser*,int,int) ;
 int FUNC_5 (struct amdgpu_cs_parser*,void*) ;
 int FUNC_6 (struct amdgpu_cs_parser*,union drm_amdgpu_cs*) ;
 int FUNC_7 (struct amdgpu_cs_parser*) ;
 int FUNC_8 (struct amdgpu_cs_parser*,int) ;

int FUNC_9(struct drm_device *VAR_4, void *VAR_5, struct drm_file *VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_4->dev_private;
 union drm_amdgpu_cs *VAR_8 = VAR_5;
 struct amdgpu_cs_parser VAR_9 = {};
 bool VAR_10 = 0;
 int VAR_11, VAR_12;

 if (!VAR_7->accel_working)
  return -VAR_1;

 VAR_9.adev = VAR_7;
 VAR_9.filp = VAR_6;

 VAR_12 = FUNC_5(&VAR_9, VAR_5);
 if (VAR_12) {
  FUNC_0("Failed to initialize parser %d!\n", VAR_12);
  goto out;
 }

 VAR_12 = FUNC_2(VAR_7, &VAR_9);
 if (VAR_12)
  goto out;

 VAR_12 = FUNC_1(VAR_7, &VAR_9);
 if (VAR_12) {
  FUNC_0("Failed in the dependencies handling %d!\n", VAR_12);
  goto out;
 }

 VAR_12 = FUNC_3(&VAR_9, VAR_5);
 if (VAR_12) {
  if (VAR_12 == -VAR_2)
   FUNC_0("Not enough memory for command submission!\n");
  else if (VAR_12 != -VAR_3 && VAR_12 != -VAR_0)
   FUNC_0("Failed to process the buffer list %d!\n", VAR_12);
  goto out;
 }

 VAR_10 = 1;

 for (VAR_11 = 0; VAR_11 < VAR_9.job->num_ibs; VAR_11++)
  FUNC_8(&VAR_9, VAR_11);

 VAR_12 = FUNC_7(&VAR_9);
 if (VAR_12)
  goto out;

 VAR_12 = FUNC_6(&VAR_9, VAR_8);

out:
 FUNC_4(&VAR_9, VAR_12, VAR_10);

 return VAR_12;
}
