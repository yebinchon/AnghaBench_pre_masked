
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct amdgpu_device {int flags; int smc_idx_lock; } ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_5(struct amdgpu_device *VAR_5,
       u8 *VAR_6, u32 VAR_7)
{
 u32 *VAR_8;
 unsigned long VAR_9;
 u32 VAR_10, VAR_11;

 if (VAR_6 == ((void*)0))
  return 0;
 if (VAR_7 == 0)
  return 0;

 if (VAR_5->flags & VAR_0)
  return 0;

 VAR_8 = (u32 *)VAR_6;
 VAR_11 = FUNC_0(VAR_7, 4) / 4;

 FUNC_3(&VAR_5->smc_idx_lock, VAR_9);

 FUNC_2(VAR_4, VAR_2);
 FUNC_2(VAR_3, 0);

 FUNC_2(VAR_4, VAR_1);
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
  VAR_8[VAR_10] = FUNC_1(VAR_3);
 FUNC_4(&VAR_5->smc_idx_lock, VAR_9);

 return 1;
}
