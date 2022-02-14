
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mutex; } ;
struct amdgpu_device {int flags; TYPE_1__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_8, u32 *VAR_9)
{
 struct amdgpu_device *VAR_10 = (struct amdgpu_device *)VAR_8;
 int VAR_11;

 FUNC_4(&VAR_10->pm.mutex);

 if (VAR_10->flags & VAR_1)
  VAR_11 = FUNC_2(VAR_6);
 else
  VAR_11 = FUNC_2(VAR_5);

 if (VAR_11 & VAR_2) {
  FUNC_0("Cannot get clockgating state when VCE is powergated.\n");
  goto out;
 }

 FUNC_3(VAR_3, VAR_4, 0);


 VAR_11 = FUNC_1(VAR_7);
 if (VAR_11 & (0x04 << 4))
  *VAR_9 |= VAR_0;

out:
 FUNC_5(&VAR_10->pm.mutex);
}
