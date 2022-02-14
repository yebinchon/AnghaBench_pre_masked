
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int file; } ;
struct amdgpu_fpriv {int dummy; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_ctx {int dummy; } ;
typedef enum drm_sched_priority { ____Placeholder_drm_sched_priority } drm_sched_priority ;


 int VAR_0 ;
 struct amdgpu_ctx* FUNC_0 (struct amdgpu_fpriv*,unsigned int) ;
 int FUNC_1 (struct amdgpu_ctx*,int) ;
 int FUNC_2 (struct amdgpu_ctx*) ;
 int FUNC_3 (int ,struct amdgpu_fpriv**) ;
 struct fd FUNC_4 (int) ;
 int FUNC_5 (struct fd) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_1,
        int VAR_2,
        unsigned VAR_3,
        enum drm_sched_priority VAR_4)
{
 struct fd VAR_5 = FUNC_4(VAR_2);
 struct amdgpu_fpriv *VAR_6;
 struct amdgpu_ctx *VAR_7;
 int VAR_8;

 if (!VAR_5.file)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_5.file, &VAR_6);
 if (VAR_8) {
  FUNC_5(VAR_5);
  return VAR_8;
 }

 VAR_7 = FUNC_0(VAR_6, VAR_3);

 if (!VAR_7) {
  FUNC_5(VAR_5);
  return -VAR_0;
 }

 FUNC_1(VAR_7, VAR_4);
 FUNC_2(VAR_7);
 FUNC_5(VAR_5);

 return 0;
}
