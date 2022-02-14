
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int audio_endpt_idx_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_3,
          u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 unsigned long VAR_7;

 FUNC_1(&VAR_3->audio_endpt_idx_lock, VAR_7);
 FUNC_0(VAR_2 + VAR_4,
  VAR_5 | VAR_0);
 FUNC_0(VAR_1 + VAR_4, VAR_6);
 FUNC_2(&VAR_3->audio_endpt_idx_lock, VAR_7);
}
