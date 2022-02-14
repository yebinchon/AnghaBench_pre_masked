
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct amdgpu_device {int audio_endpt_idx_lock; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_2,
          u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 unsigned long VAR_6;

 FUNC_1(&VAR_2->audio_endpt_idx_lock, VAR_6);
 FUNC_0(VAR_1 + VAR_3, VAR_4);
 FUNC_0(VAR_0 + VAR_3, VAR_5);
 FUNC_2(&VAR_2->audio_endpt_idx_lock, VAR_6);
}
