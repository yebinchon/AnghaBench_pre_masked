
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_7, u32 *VAR_8)
{
 struct amdgpu_device *VAR_9 = (struct amdgpu_device *)VAR_7;
 int VAR_10;

 FUNC_3(&VAR_9->pm.mutex);

 if (VAR_9->flags & VAR_1)
  VAR_10 = FUNC_2(VAR_5);
 else
  VAR_10 = FUNC_2(VAR_4);

 if (VAR_10 & VAR_2) {
  FUNC_0("Cannot get clockgating state when UVD is powergated.\n");
  goto out;
 }


 VAR_10 = FUNC_1(VAR_6);
 if (VAR_10 & VAR_3)
  *VAR_8 |= VAR_0;

out:
 FUNC_4(&VAR_9->pm.mutex);
}
