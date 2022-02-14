
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_5, int VAR_6,
   bool VAR_7, int VAR_8, int VAR_9)
{
 u32 VAR_10, VAR_11;

 if (VAR_6 < 2)
  VAR_10 = VAR_6 +
   FUNC_2(VAR_1, 0, VAR_4);
 else
  VAR_10 = VAR_6 + 0x4 +
   FUNC_2(VAR_1, 0, VAR_4);

 VAR_11 = FUNC_1(VAR_10);

 if (VAR_7) {
  VAR_11 = FUNC_0(VAR_11, VAR_0, VAR_2, VAR_8);
  VAR_11 = FUNC_0(VAR_11, VAR_0, VAR_3, VAR_9);
 } else
  VAR_11 = FUNC_0(VAR_11, VAR_0, VAR_3, 0);

 FUNC_3(VAR_10, VAR_11);
}
