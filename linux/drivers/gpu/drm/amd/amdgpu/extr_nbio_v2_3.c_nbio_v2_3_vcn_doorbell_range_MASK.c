
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_5, bool VAR_6,
      int VAR_7, int VAR_8)
{
 u32 VAR_9 = FUNC_2(VAR_1, 0, VAR_4);

 u32 VAR_10 = FUNC_1(VAR_9);

 if (VAR_6) {
  VAR_10 = FUNC_0(VAR_10,
            VAR_0, VAR_2,
            VAR_7);
  VAR_10 = FUNC_0(VAR_10,
            VAR_0, VAR_3, 8);
 } else
  VAR_10 = FUNC_0(VAR_10,
            VAR_0, VAR_3, 0);

 FUNC_3(VAR_9, VAR_10);
}
