
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int se_cac_idx_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_4(struct amdgpu_device *VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_2(&VAR_3->se_cac_idx_lock, VAR_5);
 FUNC_1(VAR_0, 0, VAR_2, (VAR_4));
 VAR_6 = FUNC_0(VAR_0, 0, VAR_1);
 FUNC_3(&VAR_3->se_cac_idx_lock, VAR_5);
 return VAR_6;
}
