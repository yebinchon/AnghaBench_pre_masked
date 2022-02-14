
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
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_8,
      u32 VAR_9, u32 VAR_10, u32 VAR_11)
{
 u32 VAR_12;

 if (VAR_11 == 0xffffffff)
  VAR_12 = FUNC_0(0, VAR_0, VAR_5, 1);
 else
  VAR_12 = FUNC_0(0, VAR_0, VAR_6, VAR_11);

 if ((VAR_9 == 0xffffffff) && (VAR_10 == 0xffffffff))
  VAR_12 |= VAR_3 |
   VAR_1;
 else if (VAR_9 == 0xffffffff)
  VAR_12 |= VAR_1 |
   (VAR_10 << VAR_4);
 else if (VAR_10 == 0xffffffff)
  VAR_12 |= VAR_3 |
   (VAR_9 << VAR_2);
 else
  VAR_12 |= (VAR_10 << VAR_4) |
   (VAR_9 << VAR_2);
 FUNC_1(VAR_7, VAR_12);
}
