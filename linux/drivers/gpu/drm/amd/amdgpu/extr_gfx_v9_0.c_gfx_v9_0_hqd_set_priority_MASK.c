
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int queue; int pipe; int me; } ;
struct amdgpu_device {int srbm_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct amdgpu_device*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_3,
          struct amdgpu_ring *VAR_4,
          bool VAR_5)
{
 uint32_t VAR_6 = VAR_5 ? 0x2 : 0x0;
 uint32_t VAR_7 = VAR_5 ? 0xf : 0x0;

 FUNC_1(&VAR_3->srbm_mutex);
 FUNC_3(VAR_3, VAR_4->me, VAR_4->pipe, VAR_4->queue, 0);

 FUNC_0(VAR_0, 0, VAR_1, VAR_6);
 FUNC_0(VAR_0, 0, VAR_2, VAR_7);

 FUNC_3(VAR_3, 0, 0, 0, 0);
 FUNC_2(&VAR_3->srbm_mutex);
}
