
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int uvd_ctx_idx_lock; } ;
typedef int reg ;


 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (unsigned long,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_5(struct amdgpu_device *VAR_3, u32 VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;
 u32 VAR_8;

 VAR_6 = FUNC_1(VAR_0, 0, VAR_2);
 VAR_7 = FUNC_1(VAR_0, 0, VAR_1);

 FUNC_3(&VAR_3->uvd_ctx_idx_lock, VAR_5);
 FUNC_2(VAR_6, ((VAR_4) & 0x1ff));
 VAR_8 = FUNC_0(VAR_7);
 FUNC_4(&VAR_3->uvd_ctx_idx_lock, VAR_5);
 return VAR_8;
}
