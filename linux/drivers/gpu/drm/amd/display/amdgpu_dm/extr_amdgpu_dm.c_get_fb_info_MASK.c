
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int * obj; } ;
struct amdgpu_framebuffer {TYPE_1__ base; } ;
struct amdgpu_bo {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct amdgpu_bo*,int *) ;
 int FUNC_2 (struct amdgpu_bo*,int) ;
 int FUNC_3 (struct amdgpu_bo*) ;
 struct amdgpu_bo* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(const struct amdgpu_framebuffer *VAR_1,
         uint64_t *VAR_2)
{
 struct amdgpu_bo *VAR_3 = FUNC_4(VAR_1->base.obj[0]);
 int VAR_4 = FUNC_2(VAR_3, 0);

 if (FUNC_5(VAR_4)) {

  if (VAR_4 != -VAR_0)
   FUNC_0("Unable to reserve buffer: %d\n", VAR_4);
  return VAR_4;
 }

 if (VAR_2)
  FUNC_1(VAR_3, VAR_2);

 FUNC_3(VAR_3);

 return VAR_4;
}
