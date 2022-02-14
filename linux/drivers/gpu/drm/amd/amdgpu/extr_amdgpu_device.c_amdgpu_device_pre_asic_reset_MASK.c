
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int thread; } ;
struct amdgpu_ring {TYPE_1__ sched; } ;
struct amdgpu_job {int base; } ;
struct amdgpu_device {struct amdgpu_ring** rings; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_ring*) ;
 int FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct amdgpu_device *VAR_1,
     struct amdgpu_job *VAR_2,
     bool *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 bool VAR_6 = *VAR_3;


 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  struct amdgpu_ring *VAR_7 = VAR_1->rings[VAR_4];

  if (!VAR_7 || !VAR_7->sched.thread)
   continue;


  FUNC_7(VAR_7);
 }

 if(VAR_2)
  FUNC_9(&VAR_2->base);


 if (!FUNC_8(VAR_1)) {

  if (!VAR_6)
   VAR_6 = FUNC_2(VAR_1);

  if (!VAR_6) {
   FUNC_4(VAR_1);
   VAR_5 = FUNC_5(VAR_1);
   FUNC_3(VAR_1);
   if (VAR_5 || FUNC_1(VAR_1)) {
    FUNC_0("soft reset failed, will fallback to full reset!\n");
    VAR_6 = 1;
   }
  }

  if (VAR_6)
   VAR_5 = FUNC_6(VAR_1);

  *VAR_3 = VAR_6;
 }

 return VAR_5;
}
