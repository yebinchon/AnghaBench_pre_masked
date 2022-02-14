
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int srbm_soft_reset; } ;
struct amdgpu_device {int flags; TYPE_1__ gmc; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static bool FUNC_2(void *VAR_10)
{
 u32 VAR_11 = 0;
 struct amdgpu_device *VAR_12 = (struct amdgpu_device *)VAR_10;
 u32 VAR_13 = FUNC_1(VAR_9);

 if (VAR_13 & VAR_8)
  VAR_11 = FUNC_0(VAR_11,
      VAR_3, VAR_2, 1);

 if (VAR_13 & (VAR_4 | VAR_5 |
     VAR_6 | VAR_7)) {
  if (!(VAR_12->flags & VAR_0))
   VAR_11 = FUNC_0(VAR_11,
       VAR_3, VAR_1, 1);
 }
 if (VAR_11) {
  VAR_12->gmc.srbm_soft_reset = VAR_11;
  return 1;
 } else {
  VAR_12->gmc.srbm_soft_reset = 0;
  return 0;
 }
}
