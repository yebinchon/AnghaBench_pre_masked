
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct amdgpu_device {TYPE_1__* nbio_funcs; } ;
struct TYPE_2__ {int (* get_clockgating_state ) (struct amdgpu_device*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct amdgpu_device*,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_16, u32 *VAR_17)
{
 struct amdgpu_device *VAR_18 = (struct amdgpu_device *)VAR_16;
 uint32_t VAR_19;

 if (FUNC_1(VAR_18))
  *VAR_17 = 0;

 VAR_18->nbio_funcs->get_clockgating_state(VAR_18, VAR_17);


 VAR_19 = FUNC_0(VAR_4, 0, VAR_14);
 if (!(VAR_19 & (VAR_8 |
       VAR_9 |
       VAR_5 |
       VAR_6 |
       VAR_10 |
       VAR_7)))
  *VAR_17 |= VAR_2;


 VAR_19 = FUNC_0(VAR_4, 0, VAR_15);
 if (VAR_19 & VAR_12)
  *VAR_17 |= VAR_1;
 else if (VAR_19 & VAR_11)
  *VAR_17 |= VAR_0;
 else if (VAR_19 & VAR_13)
  *VAR_17 |= VAR_3;

 return;
}
