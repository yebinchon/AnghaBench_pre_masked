
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


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
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_2(struct amdgpu_device *VAR_13, u32 *VAR_14)
{
 int VAR_15, VAR_16;

 if (FUNC_1(VAR_13))
  *VAR_14 = 0;

 VAR_15 = FUNC_0(VAR_8, 0, VAR_12);

 VAR_16 = FUNC_0(VAR_8, 0, VAR_11);


 if ((VAR_15 & VAR_9) &&
     !(VAR_16 & (VAR_6 |
         VAR_7 |
         VAR_2 |
         VAR_3 |
         VAR_5 |
         VAR_4)))
  *VAR_14 |= VAR_1;


 if (VAR_15 & VAR_10)
  *VAR_14 |= VAR_0;
}
