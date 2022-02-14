
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int didt_idx_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_4(struct amdgpu_device *VAR_2, u32 VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_2(&VAR_2->didt_idx_lock, VAR_4);
 FUNC_1(VAR_1, (VAR_3));
 VAR_5 = FUNC_0(VAR_0);
 FUNC_3(&VAR_2->didt_idx_lock, VAR_4);
 return VAR_5;
}
