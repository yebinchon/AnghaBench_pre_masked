
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int queue; int pipe; int me; } ;
struct amdgpu_device {int srbm_mutex; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct amdgpu_device*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_2,
          struct amdgpu_ring *VAR_3,
          bool VAR_4)
{
 uint32_t VAR_5 = VAR_4 ? 0x2 : 0x0;
 uint32_t VAR_6 = VAR_4 ? 0xf : 0x0;

 FUNC_1(&VAR_2->srbm_mutex);
 FUNC_3(VAR_2, VAR_3->me, VAR_3->pipe, VAR_3->queue, 0);

 FUNC_0(VAR_0, VAR_5);
 FUNC_0(VAR_1, VAR_6);

 FUNC_3(VAR_2, 0, 0, 0, 0);
 FUNC_2(&VAR_2->srbm_mutex);
}
