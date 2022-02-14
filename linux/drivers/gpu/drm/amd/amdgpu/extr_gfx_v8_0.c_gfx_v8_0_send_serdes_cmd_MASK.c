
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {scalar_t__ asic_type; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct amdgpu_device*,int,int,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_19,
         uint32_t VAR_20, uint32_t VAR_21)
{
 uint32_t VAR_22;

 FUNC_2(VAR_19, 0xffffffff, 0xffffffff, 0xffffffff);

 FUNC_1(VAR_17, 0xffffffff);
 FUNC_1(VAR_18, 0xffffffff);

 VAR_22 = FUNC_0(VAR_16);
 if (VAR_19->asic_type == VAR_0)
  VAR_22 &= ~(VAR_15 |
     VAR_9 |
     VAR_4 |
     VAR_5 |
     VAR_8 |
     VAR_6 |
     VAR_7 |
     VAR_13 |
     VAR_14);
 else
  VAR_22 &= ~(VAR_15 |
     VAR_9 |
     VAR_4 |
     VAR_5 |
     VAR_8 |
     VAR_6 |
     VAR_7 |
     VAR_13 |
     VAR_2 |
     VAR_10 |
     VAR_14);
 VAR_22 |= (VAR_12 |
   (VAR_21 << VAR_3) |
   (VAR_20 << VAR_11) |
   (0xff << VAR_1));

 FUNC_1(VAR_16, VAR_22);
}
