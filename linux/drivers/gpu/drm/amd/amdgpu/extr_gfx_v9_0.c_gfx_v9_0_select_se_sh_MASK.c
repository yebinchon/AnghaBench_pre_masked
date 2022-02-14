
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
 int FUNC_0 (int,int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_9, u32 VAR_10, u32 VAR_11, u32 VAR_12)
{
 u32 VAR_13;

 if (VAR_12 == 0xffffffff)
  VAR_13 = FUNC_0(0, VAR_1, VAR_2, 1);
 else
  VAR_13 = FUNC_0(0, VAR_1, VAR_3, VAR_12);

 if (VAR_10 == 0xffffffff)
  VAR_13 = FUNC_0(VAR_13, VAR_1, VAR_4, 1);
 else
  VAR_13 = FUNC_0(VAR_13, VAR_1, VAR_5, VAR_10);

 if (VAR_11 == 0xffffffff)
  VAR_13 = FUNC_0(VAR_13, VAR_1, VAR_6, 1);
 else
  VAR_13 = FUNC_0(VAR_13, VAR_1, VAR_7, VAR_11);

 FUNC_1(VAR_0, 0, VAR_8, VAR_13);
}
